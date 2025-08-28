#include <iostream>
#include <limits>
#include "utils.hpp"

using namespace std;

bool read_num_secure(int &num)
{
    cin >> num;
    if (cin.fail()) {
        return false;
    }
    return true;
}

void std_flush()
{
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}