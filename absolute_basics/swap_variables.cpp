#include <iostream>

using namespace std;

int main()
{
  int a = 20, b = 10;

  // 1. Introduce temp variable to swap
  int temp = a;
  a = b;
  b = temp;

  cout << a << " " << b << endl; // 10 20

  // 2. Quick maths
  int x = 20, y = 10;
  x = x + y;                     // 30
  y = x - y;                     // 20
  x = x - y;                     // 10
  cout << x << " " << y << endl; // 10 20

  // 3. STD comes to the rescue
  int i = 20, j = 10;
  swap(i, j);
  cout << i << " " << j << endl; // 10 20
}