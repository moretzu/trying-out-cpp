#include <iostream>

using namespace std;

int main()
{
    int birth_year = 1812;
    cout << "Size of int is " << sizeof(int) << " bytes\n";

    float average_grade = 4.75;
    cout << "Size of float is " << sizeof(float) << " bytes\n";

    double balance = 456234632;
    cout << "Size of double is " << sizeof(double) << " bytes\n";

    char gender = 'M';
    cout << "Size of char is " << sizeof(char) << " bytes\n";

    std::string message = "hello";
    cout << "Size of string is " << sizeof(std::string) << " bytes\n";

    bool is_old = true;
    cout << "Size of boolean is " << sizeof(bool) << " bytes\n";
}
