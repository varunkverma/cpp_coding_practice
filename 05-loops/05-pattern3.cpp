//   *
//  ***
// *****

#include <iostream>
using namespace std;

void mainFn()
{
    // write your code here
    int n, stars = 1;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        stars += 2;
    }
}

int main()
{
    mainFn();
    return 0;
}