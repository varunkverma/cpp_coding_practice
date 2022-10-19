#include <iostream>
using namespace std;

int factorial(int n)
{
    // implement your code here
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r)
{
    // implement your code here
    int res = (factorial(n) / (factorial(n - r) * factorial(r)));

    return res;
}

int main()
{
    cout << nCr(5, 4) << endl;
    return 0;
}
