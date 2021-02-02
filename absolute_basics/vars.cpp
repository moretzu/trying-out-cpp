#include <iostream>

using namespace std;

int main()
{
    // we need to initialize the variable to use it with cin
    float annual_salary;

    cout << "Enter your annual salary: ";
    cin >> annual_salary; // now we store user's input in annual_salary

    float monthly_salaray = annual_salary / 12.0;

    cout << "Annual salary is " << annual_salary << endl;
    cout << "Monthly salary is " << monthly_salaray << endl;
    cout << "In 10 years you will earn " << annual_salary * 10 << endl;

    char character = 'a'; // well there's also a char type but i can't even really see when to use it 🤔
}