#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int s, int e, int target) {
    int mid = s + (e - s) / 2;  

    //Base Case 1:  
    if (s > e)
        return -1;

    //Base Case 2: If element is found at mid, return the index
    if (arr[mid] == target) {
        return mid;
    }

    // // Recursion:  
    // if (arr[mid] < target) {
    //     int ans = binarySearch(arr, mid + 1, e, target);
    //     return ans;  // return binarySearch(arr, mid + 1, e, target);
    // }

    // if (arr[mid] > target) {
    //     int ans = binarySearch(arr, s, mid - 1, target);
    //     return ans;
    // }

   // Recursion using ternary operator
    return (arr[mid] < target) 
        ? binarySearch(arr, mid + 1, e, target)  // Search in the right half
        : binarySearch(arr, s, mid - 1, target);  // Search in the left half
        
}

int main() {
    vector<int> arr{10, 20, 30, 40, 50};  
    int target = 30;  // Element to find
    int n = arr.size();  // Size of the array
    int s = 0;  // Start index
    int e = n - 1;  // End index
 
    int ans = binarySearch(arr, s, e, target);
    
    cout << "Target found at index: " << ans << endl;

    return 0;
}
