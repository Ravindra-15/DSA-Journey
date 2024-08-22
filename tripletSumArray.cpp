#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Initialize a vector with some integer values
    vector<int> arr{10, 20, 30, 40, 50};

    int sum = 80; // Target sum to be found among triplets

    for (int i = 0; i < arr.size(); i++)
    {
        // Nested loop to pick the second element 
        for (int j = i + 1; j < arr.size(); j++)
        {
            // Another nested loop to pick the third element 

            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum) // Check, sum of the three selected elements matches the target sum
                {
                    // Print the triplet that adds up to the target sum
                    cout << "Sum found at pair: " << "(" << arr[i] << "," << arr[j] << "," << arr[k] << ")" << endl;
                }
            }
        }
    }
    return 0;
}