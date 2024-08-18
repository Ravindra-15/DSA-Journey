#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <int> arr;

    cout << arr.size() << endl; // size 
    cout << arr.capacity();   //capacity
    cout << endl;

    arr.push_back(5); //pusinh element in array
    arr.push_back(6);
    //printing array element
    for(int i = 0; i < arr.size(); i++){
        cout <<arr[i] << " ";
    }
    cout << endl;
    arr.pop_back();  //deleting element from array
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << endl;
    }
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << endl;
    vector<int> brr(n, -1);
    cout << "Size of brr " << brr.size();
    cout << endl;
    cout << "Capacity of brr " << brr.capacity();
    cout << endl;
    cout << "brr elements :"<<endl;
     for(int i = 0; i < brr.size(); i++){
        cout << brr[i] << " ";
    }
    return 0;
}