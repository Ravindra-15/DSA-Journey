#include <iostream>
using namespace std;
bool searchElement(int arr[][3], int rows, int cols, int target)
{
    int start = 0;
    int end = rows * cols - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {   
        // Calculate row and column index from the mid value
        int rowIndex = mid / cols;
        int colIndex = mid % cols;

        if (arr[rowIndex][colIndex] == target)
        {
            cout << "The element is found at " << rowIndex << "th row " << colIndex << "th column";
            return true;
        }
        else if (arr[rowIndex][colIndex] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return false;  // Return false if the element is not found
}
int main()
{
    int arr[5][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}, {19, 20, 21}, {22, 23, 24}};
    int rows = 5;
    int cols = 3;
    int target = 24;
    bool ans = searchElement(arr, rows, cols, target);
    if (true)
    {
    }
    else
    {
        cout << "Element is not found.";
    }
    return 0;
}