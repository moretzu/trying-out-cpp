#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int int_max = INT_MAX;

    // if we try to add to the maximum integer
    // it will become the minimum, jsut like the
    // clock works - from 12 to 1
    cout << int_max << endl;
    cout << int_max + 1 << endl;
}
