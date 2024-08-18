#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Initialize two arrays
    int arr[] = {1, 2, 3, 4, 5};
    int sizeA = 5;
    int brr[] = {6, 7, 8, 9, 10};
    int sizeB = 5;

    // Initialize a vector to store the union of the two arrays
    vector<int> ans;

    // Add elements from the first array to the vector
    for (int i = 0; i < sizeA; i++)
    {
        ans.push_back(arr[i]);
    }

    // Add elements from the second array to the vector
    for (int i = 0; i < sizeB; i++)
    {
        ans.push_back(brr[i]);
    }

    // Output the combined vector which represents the union of the two arrays
    cout << "The union of arrays: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}