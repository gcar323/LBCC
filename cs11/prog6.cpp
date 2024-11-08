#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <complex>
#include <numeric>
#include <functional>
#include <unordered_map>
using namespace std;

vector<int> partition (int n) {
    // variables are created
    vector<int> digits, start = {1, 10, 100, 1000, 10000};
    int temp = 0;

    // goes through parameter n, and adds the digits into a vector
    for (int i = 4; i >= 0; i--) { 
        // temp is parameter, divided by 10000, then 1000, and so on
        temp = (n / start[i]);

        // pushes back the digit
        digits.push_back(temp);
        n -= temp * start[i];
    }
    return digits;
}

// returns the check digit
int check_digit (int n) { 
    // if the digit is a multiple of 10, then return 0
    if (n % 10 == 0) {return 0;} 

    // will return a value that will bring the "sum" to a module of 10
    return (10 - (n % 10)); }

// creates a vector of the digits from the zipcode, and adds the additional check digit
vector<int>zip (int n) {
    vector<int> digits = partition(n);
    digits.push_back(check_digit(accumulate(digits.begin(),digits.end(),0)));
    return (digits);
}


// used for getting table number
int table (int n) {
    // each number exists as a index in the vector, and it'll return the number that's corresponds to it
    vector<string> zeros_ones = {"11000", "00011", "00101", "00110", "01001", "01010", "01100", "10001", "10010", "10100"};
    return stoi(zeros_ones[n]); 
}


// used for getting the barcode strings
string digit_to_bar (int n) {
    // reads the 1's and 0's number, and returns it as a collection of | and :
    vector<int> digits = partition(n);
    string bar;
    for (auto i: digits) {
        if (i == 1) {bar += "|";}
        else {bar += ":";}
    }
    return bar;
    }



int main() {
    int zipcode = 0, digit = 0;
    vector<int> digits;
    string barcode, frame_bar = "|";
    barcode += frame_bar;

    // enters a zipcode, and zipcode is assigned to zip_code var
    cout << "Enter a 5 digit zip code: ";
    cin >> zipcode;
    digits = zip(zipcode);

    for(auto i: digits) {
        digit = table(i);
        barcode += digit_to_bar(digit);
    }

    barcode += frame_bar;
    cout << barcode << endl;
    
    // cout << "||:|:::|:|:||::::::||:|::|:::|||" << endl;

    // correction digit = the missing number to get to a multiple of 10
    // read specific digits of zip code
    // cout << zip(95014) << endl;
    return 0;

}