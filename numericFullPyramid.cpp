#include <iostream>
using namespace std;
int main()
{
    int rowCount;
    cout << "Enter The Number of Rows:";
    cin >> rowCount;

    for (int row = 0; row < rowCount; row++)
    {
        for (int col = 0; col < rowCount - row - 1; col++)
        {
            cout << " ";
        }
        // inner for-loop -> column observation
        for (int col = 0; col < row + 1; col++)
        {
            cout << row + col + 1;
        }
        int start = 2*row;
        for (int col = 0; col < row; col++)
        {
            cout << start;
            start--;
        }
        cout << endl;
    }
    return 0;
}