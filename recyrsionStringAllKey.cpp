#include <iostream>
using namespace std;

void checkKey(string &name, int i, int &n, char &key, bool &found)
{
    // Base case  
    if (i >= n)
        return;

    //If the current character matches the key, print its index and set the found flag to true
    if (name[i] == key)
    {
        cout << "Key '" << key << "' is at index: " << i << endl;
        found = true;  //Set the flag to true to indicate the key was found
    }

    // Recursive call to check the next character in the string
    checkKey(name, i + 1, n, key, found);
}

int main()
{
    string name = "RavindraKumar";
    int n = name.length();
    int i = 0;

    // Character to search for
    char key = 'a';

    //Flag to check if the key was found
    bool found = false;
     
    checkKey(name, i, n, key, found);

    // If the key was not found, print the "not found" message
    if (!found)
    {
        cout << "Key '" << key << "' is not present in the string." << endl;
    }

    return 0;
}
