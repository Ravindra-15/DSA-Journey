#include <iostream>
using namespace std;
int main()
{
    int rowCount;
    // taking input of rows from the user
    cout << "Enter Number of Rows: ";
    cin >> rowCount;

    // outer for-loop -> row observation
    for (int row = 0; row < rowCount; row++)
    {
        // inner for-loop -> print increasing sequence of numbers
        for (int col = 0; col < row + 1; col++)
        {
            cout << col + 1;
        }
        // inner for-loop -> print decreasing sequence of numbers
        for (int col = row; col >= 1; col--)
        {
            cout << col;
        }
        // move to the next line after printing each row
        cout << endl;
    }

    return 0;
}
