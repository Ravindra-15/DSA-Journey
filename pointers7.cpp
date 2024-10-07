#include <iostream>

// passing by reference
void solve(int& num) {
    num = 50;  // modifies the original 'a'
}

using namespace std;

int main() {
    int a = 5;

    solve(a);  // 'a' is passed by reference
    cout << a;  // Output will be 50

    return 0;
}
