#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rowCount;
    cout << "Enter Number of Rows: ";
    cin >> rowCount;
    cout << "Enter Number of Columns: ";
    int colCount;
    cin >> colCount;
    for (int row = 0; row < rowCount; row++)
    {
        // printing stars in each column of first and last row 
        if (row == 0 || row == rowCount - 1)
        {
            for (int col = 0; col < colCount; col++)
            {
                cout << "*";
            }
        }
        else
        {
            // first star
            cout << "*";
            // remaining middle spaces
            for (int i = 0; i < colCount-2; i++)
            {
                cout << " ";
            }
            // last star
            cout << "*";
        }
        // new row
        cout << endl;
    }
    return 0;
}