#include <iostream>

using namespace std;
// Recursive function to return the nth Fibonacci number
int fibonacci(int n){
    if(n == 1) return 0;
    else if (n == 2) return 1;
    //RR -> f(n) = f(n-1) + f(n-2)
    int finalAns = fibonacci(n - 1) + fibonacci(n - 2);
    return finalAns;
}
int main() {
    int num;
    cout << "Enter the term you want to see of fibonacci series: " << endl;
    cin >> num;
    int ans = fibonacci(num);
    cout <<"Term is :" << ans << endl;
    return 0;
}