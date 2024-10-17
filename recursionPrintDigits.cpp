#include <iostream>

using namespace std;
void printDigits(int n)
{
    // Base case: If the number is 0, stop recursion
    if (n == 0)
    {
        return;
    }
    // Recursive step: Remove the last digit from the number
    int newValueOfN = n / 10;
    printDigits(newValueOfN);
    int digit = n % 10;// Extract and print the last digit of the current number
    cout << digit << " ";// Print the digit with a space
}

int main()
{
    int num = 876;
    printDigits(num);
    return 0;
}