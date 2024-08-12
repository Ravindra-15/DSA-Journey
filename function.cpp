#include <iostream>
using namespace std;

// Function to print a message multiple times based on user input
void function()
{
    int n;
    // Prompt the user to enter a number
    cout << "Enter the value of number: ";
    cin >> n;

    // Loop to print the message 'n' times
    for (int i = 0; i < n; i++)
    {
        cout << "This is a Function." << endl;
    }
}

int main()
{
    // Call the function to execute the message printing logic
    function();
    function();
    return 0;
}
