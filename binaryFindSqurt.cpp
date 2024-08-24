#include <iostream>
using namespace std;

// Function to find the integer part of the square root using binary search
int findSqrt(int num)
{
    int start = 0;
    int end = num - 1;
    int mid = start + (end - start) / 2;
    int sqrt = -1;
    while (start <= end)
    {
        if (mid * mid > num)
        {
            end = mid - 1;
        }
        else if (mid * mid < num)
        {
            sqrt = mid;
            start = mid + 1;
        }
        else
        { // mid == num
            return mid;
        }
        mid = start + (end - start) / 2;
    }
    return sqrt;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int sqrt = findSqrt(num);
    cout << "The square root is :" << sqrt << endl;
    int precesion;
    cout << "Enter the number of floating digits in precison: ";
    cin >> precesion;
    double step = 0.1;      // Initial step size for refining the square root
    double finalAns = sqrt; // Start with the integer part of the square root

    // Loop to refine the square root to the required precision
    for (int i = 0; i < precesion; i++)
    {
        for (double j = finalAns; j * j < num; j = j + step)
        {
            finalAns = j;
        }
        step = step / 10; // Reduce the step size by a factor of 10 for the next decimal place
    }
    cout << "The final square root is : " << finalAns;
    return 0;
}