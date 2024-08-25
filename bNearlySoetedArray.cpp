#include <iostream>
#include <vector>
using namespace std;
// Function to perform binary search
int findTarget(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        } 
        // Check if the element just before mid is the target (if it exists)
        else if (mid - 1 >= start && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        // Check if the element just after mid is the target (if it exists)
        else if (mid + 1 <= end && arr[mid + 1] == target)
        {
            return mid + 1;
        }
        if (target > arr[mid])
        {
            start = mid + 2;
        }
        else
        {
            end = mid - 2;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    vector<int> arr{5, 4, 10, 20, 15, 40, 30};
    int target = 15;
    int ans = findTarget(arr, target);
    cout << "Index of " << target << " is " << ans;

    return 0;
}