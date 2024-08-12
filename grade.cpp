#include <iostream>

using namespace std;
char grade(int marks)
{
    if (marks >= 90)
    {
        return 'A';
    }
    else if (marks >= 80)
    {
        return 'B';
    }
    else if (marks >= 70)
    {
        return 'C';
    }
    else if (marks >= 60)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}

int main()
{
    int marks;
    cout << "Enter Marks of Student:";
    cin >> marks;
    char getGrade = grade(marks);
    cout << getGrade;
    return 0;
}