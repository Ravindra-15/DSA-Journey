#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<int> arr{1, 2, 5, 8, 9, 11, 12};
    int brr[] = {12, 13, 14, 18, 19};
    int size = 5;
    if(binary_search(arr.begin(), arr.end(),12)){
        cout << "Number is present in vector array";
    }
    else{
        cout << "Number is not present in vector array";
    }
    cout << endl;
    if(binary_search(brr, brr + size, 12)){
        cout << "Number is present in array";
    }
    else{
        cout << "Number is not present in array";
    }

    return 0; 
}