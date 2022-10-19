#include <iostream>
using namespace std;

// array are passed as referrence
// int *arr is same as int arr[]. Here sizeof(arr) will be 8 = size of a int pointer
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void funcArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] *= 10;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int n = sizeof(arr) / sizeof(int);

    printArray(arr, n);
    funcArray(arr, n);
    printArray(arr, n);

    return 0;
}