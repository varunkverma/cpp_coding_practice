#include <iostream>
#include <iomanip>
using namespace std;

void mainFn()
{
    float ansr;
    // Read the numbers using float datatype
    // Note: to print the answer accurately upto two places of decimal,
    //       use the set precision() method of iomanip library in C++ as shown
    float totalMarks = 0;
    float marks;
    for (int i = 1; i <= 5; i++)
    {
        cin >> marks;
        totalMarks += marks;
    }
    ansr = totalMarks / 5;
    cout << fixed << setprecision(2) << ansr;
    // cout  << ansr ;
}