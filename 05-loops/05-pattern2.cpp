// 1
// 23
// 456

#include <iostream>
using namespace std;

void mainFn()
{
    // write your code here
    int n, c = 1;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << c++;
        }
        cout << endl;
    }
}

int main()
{
    mainFn();
    return 0;
}