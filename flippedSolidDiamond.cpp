#include <iostream>
using namespace std;
int main()
{
    int rowCount;
    cout << "Enter The Number of Rows:";
    cin >> rowCount;

    // Top half of the diamond
    for (int row = 0; row < rowCount; row++)
    {
        // Print the leading stars
        for (int col = 0; col < rowCount - row; col++)
        {
            cout << "*";
        }

        // Print the middle spaces
        for (int col = 0; col < 2 * row; col++)
        {
            cout << " ";
        }

        // Print the trailing stars
        for (int col = 0; col < rowCount - row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half of the diamond
    for (int row = 0; row < rowCount; row++)
    {
        // Print the leading stars
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }

        // Print the middle spaces
        for (int col = 0; col < 2 * (rowCount - row - 1); col++)  //important formula
        {
            cout << " ";
        }

        // Print the trailing stars
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
