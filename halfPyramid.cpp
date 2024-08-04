#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rowCount;
    // taking input of rows from the user
    cout << "Enter Number of Rows:";
    cin >> rowCount;
    // outer for-loop -> row observation
    for (int row = 0; row < rowCount; row++)
    {
        // inner for-loop -> column observation
        for (int col = 0; col < row+1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}