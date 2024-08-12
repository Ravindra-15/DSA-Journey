#include <iostream>
using namespace std;

int getSum(int a)
{
    int result = 0;
    for (int i = 0; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            result = result + i;
        }
    }
    return result;
}

int main()
{
    int num;
    cout << "Enter the value to which  sum of even numbers is needed:";
    cin >> num;
    int sum = getSum(num);
    cout << "Sum upto " << num << " of even numbers is :" << sum;
    return 0;
}