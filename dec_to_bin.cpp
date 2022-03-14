#include "std_lib_facilities.h"

int main()
{
    int a, b, r;
    a = 0; //decimal
    b = 0; //binary
    r = 1;

    cout << "enter a decimal number: \n";
    cin >> a;
    while(a)
    {
        b += (a%2) * r;
        a = a / 2;
        r = r * 10;
    }
    cout << "binary: " << b << "\n";
}