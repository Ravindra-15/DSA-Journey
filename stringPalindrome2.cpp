#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str, int start, int end) {
    while (start <= end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

bool canBePalindrome(string str) {
    int start = 0;
    int end = str.length() - 1;

    while (start <= end) {
        if (str[start] != str[end]) {
            // Check if removing the character at 'start' or 'end' makes it a palindrome
            return isPalindrome(str, start + 1, end) || isPalindrome(str, start, end - 1);
        } 
        start++;
        end--;
    }

    return true;  // It's already a palindrome
}

int main() {
    string str = "abca";
    if (canBePalindrome(str)) {
        cout << "The string can be made a palindrome by removing at most one character." << endl;
    } else {
        cout << "The string cannot be made a palindrome by removing only one character." << endl;
    }
    return 0;
}
