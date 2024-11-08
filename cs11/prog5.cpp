#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <complex>

using namespace std;

int main() { 
    cout << "Gabriel Carrera Rosas\nprog5.cpp\nApril 28th, 2024\nLong Beach City College (LBCC)" << endl;
    cout << "An input file named: \"inventory_data_IN.txt\" is being read, and results will be returned in an output file named: \"inventory_data_OUT.txt\"." << endl;


    // accessing output file to print out results with appropriate header
    // ofstream = output-fstream, with the given name FOUT
    ifstream data ("inventory_data_IN.txt");
    ofstream fout;
	fout.open("inventory_data_OUT.txt", ios::out | ios::trunc);
    fout << "****************************************************************************" << endl;
    fout << "\t        Inventory Report For Jane Doe International Hardware" << endl;
    fout << "****************************************************************************" << endl;
    fout << "ITEM        NUMBER OF UNITS           UNIT COST ($)       TOTAL VALUE ($)" << endl;
    fout << "_________________________________________________________________________" << endl;
    
    // accessing input file to receive item (not a declared variable because it doesn't need to be declared),
    // quantity (a declared variable), and price (a declared variable) for output file
    // ifstream = input-fstream, with the given name DATA

    /* 
    input is the single line that contains the orders, 
    and temp is a placeholder while the "input" is split into 
    individual words, into the vector named "contents"
    */

    string input, temp, input2;
    int quantity, count = 0;
    double price, product, final_sum;
    vector<string> contents;

    // data is the INPUT FILE, and INPUT is the data type "string" for getline function
    
    while (getline(data, input)) {
        input2 += input;
    }

    // used for performing insertion, extraction, and other operators
    // used in parsing inputs and converting strings to numbers, and vice-versa
    stringstream ss(input2);

    // used to separate each word into an element into the vector named "contents"
    while (getline(ss, temp, ' ')) {contents.push_back(temp);}
    for (int i = 0; i < contents.size(); i++) { 
        if ( i % 3 == 1) {
            // gets proper variable declarations for each appropriate element in the contents vector
            quantity = stoi(contents[i]);
            price = stod(contents[i + 1]);

            // calculate product, and thus, final_sum
            product = quantity * price;
            final_sum += product;
            
            fout.precision(2);
            // appropriate alignment
            fout << fixed << left << setw(9) << contents[i-1] << right << setw(10) << quantity << setw(25) << price << setw(23) << product << endl;
        }
    }
    fout << "_________________________________________________________________________" << endl;
    fout << "Inventory Total ($) " << right << setw(47) << final_sum << endl;

    // close files, and end program
	fout.close();
    data.close();

}