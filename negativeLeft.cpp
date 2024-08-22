#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr{8, -7, 15, -11, 0, 2, -8, -6, 3, 9, -1, 4};

    int i = 0;
    int end = arr.size() - 1;

    while (i != end)
    {
        if (arr[i] > 0)
        {
            // If the current element is positive, swap it with the element at the 'end' index
            swap(arr[i], arr[end]);
            end--; // Move the 'end' pointer backward
        }
        else
        {
            i++; // If the current element is negative, move the index forward
        }
    }
    // Output
    for (auto value : arr)
    {
        cout << value << "  ";
    }
    return 0;
}