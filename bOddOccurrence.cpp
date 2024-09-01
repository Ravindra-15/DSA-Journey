#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> arr){
  int start =0;
  int end = arr.size() - 1;
  int mid = start + (end -start)/2;

  while(start <= end){
    if( start ==  end){
        return start;
    }
     // Check if mid is even
    if(mid%2 == 0){
        // If the element at mid is equal to the next element, the single element is in the right half
        if(arr[mid] == arr[mid +1]){
            start = mid + 2;
        }
        else{  
            // Otherwise, it's in the left half or at mid
            end = mid;
        }
    }
    // If mid is odd
    else{
        // If the element at mid is equal to the previous element, the single element is in the right half
        if(arr[mid] == arr[mid - 1]){
            start = mid + 1;  
        }
        // Otherwise, it's in the left half
        else{
            end = mid - 1;
        }
    }
    mid = start + (end -start)/2;
  }
  return -1;
} 
int main() {
    vector<int> arr{1,1,2,2,3,3,4,4,5,5,9,3,3,7,7};
    int ans = solve(arr);
    cout << "The number is: " << arr[ans];

    return 0;
}