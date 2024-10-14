#include <iostream>
#include <vector>
using namespace std;
void checkKey(string &name, int i, int &n, char &key, bool &found, vector<int>& ans)
{
    // Base case 
    if (i >= n)
        return;

    // If the current character matches the key, add its index to the vector and set the found flag to true
    if (name[i] == key)
    {
        ans.push_back(i);  //Add index to vector
        found = true;      // Set the flag to true to indicate the key was found
    }

    checkKey(name, i + 1, n, key, found, ans);
}

int main()
{
    string name = "RavindraKumar";
    int n = name.length();
    int i = 0;

    // Character to search for
    char key = 'r';

    // Flag to check if the key was found
    bool found = false;
    
    // Vector to store the indices of occurrences of the key
    vector<int> ans;

    // Call the recursive function to find all indices of the key in the string
    checkKey(name, i, n, key, found, ans);

    // Print all the indices where the key was found
    cout << "Printing indices of key '" << key << "' in the string: " << endl;
    if (!ans.empty()) {
        for(auto val: ans){
            cout << val << " ";
        }
        cout << endl;
    }
    // If the key was not found, print the "not found" message
    if (!found)
    {
        cout << "Key '" << key << "' is not present in the string." << endl;
    }
    return 0;
}
