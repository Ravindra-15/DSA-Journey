#include <iostream>
using namespace std;

// Recursive function to check if the key exists in the string and return its index
int checkKey(string& name, int i, int& n, char& key) {
    // Base case 
    if(i >= n)
        return -1;

    if(name[i] == key)
        return i;

    // Recursive call to check the next character in the string
    int ans = checkKey(name, i + 1, n, key);
    return ans;
}

int main() {
    string name = "RavindraKumar";
    int n = name.length();
    int i = 0;

    // Character to search for
    char key = 'r';
    // char key = 'z';
    // Call the recursive function to find the index of the key in the string
    int ans = checkKey(name, i, n, key);

    // Check if the key was found or not and print the appropriate message
    if(ans == -1) {
        cout << "Key '" << key << "' is not present in the string.";
    } else {
        cout << "Key '" << key << "' is at index: " << ans;
    }

    return 0;
}
