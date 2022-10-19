#include <iostream>
using namespace std;

int main()
{
    // Create
    int arr[100];              // by default, garbage values are stored
    int arr2[100] = {0};       // the first and rest fo the elements are gonna be 0
    int arr3[100] = {1, 2, 3}; // the three number are 1,2,3 and rest fo the elements are gonna be 0

    int sizeOfArray = sizeof(arr) / sizeof(int);
    cout << "length of array: " << sizeOfArray << endl;

    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}