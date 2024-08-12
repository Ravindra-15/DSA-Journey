#include <iostream>

using namespace std;

int main()
{
    int rowCount;
    cout << "Enter Number of Rows:";
    cin >> rowCount;
    for (int row = 0; row < rowCount; row++)
    {
        int k = 0; // initialized to print stars*
        for (int col = 0; col < (rowCount * 2) - 1; col++)
        {
            if (col < rowCount - row - 1)
            {
                cout << " ";
            }
            else if (k < 2 * row + 1)
            {
                cout << "*";
                k++;
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