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
#include <conio.h>
using namespace std;



class romanType {
private:
    string rome;
    int num = 0;

public:
romanType(string r) {
    rome = r;
}

vector<string> slicer(string r) {
    string index;
    vector<string> result;
    int i = 0;
    while(r.length() > i) { 
        index = r[i];
        string pair = "";
        if (i + 1 < r.length()){ pair = index + r[i + 1]; }
        if (pair == "IV" || pair == "IX" || pair == "XL" || pair == "XC" || pair == "CD" || pair == "CM" ) {
            result.push_back(pair);
            i += 2;
        }
        else {
            result.push_back(index);
            i++;
        }
    }
    return result;
}

int romanToInt(vector<string> romans) {
    int sum = 0;
    for (auto i: romans) {
        if (i == "I") { sum += 1; }
        if (i == "IV") { sum += 4; }
        if (i == "V") { sum += 5; }
        if (i == "IX") { sum += 9; }
        if (i == "X") { sum += 10; }
        if (i == "XL") { sum += 40; }
        if (i == "L") { sum += 50; }
        if (i == "XC") { sum += 90; }
        if (i == "C") { sum += 100; }
        if (i == "CD") { sum += 400; }
        if (i == "D") { sum += 500; }
        if (i == "CM") { sum += 900; }
        if (i == "M") { sum += 1000; }
    }
    return sum;
}

void sum() {
    vector<string> roman_numerals = slicer(rome);
    num = romanToInt(roman_numerals);
}

void display() {
    char choice;
    bool flag = true;
    cout << "Do you want the roman numeral or the integer?\nEnter 1 for roman numeral.\nEnter 2 for integer." << endl;
    cin >> choice;
    if (choice == '1') { 
        cout << rome << endl;
        flag = false;
        }
    else if (choice == '2') { 
        sum();
        cout << num << endl; 
        flag = false;
        }
}

};
// store the number as a Roman numeral
// convert and store the number as a positive number
// print the number as a Roman numeral or positive integer as requested by the user


int main() {
    romanType rome1("MCXIV");
    romanType rome2("CCCLIX");
    romanType rome3("MDCLXVI");
}


/*
read values for:
    - M = 1000
    - D = 500
    - C = 100
    - L = 50
    - X = 10
    - V = 5
    - I = 1

CCCLIX = 359
359, take 3 of 359, and now it's CCC
59,  take 5 of 59 , and now it's L
9,   take 9,        and now it's IX


MCXIV = 1114
1000, take 1 from 1114, and now it's M
 100, take 1 from  114, and now it's C
  10, take 1 from   14, and now it's X
   4, take 1 from    4, and now it's IV 
*/

