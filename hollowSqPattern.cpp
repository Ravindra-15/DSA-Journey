#include <bits/stdc++.h>

using namespace std;

int main()
{
    int rowCount;
    cout << "Enter Number of Rows:";
    cin >> rowCount;
    for (int row = 0; row < rowCount; row++)
    {
        for (int col = 0; col < rowCount; col++)
        {
            if (row == 0 || row == rowCount - 1 || col == 0 || col == rowCount - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}