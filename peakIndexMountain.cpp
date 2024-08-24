#include <iostream>
#include<vector>

using namespace std;
int findPeakIndex(vector<int> arr, int size){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end - start)/2;
    while(start < end){
        if(arr[mid] < arr[mid+1]){   // If mid element is less than the next element
            start = mid+1;  // Move start to mid + 1 (search in the right half)
        }
        else{ // If mid element is greater than or equal to the next element
            end = mid; // Move end to mid (search in the left half)
        }
        mid = start + (end - start)/2;
    }
    return end; // Return the peak index (start and end converge at the peak)
}

int main() {
    vector<int> arr{2, 3, 4, 7, 8, 9, 5, 4, 3}; // Example mountain array
    int size = arr.size();
    int peakIndexMountainArray = findPeakIndex(arr, size); // Call the function to find the peak index
    cout << "The peak index is :" << peakIndexMountainArray; // Output the peak index
    return 0;
     
}