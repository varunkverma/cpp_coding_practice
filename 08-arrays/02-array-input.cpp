#include <iostream>
using namespace std;

int main()
{
    // Create
    int n;

    cout << "enter size of array: ";
    cin >> n;
    cout << endl;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "enter element at " << i << " index: ";
        cin >> arr[i];
        cout << endl;
    }

    int sizeOfArray = sizeof(arr) / sizeof(int);
    cout << "length of array: " << sizeOfArray << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}