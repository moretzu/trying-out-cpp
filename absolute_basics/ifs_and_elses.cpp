#include <iostream>

using namespace std;

int main()
{
  /*
  User has to enter an integer number
  Check if the number is even or odd
  */

  int number;
  cout << "Enter an integer number: ";
  cin >> number;

  if (number % 2 == 0)
  {
    cout << number << " is even" << endl;
  }
  else
  {
    cout << number << " is odd" << endl;
  }
}