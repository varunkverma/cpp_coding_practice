#include <iostream>
using namespace std;

void reverseArray(int *arr, int n)
{
    int *p1, *p2, t;

    for (int i = 0; i < n / 2; i++)
    {
        p1 = &arr[i];
        p2 = &arr[n - 1 - i];
        t = *p1;
        *p1 = *p2;
        *p2 = t;
    }
}

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int size = sizeof(arr) / sizeof(int);

    printArray(arr, size);

    reverseArray(arr, size);

    printArray(arr, size);

    return 0;
}
