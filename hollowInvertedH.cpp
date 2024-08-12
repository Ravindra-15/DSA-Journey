#include <iostream>
using namespace std;

int main()
{
    int rowCount;
    cout << "Enter Number of Rows: ";   
    cin >> rowCount;

    // Loop through each row (from top to bottom)
    for (int row = 0; row < rowCount; row++)
    {
        //Print spaces before the stars
        for (int col = 0; col < rowCount; col++)
        {
            // Condition to print stars at specific positions:
            //First row
            // First column
            //Last column (rowCount - row - 1)
            if (row == 0 || col == 0 || col == rowCount - row - 1)
            {
                cout << "*"; // Print a star
            }
            else
            {
                cout << " "; // Print a space
            }
        }

        // Move to the next row
        cout << endl; // Print a newline character
    }

    return 0;
}
