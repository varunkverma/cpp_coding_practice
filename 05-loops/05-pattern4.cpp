//   1
//  232
// 34543

#include <iostream>
using namespace std;

void mainFn()
{
    // write your code here
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }
        int f = i;
        for (int j = 1; j <= i; j++)
        {
            cout << f++;
        }

        int r = f - 2;
        for (int j = 1; j <= i - 1; j++)
        {
            cout << r--;
        }
        cout << endl;
    }
}

int main()
{
    mainFn();
    return 0;
}