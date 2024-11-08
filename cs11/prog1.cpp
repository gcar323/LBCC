#include <iostream>
using namespace std;

int main() {
    // appropriate titles for this program file
    cout << "************************************" << endl;
    cout << "Author's Name: Gabriel Carrera Rosas\nProgram Name: prog1.cpp\nDate: March 17th, 2024\nCollege Name: Long Beach City College (LBCC)\n" << endl;
    cout << "Employee Salary Records\n" << endl;

    // initializing variables
    int employee_id, hours;
    double hourly_pay, gross_pay;

    // entering employee ID
    cout << "Employee ID: ";
    cin >> employee_id;

    // entering hours worked
    cout << "Hours Worked: ";
    cin >> hours;

    // entering pay rate
    cout << "Rate Per Hour: ";
    cin >> hourly_pay;

    // getting gross pay, and printing gross salary 
    gross_pay = hourly_pay * hours;
    cout << "Gross Salary: $" << gross_pay << " / week" << endl;
    return 0;
}
