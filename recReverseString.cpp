#include <iostream>

using namespace std;
void solve(string& name, int start, int end){
    if(start >= end){
        return;
    }

    swap(name[start], name[end]); 
    solve(name, start + 1 , end - 1);
}
int main() {
    string name;
    cout << "Enter a string  : ";
    cin >> name;
    int n = name.length();
    int start = 0;
    int end = n-1;
    solve(name, start, end);
    cout << "The reverse string is : "<< name;
    return 0;
}