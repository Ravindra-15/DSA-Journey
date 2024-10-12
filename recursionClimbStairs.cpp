/*
Question: 
You are climbing a staircase. It takes `n` steps to reach the top. 
Each time you can either climb 1 or 2 steps. 
In how many distinct ways can you climb to the top?

This problem is similar to calculating the Fibonacci sequence.
*/

#include <iostream>
using namespace std;
int climbStairs(int n){
    if(n == 0 || n == 1) return 1;
    int finalAns =  climbStairs(n - 1) + climbStairs(n - 2);
    return finalAns;
}

int main() {
    int n;
    cout << "Enter the value of stairs: ";
    cin >> n;
    cout << endl;
    int ans = climbStairs(n);
    cout << "Total ways to climb: "<< ans;
    return 0;
}