#include <iostream>
using namespace std;

int is_prime(int n)
{
    // implement your code here
    if (n == 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    cout << is_prime(98) << endl;
    return 0;
}