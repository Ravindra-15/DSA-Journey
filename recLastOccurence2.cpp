#include <iostream>

using namespace std;

// Recursive function to search for the last occurrence of a character in a string (right-to-left)
int solve(string& str, char& ch, int i){
    // Base condition: if index goes out of bounds, return -1 (character not found)
    if(i < 0){
        return -1;
    }

    // If the current character matches the target character, return its index
    if(str[i] == ch){
        return i;
    }

    // Recursively check the previous character (moving from right to left)
    return solve(str, ch, i-1);
}
int main(){
    string str;  // Input string
    char ch;     // Character to search for

    // Take user input for the string
    cout << "Enter a string: ";
    cin >> str;

    // Take user input for the character to search for in the string
    cout << "Enter character to search in string: ";
    cin >> ch;

    // Start searching from the last character in the string
    int i = str.length() - 1;   // Starting index (rightmost character)

    // Call the recursive function to find the last occurrence of the character
    int ans  = solve(str, ch, i);

    // Output the result (index of the last occurrence or -1 if not found)
    cout << ans;

    return 0;
}
