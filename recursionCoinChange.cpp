#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

// Function to find the minimum number of elements needed to sum up to the target
int solve(vector<int>& arr, int target)
{
    // Base case: if target is 0, no more elements are needed
    if (target == 0)
    {
        return 0;
    }
    
    // If target becomes negative, return a large value (impossible case)
    if (target < 0)
    {
        return INT_MAX;
    }

    int mini = INT_MAX; // Initialize to maximum integer value to find the minimum
    
    // Try each element in the array to reduce the target
    for (int i = 0; i < arr.size(); i++)
    {
        // Recursively solve for the reduced target
        int ans = solve(arr, target - arr[i]);

        // If the result is not impossible, update the minimum count
        if (ans != INT_MAX)
            mini = min(mini, ans + 1); // Add 1 to count the current element
    }

    return mini; // Return the minimum count of elements to achieve the target
}

int main()
{
    vector<int> arr{1, 2}; // Array of possible elements
    int target = 5;        // Target sum

    int ans = solve(arr, target); // Get the minimum number of elements to achieve the target

    cout << ans; // Output the result
    return 0;
}
