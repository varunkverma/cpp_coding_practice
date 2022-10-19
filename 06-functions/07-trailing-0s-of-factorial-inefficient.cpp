#include <iostream>
using namespace std;

int factorial(int n)
{
    int f = 1;

    if (n == 0 || n == 1)
    {
        return 1;
    }
    for (int i = 2; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

int findNumOfTrailingZeroes(int n)
{
    int l = n % 10;
    if (l != 0)
    {
        return 0;
    }
    int c = 1;
    n /= 10;
    while (l == 0)
    {
        l = n % 10;
        if (l == 0)
        {
            c++;
        }
        n /= 10;
    }
    return c;
}

int noOfTrailingZeroesInFactorial(int num)
{
    // Implement your code here
    int fact = factorial(num);
    return findNumOfTrailingZeroes(fact);
}

int main()
{

    cout << noOfTrailingZeroesInFactorial(1000) << endl;
    return 0;
}