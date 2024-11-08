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

struct menuItemType {
    string menuItem;
    double menuPrice;
    int menuCount = 0;
}; 
// struct is done, as each food option has a name (string), quantity (int), and price (double)
// I added another variable named menuCount, which can help with counting how many orders of menuItem the customer wants

menuItemType* getData(ifstream& indata) {
    string temp, input;
    int count = 0, food_index = 0;
    menuItemType* foods = new menuItemType[8];
    // I usually use vectors, but this time I wanted to practice with arrays
    // pointers are passed as arrays as well, and are a reference to an array
    // reference: entity holding a value from an existing source

    menuItemType food;                                // food structure created to be put in an index in the structure array for later
    while(getline(indata, temp, ' ')) {
        if (count % 2 == 0) { food.menuItem = temp; } // gives the food a name
        if (count % 2 == 1) { 
            food.menuPrice = stod(temp);              // gives the food a price
            foods[food_index] = food;                 // gives the food an index
            food_index++;                             // index moves forward
            }
        count++;
    }
    return foods;
}
//

void showMenu(menuItemType* menuList) {
    bool flag = true;
    int food_count, food_choice;
    int* order_list = new int [8];
    char choice;
    cout << "Here is Johnny's Restaurant's Menu: " << endl;
    for (int i = 0; i < 8; i++) {
        cout.precision(2);
        cout << fixed << "#" << i + 1 << ": " << left << setw(20) << menuList[i].menuItem << right << setw(8) << menuList[i].menuPrice << endl;
    }
    cout << "\nEnter the breakfast item you want: ";
    cin >> food_choice;
    cout << "How many orders would you like for this breakfast item: ";
    cin >> food_count;
    menuList[food_choice - 1].menuCount = food_count;

    while (flag) { 
        cout << "Would you like to add more?\nEnter 'Y' or 'N': ";
        cin >> choice;
        if (choice == 'N') { flag = false; }
        else if (choice == 'Y' ) {
            cout << "Enter the breakfast item you want: ";
            cin >> food_choice;
            cout << "How many orders would you like for this breakfast item: ";
            cin >> food_count;
            menuList[food_choice - 1].menuCount = food_count;
        }
        else { cout << "Entry was invalid." << endl; }
    } 
}
// displays menu, and tells the user how to pick items
// gives choice to stop ordering or continue ordering

void printCheck(menuItemType* menuList, ofstream& outdata) {
	outdata.open("receipt.txt", ios::out | ios::trunc);
    int index = 0;
    double sum = 0;
    cout << "'\nWelcome to Johnny's Restaurant\nHere's your receipt: " << endl;      

    while(index < 8) {                                                      // beginning of while loop taht will print receipt 
        outdata.precision(2);
        if (menuList[index].menuCount != 0) {                               // items will be printed out with the count, item, and price of how many items you bought
            sum += menuList[index].menuCount * menuList[index].menuPrice;   // items are printed out if their count is above 0
            cout << menuList[index].menuCount << " " << setw(3) << left << setw(20) << menuList[index].menuItem << right << setw(8) << "$" << menuList[index].menuPrice *  menuList[index].menuCount << endl;
            outdata << fixed << menuList[index].menuCount << " " << setw(3) << left << setw(20) << menuList[index].menuItem << right << setw(8) << "$" << menuList[index].menuPrice *  menuList[index].menuCount << endl;
        }
        index++;

    }
    cout << left << setw(20) << "  Tax  " << right << setw(8) << "$" << sum * 0.05 << endl;
    cout << left << setw(20) << "  Amount Due  " << right << setw(8) << "$" << sum * 1.05 << endl;

    outdata << fixed << left << setw(20) << "  Tax  " << right << setw(8) << "$" << sum * 0.05 << endl;
    outdata << fixed << left << setw(20) << "  Amount Due  " << right << setw(8) << "$" << sum * 1.05 << endl;
}

int main() {
    ifstream in("menu.txt");
    ofstream out;
    menuItemType* menuList = getData(in);
    for (int i = 0; i < 8; i++) {if (i != 0) {menuList[i].menuItem.erase(0,1);}}
    // erased "\n" from every other menuItem that wasn't the menuList[0].menuItem
    showMenu(menuList);
    // showMenu is a void function
    printCheck(menuList, out);
    in.close();
    out.close();
    return 0;
}
