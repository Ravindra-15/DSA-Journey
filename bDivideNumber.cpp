#include <iostream>

using namespace std;
int divide(int dividend, int divisor)
{
    int start = 0;
    int end = abs(dividend); // Use absolute value to handle negative numbers
    int mid = start + (end - start) / 2;
    int ans = 0;
    while (start <= end)
    {
        if (abs(mid * divisor) == abs(dividend))
        {
            ans = mid;
            break;
        }
        else if (abs(mid * divisor) > abs(dividend))
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    } 
    // Determine the sign of the result based on the signs of the dividend and divisor
    if ((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0))
    {
        return ans;
    }
    else
    {
        return -ans;
    }
}
int main()
{
    int dividend, divisor;

    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;

    int ans = divide(dividend, divisor);
    cout << "Quotient: " << ans << endl;
    int precesion;
    cout << "Enter the number of floating digits in precison: ";
    cin >> precesion;
    double step = 0.1;       // Initial step size for decimal precision
    double finalAns = ans;  

     
    for (int i = 0; i < precesion; i++)
    {
        for (double j = finalAns; j * divisor < dividend; j = j + step)
        {
            finalAns = j;
        }
        step = step / 10; // Reduce the step size by a factor of 10 for the next decimal place
    }
    cout << "The final ans is : " << finalAns;
    return 0;
}