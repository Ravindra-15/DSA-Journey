#include <iostream>

using namespace std;

// void sum(void){
//     int num1, num2;
//     cout << "Enter the First Number:";
//     cin >> num1;
//     cout << "Enter the Second Number:";
//     cin >> num2;
//     int sum = num1 + num2;
//     cout << sum;
// }
// int main() {
//     sum();
//     return 0;
// }
int getSum(int a, int b){
    int result = a + b;
    return result;
}
int main()
{
    int num1, num2;
    cout << "Enter the First Number:";
    cin >> num1;
    cout << "Enter the Second Number:";
    cin >> num2;
    int sum = getSum(num1, num2);
    cout << "The sum of numbers is :" << sum;
    return 0;
}

