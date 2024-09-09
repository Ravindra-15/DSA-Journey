#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str1 = "Hello";
    string str2 = "Hello";

    //..........................................compare().........................................

    if (str1.compare(str2) == 0)
    {
        cout << "Both strings " << str1 << " & " << str2 << " are same.";
    }
    else
    {
        cout << "Strings " << str1 << " & " << str2 << " are not same.";
    }
    cout << endl;
    // compare() returns:
    //  A negative value if a < b
    //  0 if a == b
    //  A positive value if a > b
    string a = "hate";
    string b = "date";
    cout << a.compare(b); //here it will return a positive value because first character 'h' is greater than 'd'
    cout << endl;
    //...............................................find().......................................

    string sentence = "My Name is Ravindra Kumar.";
    string target = "Ravindra";

    if (sentence.find(target) == string::npos)
    {
        cout << "String not found.";
    }
    else
    {
        cout << "String " << target << " found at index: " << sentence.find(target);
    }
    cout << endl;
    //..............................................replace().....................................

    cout << sentence.replace(11, 8, "Aman") << endl; // replacing name in sentence

    //.............................................erase().........................................
    cout << sentence.erase(0, 3);
    return 0;
}