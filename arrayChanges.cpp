#include <iostream>

using namespace std;

void printarr(int arr[], int size)
{
    cout << endl
         << "new array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void inc(int arr[], int size)
{
    arr[0] = 5;
    arr[1] = 2;
    printarr(arr, size);
}

int main()
{
    int arr[] = {2, 5};
    int size = 2;
    cout << endl
         << "old array without changes : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    inc(arr, size);
    cout << endl
         << "old array after changes : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}