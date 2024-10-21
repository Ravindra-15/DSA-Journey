#include <iostream>

using namespace std;

// Recursive function to find the last occurrence of a character in a string
void solve(string& str, char& ch, int i, int& ans){
    // Base condition: if index exceeds the string length, return
    if (i >= str.length()){
        return;
    }

    // If the current character matches the target character, update the answer
    if(str[i] == ch){
        ans = i;
    }

    // Recursive call to check the next character
    solve(str, ch, i+1, ans);
}

int main(){
    string str;  // Input string
    char ch;     // Character to search for
    cout << "Enter a string: ";
    cin >> str;  // Input the string
    cout << "Enter character to search in string: ";
    cin >> ch;   // Input the character

    int i = 0;   // Starting index
    int ans = -1; // To store the last occurrence, initialized to -1 (if not found)

    // Call the recursive function to find the last occurrence of the character
    solve(str, ch, i, ans);

    // Output the result (index of the last occurrence or -1 if not found)
    cout << ans;

    return 0;
}
