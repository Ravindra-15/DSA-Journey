#include <iostream>

using namespace std;
//Recursive function to check if the key exists in the string
bool checkKey(string& name, int i, int& n, char& key){
    if(i >= n) // Base case 
    return false;

    if(name[i] == key)
    return true;
     //Recursive call to check the next character in the string
    bool ans = checkKey(name, i + 1, n, key);
    return ans;
}
int main() {
    string name = "RavindraKumar";
    int n = name.length(); // Calculate the length of the string
    int i = 0;
    char key = 'r';
    bool ans  =  checkKey(name, i, n, key);
    cout << ans;
    return 0;
}