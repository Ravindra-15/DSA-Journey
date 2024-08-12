#include <iostream>
#include<cmath>
using namespace std;
int decimalToBinary(int n)
{
    int binaryNo = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        binaryNo = bit * pow(10,i++) + binaryNo;
        n = n/2;
    }
    return binaryNo;
}
int main()
{
    int num;
    cout << "Enter the number to find its binary number :";
    cin >> num;
    int binary = decimalToBinary(num);
    cout <<"The binary form of " << num << " is :" << binary;
    return 0;
}