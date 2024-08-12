#include <iostream>
using namespace std;
// Function to find the maximum of two numbers
void max(void)
{
    int num1, num2;
    cout << "Enter the First Number:";
    cin >> num1;
    cout << "Enter the Second Number:";
    cin >> num2;
    // Compare the two numbers and print the greater one
    if (num1 > num2)
    {
        cout << "First Number " << num1 << " is Greater.";
    }
    else
    {
        cout << "Second Number " << num2 << " is Grreater.";
    }
}
int main()
{
    // Call the max function to execute the comparison
    max();

    return 0;
}