#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

//Recursive function to calculate the maximum sum of non-adjacent elements
void solve(vector<int> &arr, int i, int sum, int &maxi)
{
    //Base condition: if index goes out of bounds, update the maximum sum
    if (i >= arr.size())
    {
        maxi = max(sum, maxi);  //Compare current sum with maximum and update maxi
        return;
    }

    //Include the current element and move to the next non-adjacent element
    solve(arr, i + 2, sum + arr[i], maxi);
    
    //Exclude the current element and move to the next element
    solve(arr, i + 1, sum, maxi);
}

int main()
{
    // Array of integers (input)
    vector<int> arr{1, 2, 3, 1, 3, 5, 8, 1, 9};
    
    int maxi = INT_MIN;  // Variable to store the maximum sum
    int i = 0;           // Starting index
    int sum = 0;         // Initial sum
    
    // Call the solve function to calculate the maximum sum of non-adjacent elements
    solve(arr, i, sum, maxi);

    // Output the result
    cout << maxi << endl;

    return 0;
}
