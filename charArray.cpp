#include <iostream>
#include <string.h>

using namespace std;

// Function to calculate the length of a name
int getNameLength(char name[])
{
    int length = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

// Function to reverse the name
int newName(char name[])
{
    int start = 0;
    int n = getNameLength(name);
    int end = n - 1;
    while (start <= end)
    {
        swap(name[start], name[end]);
        start++;
        end--;
    }
}

// Function to replace spaces with '@'
void replaceSpaces(char sentence[])
{
    int i = 0;
    for (int i = 0; i < strlen(sentence); i++)
    {
        if (sentence[i] == ' ')
        {
            sentence[i] = '@';
        }
    }
}

int main()
{
    // Taking name input from user
    char name[100];
    cout << "Enter Name : ";
    cin.getline(name, 100);
    
    // Output the length of the name
    cout << "The Size of Name is : " << getNameLength(name) << endl;
    
    // Reverse the name and print
    newName(name);
    cout << "The Reversed Name is : " << name << endl;

    // Taking sentence input from user
    char sentence[100];
    cout << "Enter Sentence : ";
    cin.getline(sentence, 100);
    
    // Replace spaces in the sentence
    replaceSpaces(sentence);
    cout << "Printing Sentence: " << sentence;
    
    return 0;
}
