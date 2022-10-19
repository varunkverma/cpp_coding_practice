#include <iostream>

using namespace std;

void printPatter(int n)
{
    // rows
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        // first in ordered sequence
        for (int j = 0; j < n - i; j++)
        {
            printf("%c", ch + j);
        }

        // reverse sequence
        for (int j = n - 1 - i; j >= 0; j--)
        {
            printf("%c", ch + j);
        }
        cout << endl;
    }
}

int main()
{
    printPatter(5);

    return 0;
}