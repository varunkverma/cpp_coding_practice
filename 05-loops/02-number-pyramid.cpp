#include <iostream>
using namespace std;

void printPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // print spaces
        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }
        // print sequence
        int j = i;
        for (int c = 1; c <= i; c++)
        {
            cout << j++;
        }
        j--;
        // print in reverse
        while (j > i)
        {
            j--;
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    printPyramid(4);
    return 0;
}