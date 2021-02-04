#include <iostream>

using namespace std;

int main()
{
  int a = 5, b = 4;
  cout << a + (b++) << endl; // prints 9 because b is past incremented
  // b is now 5
  cout << (--a) + b << endl; // prints 9 because a is pre decreased

  cout << !(true && false) << endl;        // true
  cout << (true && false || true) << endl; // true

  int x = 7;
  cout << (++x <= 9 && x + 2 >= 10) << endl; // true

  int y = 3;
  cout << (y == y++) << endl; // false

  float z = 8;
  z += 2;
  cout << z << endl; // 10
  z /= 2;
  cout << z << endl; // 5
}