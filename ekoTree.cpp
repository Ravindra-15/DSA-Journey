#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Checks if 'mid' height collects at least 'm' wood
bool isPossibleSolution(vector<long long int> trees, long long int m, long long int mid) {
    long long woodCollected = 0;   
    for (long long int i = 0; i < trees.size(); i++) {
        // Only collect wood if the current tree is taller than 'mid'
        if (trees[i] > mid) {
            woodCollected += trees[i] - mid;
        }
    }
    return woodCollected >= m;  // Return true if collected wood is at least 'm'
}
// Finds the max sawblade height to collect at least 'm' wood
long long int maxSawBladeHeight(vector<long long int> trees, long long int m) {
    long long int start = 0, end, ans = -1;
    end = *max_element(trees.begin(), trees.end());

    while (start <= end) {
        long long int mid = start + (end - start) / 2;
        // Check if current mid can collect the required amount of wood
        if (isPossibleSolution(trees, m, mid)) {
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return ans;
}
int main() {
    long long int n, m;
    cout << "Enter number of trees: ";
    cin >> n;
    cout << "Enter height required of tree: ";
    cin >> m;
    vector<long long int> trees;
    cout << "Enter trees height: ";
    while (n--) {
        long long int height;
        cin >> height;
        trees.push_back(height);
    }
    cout << "Sawblade height should be: " << maxSawBladeHeight(trees, m) << endl;
    return 0;
}
