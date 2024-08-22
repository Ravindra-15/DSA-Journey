#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{10, 20, 30, 40, 50, 60}; // Initialize a vector with some integer values
    int sum = 50;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)// Nested loop to pick the second element in the pair
        {
            // Check if the sum of the two selected elements matches the target sum
            if(arr[i] + arr[j] == sum){
                
                // Print the pair that adds up to the target sum
                cout << "Sum found at pair: " << "(" << arr[i] << "," << arr[j] << ")" << endl;
            }
        }
    }
    return 0;
}