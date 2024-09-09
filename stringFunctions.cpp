#include <iostream>
#include <string.h>
using namespace std;
int main()
{

    string str1 = "Hello";
    string str2 = "Everyone";

    //..............................length()................................................

    cout << "The length of " << str1 << " is : " << str1.length() << endl;
    cout << "The length of " << str2 << " is : " << str2.length() << endl;

    //..............................push_back() & pop_back().................................

    str1.push_back('R');
    cout << "New string after pushing character is :" << str1 << endl;
    str1.pop_back();
    cout << "New string after poping character is :" << str1 << endl;

    //....................................empty().............................................

    if (str1.empty())
    {
        cout << "String is empty.";
    }
    else
    {
        cout << "String "<< str1 <<" is not empty.";
    }
    cout << endl;
    //....................................substr()..........................................
    
    string str3 = "My Name is Ravindra Kumar";
    cout << "1st Substring of str3 : " << str3.substr(3,4) << endl;
    cout << "Another substring of str3 : " << str3.substr(11,8);
    return 0;
}