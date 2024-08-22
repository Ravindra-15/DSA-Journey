#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Initialize a vector with binary values (0s and 1s)
    vector<int> arr{0, 2, 2, 1, 0, 2, 1, 1, 0, 1, 2, 1};

    // Initialize pointers for start and end positions
    int end = arr.size() - 1;
    int start = 0;
    int i = 0; // Index variable
    
    while (i != end)
    {
        if (arr[i] == 0)
        {

            swap(arr[start], arr[i]); // Swap the current element with the element at the start position
            start++;                  // Increment both 'start' and 'i' pointers
            i++;
        }
        else if (arr[i] == 1)// If the current element is 1, just move the index forward
        {
            i++;
        }
        else //(arr[i] == 2)
        {
            swap(arr[end], arr[i]); // If element is 2, swap it with the element at the end position
            end--;
        }
    }

    // Output the rearranged array
    for (auto value : arr)
    {
        cout << value << " ";
    }
    return 0;
}