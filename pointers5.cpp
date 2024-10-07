#include <iostream>
using namespace std;
void arrSize(int arr[]){
    cout << "size of array inside arrSize function: " << sizeof(arr) << endl;
}
int main(){
    // char ch[20] = "Ravindra Kumar";
    // char* c = ch; //char* c = &ch
    // cout << c << endl;
    // cout << *c <<  endl;
    // cout << *(c + 1) << endl;
    // cout << &c << endl;
    // cout << &ch << endl;
    // cout << ch << endl;

    //...................................................................

    // char name[10] = "SherBano";
    // char* c = &name[0];
    // cout << name << endl;
    // cout << &name << endl;
    // cout << *name << endl;
    // cout << *(name + 3) << endl;
    // cout << c << endl;
    // cout << &c << endl;
    // cout << *(c + 3) << endl;
    // cout << c + 2 << endl;
    // cout << *c << endl;
    // cout << c + 8 << endl; //null

    //......................................................................

    // char ch = 'j';
    // char* cptr = &ch;
    // cout << cptr;

    //...................................................................

    // char name[10] = "Ravindra";
    // cout << name << endl;
    // char* ch = "Ravindra"; // Bad Practice
    // cout << ch << endl;

    //....................................................................

    int arr[10] = {10, 20, 30, 40};
    cout << "Size of array inside main function :" << sizeof(arr) << endl;

    arrSize(arr);
    return 0;
}