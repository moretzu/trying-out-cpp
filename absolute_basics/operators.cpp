#include <iostream>

using namespace std;

int main()
{
  // binary ops
  cout << 5 + 2 << endl;
  cout << 5 / 2 << endl;   // will be also an integer!
  cout << 5.0 / 2 << endl; // to get float at least one of operands has to be float
  cout << 5 % 2 << endl;   // gives the remainder

  // unary ops
  int counter = 0;
  counter++; // adds 1 to previusly initialized variable
  cout << counter << endl;
  counter--; // decreases value of the variable by one
  cout << counter << endl;

  int counter2 = 0;
  cout << counter2++ << endl; // will print 0, past increment

  int counter3 = 0;
  cout << ++counter3 << endl; // will print 1, pre increment

  // relational ops
  cout << (5 > 5) << endl;  // false
  cout << (5 < 5) << endl;  // false
  cout << (5 <= 5) << endl; // true
  cout << (5 >= 5) << endl; // true
  cout << (5 == 5) << endl; // true
  cout << (5 != 5) << endl; // false

  // logical ops
  cout << (false && true) << endl; // false
  cout << (false || true) << endl; // true
  cout << (!true) << endl;         // false

  // ops of assignment
  int x = 5; // 5
  x += 5;    // 10
  x -= 3;    // 7
  x *= 3;    // 21
  x /= 7;    // 3
  x %= 2;    // 1
}