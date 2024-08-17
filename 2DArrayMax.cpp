//  #include <iostream>
// #include<limits.h> //for INT_MIN

// using namespace std;
// void findMax(int arr[][3], int row, int col,int &max) // Pass max by reference

// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (arr[i][j] > max){
//                 max = arr[i][j];  // Update max if a larger value is found

//             }
//         }

//     }
//      cout << max << " is the greatest number.";   // Print the maximum value after searching the entire array

// }

// int main()
// {
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int row = 3;
//     int col = 3;

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {

//             cout << arr[i][j] << " ";
//         }

//         cout << endl;
//     }
//     int max = INT_MIN; // Initialize max to the smallest possible integer value
//     findMax(arr, row, col, max); // Call the function
//     return 0;
// }

//........................................2nd simple to find maximum and minimum number......................................................

#include <iostream>
#include <limits.h> //for INT_MIN

using namespace std;
int findMax(int arr[][3], int row, int col)
{
    int max = INT_MIN; // Initialize max to the smallest possible integer value
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j]; // Update max if a larger value is found
            }
        }
    }
    return max; // return max value
}

int findMin(int arr[][3], int row, int col)
{
    int min = INT_MAX; // Initialize min to the greatest possible integer value
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j]; // Update min if a smaller value is found
            }
        }
    }
    return min; // return min value
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3;
    int col = 3;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    cout << "The greatest number is " << findMax(arr, row, col) << endl; // Call the function
    cout << "The smallest number is " << findMin(arr, row, col);
    return 0;
}
