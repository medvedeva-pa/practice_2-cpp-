#include "std_lib_facilities.h"

int main()
{
    int word_position = 0;
    string previous = " ";
    string current;

    while (cin >> current) {
        ++word_position;
        if (previous == current)
            cout << "word " << current << " on "
            << word_position << "'d position was repeated.\n";
        previous = current;
    }
}