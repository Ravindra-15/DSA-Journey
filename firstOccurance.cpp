#include <iostream>
#include <vector>
using namespace std;
int firstOccrance(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;  // Variable to store the answer (index)

    while (start <= end)
    {
        if (arr[mid] == target)   // If target is found
        {
            ans = mid;  // Update answer with current mid index
            end = mid - 1;  // Move end to mid - 1 to search for earlier occurrences
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;   // Recalculate mid for the next iteration
    }
    return ans;   // Return the index of the first occurrence or -1 if not found
}

int main()
{
    vector<int> arr{1, 2, 2, 4, 4, 4, 5, 5, 6, 8, 8};   // Sorted array of integers
    int target = 4;   // Target value to find
  
    int ans = firstOccrance(arr, target);
    if (ans == -1)   // Check if the target was not found
    {
        cout << "No such element exists in vector array.";
    }
    else
    {
        cout << "First Occurance of number is at index: " << ans;
    }
    return 0;
}