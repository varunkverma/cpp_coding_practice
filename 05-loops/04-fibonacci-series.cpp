#include <iostream>
using namespace std;

void mainFn()
{
    // write your code here
    int n;

    cin >> n;

    if (n == 1)
    {
        cout << 0;
    }
    else if (n == 2)
    {
        cout << 1;
    }
    else
    {
        int x = 0, y = 1;
        for (int i = 2; i <= n; i++)
        {
            int lastSum = x + y;
            x = y;
            y = lastSum;
            // cout << y << " ";
        }
        cout << y;
    }
}

int main()
{

    mainFn();
    cout << endl;

    return 0;
}