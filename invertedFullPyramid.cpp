#include <iostream>
using namespace std;

int main()
{
    int rowCount;
    cout << "Enter Number of Rows: ";
    cin >> rowCount;

    //Loop through each row (from top to bottom)
    for (int row = 0; row < rowCount; row++)
    {
        // Print spaces before the stars
        for (int col = 0; col < row; col++)
        {
            cout << " "; //Print a space for each position before the stars
        }

        //Print stars
        for (int col = 0; col < rowCount - row; col++)
        {
            cout << "* "; //Print a star followed by a space
        }

        // Move to the next row
        cout << endl;
    }

    return 0;
}

