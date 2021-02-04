#include <iostream>

using namespace std;

int main()
{
  /*
  User enters side lengths of a triangle (a, b, c)
  The output should state if the triangle is equilateral, isosceles or scalene
  */

  float a, b, c;

  cout << "Enter a side length: ";
  cin >> a;

  cout << "Enter b side length: ";
  cin >> b;

  cout << "Enter c side length: ";
  cin >> c;

  if (a == b && b == c)
    cout << "You have provided equilateral triangular." << endl;
  else
  {
    if (a != b && a != c && b != c)
      cout << "You have provided scalene triangular." << endl;
    else
      cout << "You have privded an isosceles triangular." << endl;
  }
}