#include <iostream>

using namespace std;
void search(int arr[][3], int row, int col,int num)
{
    for (int i = 0; i < row; i++)
    { 
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == num){
                cout << "Number is found at " << i << "th row and " << j << "th column";
                return;
            }
        }
         
    }
    cout << "Number not found in the array." << endl;
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3;
    int col = 3;
    int num;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
    cout << "Enter number to search in array : ";
    cin >> num;
    search(arr, row, col,num);
    return 0;
}
