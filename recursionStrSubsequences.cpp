#include <iostream>
using namespace std;

// Function to print all subsequences of a given string
// str: the input string
// output: the current subsequence being generated
// i: the current index in the input string
void printSubsequences(string str, string output, int i) {

    // Base condition: if index is greater than or equal to the length of the string
    // print the current subsequence (output) and return
    if(i >= str.length()) {
        cout << output << endl;
        return;
    }

    // Recursive case 1: Exclude the current character
    printSubsequences(str, output, i + 1);

    // Recursive case 2: Include the current character in the subsequence
    output = output + str[i]; // Append current character to the output string
    // Alternatively, you can use output.push_back(str[i]);

    // Call the function again after including the current character
    printSubsequences(str, output, i + 1);
}

int main() {
    string str = "abc";  // Input string
    string output = "";  // Initialize the output subsequence as an empty string
    int i = 0;           // Start from the first index of the string
    
    // Call the function to print all subsequences of the string
    printSubsequences(str, output, i);
    
    return 0;
}
