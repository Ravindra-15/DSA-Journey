#include <iostream>
#include<vector>
using namespace std;
bool checkArray(vector<int>& arr, int& n, int i){
    if(i == n - 1){
    return true;
    }

    if(arr[i + 1] < arr[i]){
    return false;
    }

    return checkArray(arr, n, i+1);

}
int main() {
    vector<int> arr{10, 20, 30, 40, 50}; 
    int n = arr.size();
    int i = 0;
    bool isSorted = checkArray(arr, n, i);
    
    if(isSorted){
        cout << "Array is sorted."<< endl;
    }
    else{
        cout << "Array is not sorted."<< endl;
    }
    return 0; 
} 