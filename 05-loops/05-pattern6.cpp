#include <iostream>
using namespace std;

void mainFn()
{
    // write your code here
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        char letter = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << letter++;
        }
        letter--;
        for (int j = 1; j <= i; j++)
        {
            cout << letter--;
        }
        cout << endl;
    }
}

int main()
{
    mainFn();
    return 0;
}