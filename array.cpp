#include <bits/stdc++.h>

using namespace std;

int main() {

    // int arr[5] = {0,2,3,4,5};
    // for(int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] <<endl;
    // }
     

    //........................................Taking array input from the user..................................

    int arr[5];
    cout << "Enter Five Numbers in Array:\n";
    for(int i = 0; i < 5; i++){
        cin >> arr[i]; // taking array input from the user
    }
    cout << "Original Array is: ";
    for(int i = 0; i < 5; i++){
    cout << arr[i] <<"\t" ; // printing original array
    }
    cout << endl;
    cout << "Double of Array Input is: ";
    for(int i = 0; i < 5; i++){
    cout << 2*arr[i] <<"\t" ; // printing double of array input
    }
    

    //...................................testing arrays , if we don't give enough input.......................
    
    
    // int arr[10] = { 2,4,5};
    // for (int i = 0; i <10 ; i++){
    //     cout <<  arr[i] << " ";
    // }
    // cout << endl;
    // cout << "This will give garbage values:"<<endl;
    // int arr2[10];
    // for (int i = 0; i <10 ; i++){
    //     cout <<  arr2[i] << endl;;
    // }


     
    return 0;

}