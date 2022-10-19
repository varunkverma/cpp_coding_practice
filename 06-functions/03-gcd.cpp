#include <iostream>
using namespace std;

int greatestCommonDivisor(int x, int y)
{
    // implement your code here

    int d = 1;
    int min = x < y ? x : y;

    if (min == 0 && min == x)
    {
        return y;
    }

    if (min == 0 && min == y)
    {
        return x;
    }

    for (int i = 1; i <= min; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            d = i;
        }
    }

    return d;
}

int main()
{

    cout << greatestCommonDivisor(0, 10) << endl;

    return 0;
}