#include <iostream>
using namespace std;

int main()
{
    int p, c, m;
    cout << "enter makrs for physics" << endl;
    cin >> p;

    cout << "enter makrs for chemistry" << endl;
    cin >> c;

    cout << "enter makrs for maths" << endl;
    cin >> m;

    float avg = (p + c + m) / 3.0;

    cout << "Average marks: " << avg << endl;

    return 0;
}