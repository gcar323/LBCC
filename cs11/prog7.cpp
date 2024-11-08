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
#include <numeric>
#include <unordered_map>
using namespace std;

int sum (vector<double> nums) {
    return accumulate(nums.begin(), nums.end(), 0);
}

int winner_index (vector<double> nums) {
    int index = 0, largest_num = nums[0];
    for (int i = 0; i < 5; i++) { if (nums[i] > largest_num) { index = i; } }
    return index;
}

int main() {
    vector<string> names = {};
    vector<double> votes = {}, percents_of_votes = {};
    string temp1;
    int temp2, sum_of_votes;
    cout << "Enter five names of candidates for the local election, along with the number of votes they received." << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Candidate " << i + 1 << " name: ";
        cin >> temp1;
        names.push_back(temp1);
        cout << "Candidate " << i + 1 << " vote count: ";
        cin >> temp2;
        votes.push_back(temp2);
    }
    
    //ifstream data ("records.txt");
    sum_of_votes = sum(votes);
    cout.precision(4);
    cout << "\nCandidate     Votes Received           \% of Total Votes" << endl;
    for (int i = 0; i < 5; i++) {
        percents_of_votes.push_back((votes[i]*100)/sum_of_votes); 
        cout << fixed << left << setw(9) << names[i] << right << setw(15) << setprecision(0) << votes[i] << setw(25) << setprecision(2) << percents_of_votes[i] << endl;
        }
    cout << fixed << left << setw(9) << "Total" << right << setw(15) << sum_of_votes << endl;
    cout << "\nThe Winner of the Election is " << names[winner_index(votes)] << '.' << endl;
    return 0;
}