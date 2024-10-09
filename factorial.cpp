#include <bits/stdc++.h>

using namespace std;
int factorial(int n){
    if(n == 1){
        return 1;
    }
    int finalAns = n * factorial(n - 1);
    return finalAns; 
}
int main() {
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    int ans = factorial(num);
    cout << "Factorial is: " << ans;
    return 0;
}