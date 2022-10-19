#include <iostream>
#include <algorithm>

using namespace std;

void sortInAscendingOrder(int *arr, int n)
{
    sort(arr, arr + n);
}

void sortInDescendingOrder(int *arr, int n)
{
    sort(arr, arr + n, greater<int>());
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
    int arr1[] = {5, 1, 88, 2, 6, 4};
    int arr2[] = {5, 1, 88, 2, 6, 4};

    int n = sizeof(arr1) / sizeof(int);

    printArray(arr1, n);
    sortInAscendingOrder(arr1, n);
    printArray(arr1, n);

    n = sizeof(arr2) / sizeof(int);

    printArray(arr2, n);
    sortInDescendingOrder(arr2, n);
    printArray(arr2, n);

    return 0;
}
