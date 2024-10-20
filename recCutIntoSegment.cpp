#include <iostream>
#include <limits.h>

using namespace std;

// Function to solve the problem recursively
// n - remaining length to cut
// x, y, z - possible lengths to cut
int solve(int n, int x, int y, int z) {
    // Base case: if remaining length is 0, no more cuts needed
    if (n == 0) {
        return 0;
    }

    // If remaining length becomes negative, it's an invalid solution
    if (n < 0) {
        return INT_MIN;  // Return a very small value to indicate invalid result
    }

    // Recursive calls to solve by cutting 'x', 'y', or 'z' length pieces
    int ans1 = solve(n - x, x, y, z) + 1;  // Try cutting length 'x'
    int ans2 = solve(n - y, x, y, z) + 1;  // Try cutting length 'y'
    int ans3 = solve(n - z, x, y, z) + 1;  // Try cutting length 'z'

    // Find the maximum number of pieces by comparing the three options
    int ans = max(ans1, max(ans2, ans3));
    
    return ans;  // Return the result for the current recursion
}

int main() {
    int n = 7;   // Total length of the rod
    int x = 5;   // Possible cut length 1
    int y = 2;   // Possible cut length 2
    int z = 2;   // Possible cut length 3

    // Call the solve function and get the result
    int ans = solve(n, x, y, z);

    // If the result is negative, it means no valid cuts were found, so return 0
    if (ans < 0) {
        ans = 0;
    }

    // Output the final answer
    cout << "Answer is: " << ans << endl;
    
    return 0;
}
