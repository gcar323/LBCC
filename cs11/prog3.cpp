#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // appropriate titles for this program file
    cout << "************************************" << endl;
    cout << "\nGabriel Carrera Rosas\nprog3.cpp\nMarch 31st, 2024\nLong Beach City College (LBCC)\n" << endl;
    cout << "************************************" << endl;
    cout << "Monthly Paycheck" << endl;

    // variables
    // I wanted to use a pointer just cause I knew I'd do repeated actions
    vector <double> deductions = {0.15, 0.035, 0.0575, 0.0275, 0.05, 75.00};
    vector <string> line = {
    "Federal Tax:  ............ $", 
    "State Tax:    ............ $", 
    "Social Security Tax: ..... $", 
    "Medicare/Medicaid Tax: ... $",
    "Pension Plan: ............ $",
    "Health Insurance: ........ $"};
    double gross, net, temp;
    string name;

    // entering a whole name
    cout << "Enter your name: " << endl;
    cin.ignore();
    getline(cin, name);

    // entering a gross amount to find out how much you owe in taxes
    cout << "Gross Amount: ............ $";
    cin >> gross;
    net = gross;
    // above, I made net equal to gross, and by doing so, I can now update the net amount after all the tax deductions

    // setting all double numbers to include the entire value of given double after performing multiplication
    // setting precision to 10 was for dealing with big numbers if we're ever given big numbers
    cout.precision(10);

    // for returning the list of deductions 
    for (int i = 0; i < deductions.size(); i++ ) {
        // the only time the for loop needs to subtract by a fixed number (Health Insurance)
        if (i == 5) {
            temp = deductions[i];
            cout << fixed;
            cout << line[i] << setprecision(2) << temp << endl;
            net -= temp;
            }
        else {
            // prints a rounded amount of the deductions to the second decimal place, and subtracts the deduction
            temp = (round(deductions[i] * gross * 100))/100;
            cout << line[i] << temp << endl;
            net -= temp;
            }
    } 
    // printing the net pay after all deductions
    cout << "Net Pay: ................. $" << net << endl;
    return 0;
}
