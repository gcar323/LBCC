#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cmath>
#include <complex>

using namespace std;

int main() { 
    // create a quadratic formula equation program
    // x = (-B +- sqrt( (B)^2) - 4*A*C ) / (2*A)
    // appropriate titles for this program file + setting precision floating point to 4 decimal places
    cout.precision(4);
    cout << "************************************\n" << endl;
    cout << "Gabriel Carrera Rosas\nprog4.cpp\nApril 21th, 2024\nLong Beach City College (LBCC)\n" << endl;
    cout << "************************************" << endl;
    cout << "Quadratic Formula" << endl;
    cout << "Gabriel Carrera Rosas - " << endl;
    cout << "This program will provide solutions for an equation of the form\n\t\t\tA*x^2 + B*x + C = 0,\nwhere A, B, and C are integers, and A is not equal to zero.\nEnter A, B, and C : ";
    double a, b, c;
    cin >> a >> b >> c;

    // if-else statements created for the following scenarios
    // A == 0, leading coefficient being equal to 0 will result in Zero Division Error and any number divided by 0 isn't good lol

    if (a == 0) { cout << "No solutions will be calculated for a leading coefficient of 0!" << endl;}
    else {
        // discriminant --> B^2 - 4*A*C : is for following if-else branches
        // first term --> -b/(2.0 * A):  is a value to simplify the math and helps with handling imaginary number solution
        // d_positive --> the value within the square root, with a (+) in front of it
        // d_negative --> the value within the square root, with a (-) in front of it
        
        double discriminant = (pow(b,2) - (4.0 * a * c));
        double first_term =   (-b/( 2.0 *a));
        double d_positive =   (sqrt(-discriminant))/ (2.0 *a);
        double d_negative =   -1.0 * d_positive;
        cout << scientific;

        // if discriminant is a value that is less than 0 (meaning it's NEGATIVE), it'll result in 2 imaginary solutions:
        if (discriminant < 0) {
            cout << "The two imaginary solutions are :\tx = " << first_term << " + ( " << d_positive << " ) * I " << endl;
            cout << "\t\t\t    and \tx = " << first_term << " " << d_negative << " * I " << endl;
            }

        // if discriminant is 0, then there will be only one solution:
        else if (discriminant == 0) {cout << "The one real solution is \tx = " << first_term << endl; }

        // this is the end of the if-else statement segment, and now that we've checked if the value is 0, or negative, this branch will execute when 
        // the discriminant is a POSITIVE number
        else { 
            double d_plus =  ((-b + sqrt(discriminant)) / (2.0 *a));
            double d_minus = ((-b - sqrt(discriminant)) / (2.0 *a));
            cout << "The two real solutions are :\tx = " << d_plus << "\n\t\t       and      x = " << d_minus << endl;
            }
    }
    return 0; 
}
