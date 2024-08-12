#include <iostream>
using namespace std;

int main()
{
    int rowCount;
    cout << "Enter The Number of Rows: ";
    cin >> rowCount;

    // Print the top half of the hollow diamond
    for (int row = 0; row < rowCount; row++)
    {
        for (int col = 0; col < rowCount - row - 1; col++)
        {
            cout << " "; // Print a space for each position before the stars
        }

        // Print stars
        for (int col = 0; col < (2 * row) + 1; col++)
        {
            if (col == 0 || col == 2 * row)
                cout << "*"; //Print a star at the beginning and end of each row
            else
                cout << " "; //Print spaces between stars
        }

        // Move to the next row
        cout << endl;
    }

    // Print the bottom half of the hollow diamond
    for (int row = 0; row < rowCount; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }

        // Print stars
        for (int col = 0; col < 2 * rowCount - 2 * row - 1; col++)
        {
            if (col == 0 || col == 2 * rowCount - 2 * row - 2)
            {
                cout << "*"; // Print a star at the beginning and end of each row
            }
            else
            {
                cout << " "; // Print spaces between stars
            }
        }
        // Move to the next row
        cout << endl;
    }

    return 0;
}
