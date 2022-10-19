#include <iostream>
using namespace std;

int lengthOfNum(int n)
{
    int l = 0;
    while (n > 0)
    {
        l++;
        n /= 10;
    }
    return l;
}

void mainFn()
{
    int n, s = 0;
    cin >> n;
    int len = lengthOfNum(n);
    while (n > 0)
    {
        if (len % 2 != 0)
        {
            s += n % 10;
        }
        len--;
        n /= 10;
    }
    cout << s << endl;
}

int main()
{
    mainFn();
    return 0;
}