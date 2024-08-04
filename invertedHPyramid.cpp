#include <bits/stdc++.h>
using namespace std;
int main()
{
    int colCount;
    // taking input of columns from the user
    cout << "Enter Number of Columns:";
    cin >> colCount;
    // outer for-loop -> row observation
    for (int row = 0; row < colCount; row++)
    {
        // inner for-loop -> column observation
        for (int col = 0; col <colCount-row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}