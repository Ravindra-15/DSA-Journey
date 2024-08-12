#include <iostream>
using namespace std;
int main()
{
    int rowCount;
    //taking input of rows from the user
    cout << "Enter Number of Rows: ";
    cin >> rowCount;

    //outer for-loop -> row observation
    for (int row = 0; row < rowCount; row++)
    {   
        int col;
        // inner for-loop -> print increasing sequence of numbers
        for (col = 0; col < row + 1; col++)
        {

            int ans = col +1;
            char ch = ans + 'A'-1;
            cout << ch;
        }
        //inner for-loop -> print decreasing sequence of numbers
        for (int col = row; col >= 1; col--)
        {   
            //Calculate the character to be printed
            int ans = col;
            char ch = ans + 'A'-1;
            cout << ch;
        }
        //move to the next line after printing each row
        cout << endl;
    }

    return 0;
}
