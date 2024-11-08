/*
Also declare an array of 10 components of type bankAccount to process up to 10 customers and write a program to illustrate how to use your class.
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() { 
    int max = 1000000;
	srand(time(0));
    int num = (rand()%(max+1));
    cout << num << endl;
    return 0;
}
