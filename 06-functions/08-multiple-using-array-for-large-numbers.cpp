// This way is necessary to store result of really large numbers

#include <iostream>
using namespace std;

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

int main()
{

    int numInRev[1000] = {1};

    int len = 1;

    len = multipleUsingArray(4, numInRev, len);
    len = multipleUsingArray(2, numInRev, len);
    len = multipleUsingArray(2, numInRev, len);

    for (int i = len - 1; i >= 0; i--)
    {
        cout << numInRev[i];
    }
    cout << endl;

    return 0;
}
