#include <iostream>
#include <string.h>
using namespace std;

// Function to calculate the length of the string
int lengthString(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++; 
    }
    return length;
}

// Function to convert string to upper case
void stringUpperCase(char str[], int length) {
    for (int i = 0; i < length; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A'; //Convert to upper case
        }
    }
    cout << "String in Upper Case : " << str << endl;
}

//Function to convert string to lower case
void stringLowerCase(char str[], int length) {
    for (int i = 0; i < length; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a'; // Convert to lower case
        }
    }
    cout << "String in Lower Case : " << str << endl;
}

int main() {
    char str[100];
    cout << "Enter a string : ";
    cin.getline(str, 100); // Get input string from user
    int length = lengthString(str); // Get the length of the string
    cout << "The size of the string is: " << length << endl;
   
    stringUpperCase(str, length); 
    stringLowerCase(str, length); 
    
    return 0;
}
