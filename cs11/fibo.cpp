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

int fibo(int n) {
    vector<int> arr = {0, 1};
    for (int i = 2; i < n + 1; i++)
        arr.push_back(arr[i - 2] + arr[i - 1]);
    return arr[n];
}

int main() {
    cout << fibo(8) << endl;
    return 0;
}

/*
EECS 31 Lab
PHYS 7D
MATH 3 (multi-var calc)
*/
