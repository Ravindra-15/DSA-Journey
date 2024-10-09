#include <iostream>

using namespace std;
void printCounting(int n){
    if ( n == 0){
        return;
    }
    cout << n << endl;

    printCounting(n - 1);
}
int main() {
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    printCounting(num);
    cout << endl;
    
    return 0;
}