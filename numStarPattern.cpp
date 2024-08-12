#include <iostream>

using namespace std;

int main() {
    
    int rowCount;
    // taking input of rows from the user
    cout << "Enter Number of Rows:";
    cin >> rowCount;
    //Upper Pattern
    // outer for-loop -> row observation
    for (int row = 0; row < rowCount; row++)
    {
        // inner for-loop -> column observation
        for (int col = 0; col < row+1; col++)
        {   

            // Print the current row number + 1
            cout << row+1;

            // Print an asterisk * if it's not the last column in the current row
            
            if(col != row)
            cout << "*";
        }
        cout<<endl;
    }
    //Lower Pattern
    for (int row = 0; row < rowCount; row++)
    {
        // inner for-loop -> column observation
        for (int col = 0; col <rowCount-row; col++)
        {
            // Print an asterisk * if it's not the last column in the current row
            cout << rowCount-row;
             if(col != rowCount-row-1)
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}