#include <iostream>
#include <vector>
using namespace std;
int lastOccurrence(vector<int> arr, int target)
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
            start = mid + 1;  // Move start to mid + 1 to search for last occurrences
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
    return ans;   // Return the index of the last occurrence or -1 if not found
}

int main()
{
    vector<int> arr{2, 3, 4, 7, 7, 7, 8, 8, 12, 12, 13};   // Sorted array of integers
    int target = 7;   // Target value to find
  
    int ans = lastOccurrence(arr, target);
    if (ans == -1)   // Check if the target was not found
    {
        cout << "No such element exists in vector array.";
    }
    else
    {
        cout << "Last Occurrence of the  number is at index: " << ans;
    }
    return 0;
}