#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossibleSolution(vector<int> cooksRanks, int nP, int mid) {
    int currP = 0; // Current pratas cooked
    for (int i = 0; i < cooksRanks.size(); i++) {
        int R = cooksRanks[i], j = 1;
        int timeTaken = 0; //Time taken by current cook
        while (true) {
            if (timeTaken + j * R <= mid) { //Check if current cook can cook more
                ++currP;     // Increase pratas cooked
                timeTaken += j * R;
                ++j;
            } else {
                break; //If time exceeded, stop this cook
            }
        }
        if (currP >= nP) { // Check if required pratas are cooked
            return true;
        }
    }
    return false; // If pratas not cooked by all
}

int minTimeToCompleteOrder(vector<int> cooksRanks, int nP) {
    int start = 0;
    int highestRank = *max_element(cooksRanks.begin(), cooksRanks.end());
    int end = highestRank * (nP * (nP + 1)) / 2; // Calculate upper bound for binary search
    int ans = -1;

    //Perform binary search for minimum time
    while (start <= end) {
        int mid = (start + end) / 2;
        if (isPossibleSolution(cooksRanks, nP, mid)) { // Check if mid time is feasible
            ans = mid; // Store the answer
            end = mid - 1; // Try for smaller time
        } else {
            start = mid + 1; // Increase time if not feasible
        }
    }
    return ans; // Return minimum time
}

int main() {
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;
    while (t--) {
        int nP, nC;
        cout << "Enter number of pratas required: ";
        cin >> nP;
        cout << "Enter number of cooks: ";
        cin >> nC;
        vector<int> cooksRanks;
        while (nC--) {
            int r;
            cout << "Enter rank of cook: ";
            cin >> r;
            cooksRanks.push_back(r);
        }
        cout << "Minimum time to complete order: " << minTimeToCompleteOrder(cooksRanks, nP) << endl;
    }
    return 0;
}
