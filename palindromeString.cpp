#include <iostream>
#include<string.h>

using namespace std;
int lengthString(char str[])
{
    int length = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

bool palindrome(char str[]){
    int start = 0;
    int n = lengthString(str);
    int end = n - 1;

    while(start <= end){
        if(str[start] == str[end]){
            start++;
            end--;
        }
        else{
           return false;
        }
    }
    return true;
}

int main()
{
    char str[100];
    cout << "Enter a string : ";
    cin.getline(str, 100);
    int ans = lengthString(str);
    cout <<"The size of string is :" <<ans << endl;
   int finalAns = palindrome(str);
   if(finalAns == true){
    cout << "The string is palindrome";
   }
   else{
    cout << "The string is not palindrome";
   }
    return 0;
}