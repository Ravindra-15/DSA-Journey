#include <iostream>

using namespace std;
void linear(int arr[], int size, int num)
{
    for (int i = 0; i < num; i++)
    {
        // Check if the current element matches the number being searched
        if (arr[i] == num)
        { 
            // If found, print the number and its index
            cout << "Number " << arr[i] << " is found at index " << i << endl;
            break;  // Exit the loop once the number is found
        }
        
    }
}

int main()
{
    // Initialize the array with values from 1 to 10
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int num;
    cout << "Enter number to search in array from 0 to 10 :";
    cin >> num;
    // Call the linear search function to find the number
    linear(arr, size, num);
    return 0;
}