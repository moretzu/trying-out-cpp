#include <iostream>

using namespace std;

// ASCII represents each char with a number

int main()
{
  /* Encoding 5 chars into ASCII */
  char c1, c2, c3, c4, c5;

  cout << "Enter 5 letters: ";
  cin >> c1 >> c2 >> c3 >> c4 >> c5;

  cout << "ASCII encoded: "
       << (int)c1 << " " << (int)c2 << " " << (int)c3 << " " << (int)c4 << " " << (int)c5 << endl;
}