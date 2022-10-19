#include <iostream>
using namespace std;

void mainFn()
{
    // write your code here
    int n, toggle = 1;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int printer = toggle;
        for (int j = 1; j <= i; j++)
        {
            cout << printer;
            printer = printer == 1 ? 0 : 1;
        }
        cout << endl;
        toggle = toggle == 1 ? 0 : 1;
    }
}

int main()
{
    mainFn();
    return 0;
}