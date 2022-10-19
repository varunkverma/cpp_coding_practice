#include <iostream>
using namespace std;

int binary_to_decimal(string binaryInteger)
{
    int decimal = 0;
    int poweredBinary = 1;

    int binary = stoi(binaryInteger);
    cout << binary << endl;

    while (binary != 0)
    {
        int digit = binary % 10;

        decimal += digit * poweredBinary;

        poweredBinary *= 2;

        binary /= 10;
    }

    return decimal;
}

int main()
{

    cout << binary_to_decimal("110") << endl;

    return 0;
}