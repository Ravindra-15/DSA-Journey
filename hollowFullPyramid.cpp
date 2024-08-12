#include <iostream>
using namespace std;
int main()
{
    int rowCount;
    cout << "Enter Number of Rows: ";
    cin >> rowCount;

    // Loop through each row
    for (int row = 0; row < rowCount; row++)
    {
        int k = 0; // Initialize k for printing stars

        // Loop through each column
        for (int col = 0; col < (rowCount * 2) - 1; col++)
        {
            // Print spaces before the first star
            if (col < rowCount - row - 1)
            {
                cout << " ";
            }
            else if (k < 2 * row + 1)
            {
                // Print stars with conditions:
                // - First and last stars in each row
                // - Stars forming the pyramid shape
                if (k == 0 || k == 2 * row || row == rowCount - 1)
                    cout << "*";
                else
                    cout << " "; // Print spaces between stars
                k++;
            }
            else
            {
                cout << " "; // Print spaces after the last star
            }
        }
        cout << endl; // Move to the next row
    }
    return 0;
}
