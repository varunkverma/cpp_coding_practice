#include <iostream>
#include <map>
using namespace std;

int fibonacciOfNthTerm(int n, map<int, int> &store)
{

    map<int, int>::iterator it = store.find(n);
    if (it != store.end())
    {
        cout << "Cache HIT for term " << n << ": " << it->second << endl;
        return it->second;
    }
    cout << "Cache MISS for term " << n << ": ?" << endl;

    if (n == 0)
    {
        store[n] = 0;
        return 0;
    }

    if (n == 1)
    {
        store[n] = 1;
        return 1;
    }

    int res = fibonacciOfNthTerm(n - 1, store) + fibonacciOfNthTerm(n - 2, store);
    store[n] = res;

    return res;
}

int fibonacci(int n)
{
    map<int, int> memRes;

    int res = fibonacciOfNthTerm(n, memRes);
    cout << "Result of " << n << "th term: " << res << endl;
    return res;
}

int main()
{
    fibonacci(40);
    return 0;
}