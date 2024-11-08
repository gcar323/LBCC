#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib> 
#include <ctime>   

using namespace std;

class bankAccount {
    private: 
        string accName, accType;
        long long int accNum;
        double balance, interestRate;
    public: 
        bankAccount();
        long long int getAccNum() { return accNum; }
        string getAccName() { return accName; }
        string getAccType() { return accType; }
        double getBal() { return balance; }
        double getIntRate() { return interestRate; } // displayed as decimal number

        //Mutator or a setter
        void setNum(long long int num) { accNum = num; }
        void setName(string name) { accName = name; }
        void setType(string type) { accType = type; }
        void setBal(double bal) { balance = bal; }
        void setRate(double rate) { interestRate = rate;}
        ~bankAccount() { 
            cout << "\n\nHere's your bank account info:\n" << endl;
            cout << "Account Number: " << setw(12) << setfill('0') << accNum << endl; 
            cout << "Account Name: " << accName << endl; 
            cout << "Account Type: " << accType << endl; 
            cout << "Account Balance: $" << fixed << setprecision(2) << balance << endl; 
            cout << "Account Interest Rate: "  << fixed << setprecision(3) << interestRate  << "%\n\n" << endl; 
            }
            // fixed << setprecision(2)
};
bankAccount::bankAccount() { accNum = 0; }

void header() {
	cout << "Project 1: 10 Bank Accounts" << endl;
	cout << "Designed by: Gabriel Carrera Rosas" << endl;
	cout << "Long Beach City College" << endl;
	cout << "==================================" << endl;
}
void introduction() {
    cout << "This program is designed for creating up to 10 bank accounts." << endl;
    cout << "Each bank account requires you to enter 5 components:" << endl;
    cout << " - account holder's name" << endl;
    cout << " - account type" << endl;
    cout << " - account number" << endl;
    cout << " - account balance" << endl;
    cout << " - account interest rate" << endl;
    cout << "Read the prompts carefully and enter each of the following information.\n" << endl;
}
string accTypeCheck(string option) {
    while(true) {
        if (option == "1") {return "Checkings"; }
        else if (option == "2") {return "Savings"; }
        else { 
            cout << "\nThe value you entered was not '1' or '2'." << endl;
            cout << "Please enter '1' for a checkings account, or '2' for a savings account: " << endl;
            cin >> option;
            }
    }
}
long long int accNumberCheck(string option) {
    long long int max = 100000000000;
    string temp;
    while(true) {
        // checking if manually entered number is 12 digits
        if (option == "1") {
            cout << "Please enter a 12 digit number to assign to your account number." << endl;
            cin >> temp;
            if (temp.length() == 12) {
                return stoll(temp);
            }
            else {
            cout << "\nThe value you entered was not 12 digits long." << endl;
            cout << "Please enter '1' to manually enter your account number, or '2' to generate it: " << endl;
            cin >> option;
            }
        }
        
        // using random seed to assign 12 digit account number
        else if (option == "2") {
            srand(time(NULL)); 
            long long int num = (rand()%(max));
            return num;
        }
        else {
            cout << "\nThe value you entered was not '1' or '2'." << endl;
            cout << "Please enter '1' to manually enter your account number, or '2' to generate it: " << endl;
            cin >> option;
        }
    }
}

int main() { 
    header();
    introduction();
    bankAccount accounts [10];
    int current_size = 0;
    string temp1, temp2, generalTemp;
    double temp3, temp4;
    long long temp5;
    while (current_size < 10) {
        cout << "This information is currently made for bank account #" << (1 + current_size) << endl;
        cout << "Enter account holder's name: " << endl;
        cin >> temp1;
        cout << "\nEnter '1' for a checkings account, or '2' for a savings account: " << endl;
        cin >> temp2;
        temp2 = accTypeCheck(temp2);
        cout << "\nWould you like to enter your own account number?" << endl;
        cout << "If you would like to do so, please enter '1'." << endl;
        cout << "Enter '2' if you would like a randomly generated account number to be assigned to your bank account." << endl;
        cin >> generalTemp;
        temp5 = accNumberCheck(generalTemp);
        cout << "\nIt's time to enter an account balance." << endl;
        cout << "Please make a deposit." << endl;
        cin >> generalTemp;
        temp3 = stod(generalTemp);
        cout << "\nIt's time to enter an interest rate." << endl;
        cout << "Please make a decimal to represent your interest rate." << endl;
        cin >> generalTemp;
        temp4 = stod(generalTemp);
        bankAccount acc;
        acc.setNum(temp5);
        acc.setName(temp1);
        acc.setType(temp2);
        acc.setBal(temp3);
        acc.setRate(temp4);
        accounts[current_size] = acc;
        current_size++;
    }
    return 0;
}
