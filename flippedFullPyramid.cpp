#include <iostream>
using namespace std;

int main()
{
    int rowCount;
    cout << "Enter Number of Rows: ";
    cin >> rowCount;

    // Print the top half of the flipped pyramid
    for (int row = 0; row < rowCount; row++)
    {
        // Print spaces before the stars
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }

        // Print stars
        for (int col = 0; col < rowCount - row; col++)
        {
            cout << "* ";
        }

        // Move to the next row
        cout << endl;
    }

    // Print the bottom half of the flipped pyramid
    for (int row = 0; row < rowCount; row++)
    {
        // Print spaces before the stars (left-aligned)
        for (int col = 0; col < rowCount - row - 1; col++)
        {
            cout << " ";
        }
        // Print stars
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        // Move to the next row
        cout << endl;
    }

    return 0;
}