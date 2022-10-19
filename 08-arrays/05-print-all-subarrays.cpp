#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // subarrays from i...j
            for (int k = i; k <= j; k++)
            {
                cout << k << ", ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}