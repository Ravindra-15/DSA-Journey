#include <iostream>
using namespace std;
int getMax(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > c && b > a)
    {
        return b;
    }
    else{
        return c;
    }

}

    int main()
    {
        int num1, num2, num3;
        cout << "Enter the First Number:";
        cin >> num1;
        cout << "Enter the Second Number:";
        cin >> num2;
        cout << "Enter the Third Number:";
        cin >> num3;
        int max = getMax(num1, num2, num3);
        cout << "The max number is :" << max;
        return 0;
    }