#include <iostream>
using namespace std;
// Function to transpose a 2D array...
void transpose(int arr[][3], int row, int col, int transArr[][3])
{
    // Loop through the array to swap rows with columns
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transArr[j][i] = arr[i][j]; // Assign the transposed value to the new array
        }
    }
}

//Function to print a 2D array
void printArray(int arr[][3], int row, int col)
{
    // Loop through the array to print each element
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " "; //Print the current element
        }
        cout << endl; //Move to the next line after each row
    }
}

int main()
{ 
    // Initialize a 3x3 array
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3;
    int col = 3;
    int num;
    cout << "printing original Array:" << endl; // Print the original array
    printArray(arr, row, col);
    cout << "Transposing Array:" << endl;
     int transArr[3][3];   // Array to store the transpose
    transpose(arr, row, col, transArr);
    cout << "printing Transposed Array:" << endl;

    printArray(transArr, row, col);
    return 0;
}
