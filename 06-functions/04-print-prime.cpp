#include <iostream>
#include <vector>
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

vector<int> printPrimes(int n)
{
    vector<int> primes = vector<int>();

    for (int i = 2; i <= n; i++)
    {
        if (is_prime(i))
        {
            primes.push_back(i);
        }
    }
    return primes;
}

int main()
{
    vector<int> primes = printPrimes(15);
    for (int x : primes)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}