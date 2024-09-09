#include <iostream>
#include <string.h>

using namespace std;

// Function to calculate the length of the string
int lengthString(char str[]) {
    int length = 0;
    int i = 0;
    while (str[i] != '\0') {
        length++;  
        i++;
    }
    return length;
}

// Function to check if the string is a palindrome
bool palindrome(char str[]) {
    int start = 0;
    int n = lengthString(str);  
    int end = n - 1;

    while (start <= end) {
        if (str[start] == str[end]) { //Compare characters
            start++;
            end--;
        } else {
            return false; //Not a palindrome
        }
    }
    return true; // Palindrome
}

int main() {
    char str[100];
    cout << "Enter a string : ";
    cin.getline(str, 100); // Read input string
    int ans = lengthString(str);
    cout << "The size of the string is: " << ans << endl;

    bool finalAns = palindrome(str); //Check for palindrome
    if (finalAns) {
        cout << "The string is a palindrome";
    } else {
        cout << "The string is not a palindrome";
    }
    return 0;
}
