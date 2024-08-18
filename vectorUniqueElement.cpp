#include <iostream>
#include <vector>
using namespace std;
// Function to find the unique element in the array
int uniqueElement(vector<int> arr)
{
    int ans = 0;
    // XOR all the elements together, duplicates will cancel out, leaving the unique element
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n); // Create a vector of size 'n' to store the array elements
    cout << "Enter the elements of array(Make sure that elements appears twice except one element):";
    cout << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    // Call the function to find the unique element
    int findUniqueElement = uniqueElement(arr);
    cout << "Unique element is : " << findUniqueElement;
    return 0;
}