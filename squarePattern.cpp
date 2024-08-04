#include <iostream>

using namespace std;

int main()
{
    // outer loop for the Rows of solid rectangle
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++) // internal loop,to print * in each row
            cout << "* ";
        cout << endl;
    }
    cout << endl;
}