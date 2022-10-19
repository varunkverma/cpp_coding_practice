#include <iostream>
using namespace std;

#define MAX 10000

int multipleUsingArray(int x, int revNumArr[], int len)
{
    int carry = 0;

    for (int i = 0; i < len; i++)
    {
        int temp = revNumArr[i] * x + carry;
        carry = temp / 10;
        revNumArr[i] = temp % 10;
    }

    while (carry != 0)
    {
        revNumArr[len++] = carry % 10;
        carry /= 10;
    }

    return len;
}

int noOfTrailingZeroesInFactorial(int num)
{
    int numInRev[MAX] = {1};

    int len = 1;

    for (int i = 2; i <= num; i++)
    {
        len = multipleUsingArray(i, numInRev, len);
    }

    cout << "Factorial of " << num << ": ";

    for (int i = len - 1; i >= 0; i--)
    {
        cout << numInRev[i];
    }

    cout << endl;

    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (numInRev[i] == 0)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    cout << "Trailing zeroes: " << count << endl;
    return count;
}

int main()
{

    cout << noOfTrailingZeroesInFactorial(1000) << endl;
    return 0;
}