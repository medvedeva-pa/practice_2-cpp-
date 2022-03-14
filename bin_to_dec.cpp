#include "std_lib_facilities.h"

int main()
{
    int a;
    cout<< "enter a binary number: \n";
    cin >> a; //binary
    int b, c, m;
    b = 0;
    c = 0; //decimal
    m = 1;
    while (a > 0) {
        b = a % 10;
        c = c + b * m;
        m = m * 2;
        a = a / 10;
    }
    cout << "decimal: " << c << "\n";
}