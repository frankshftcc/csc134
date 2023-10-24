#include <iostream>
#include <iomanip>

/*
CSC 134
M2HW1 - Bank Transaction Sim
franksh
9/15
Take input for first name, last name
Input for current balance
Input for deposit
Input for withdraw
Calculate ending balance
Print all
*/

using namespace std;
int main()
{
    // ask user for first and last name
    cout << "Please enter your first and last name: ";
    string first, last;
    cin >> first >> last;

    // ask user for starting account balance
    cout << "Please enter the current account balance: ";
    double current_bal;
    cin >> current_bal;

    // ask for deposit amt
    cout << "Enter deposit amount: ";
    double deposit;
    cin >> deposit;

    //ask for withdraw amt
    cout << "Enter withdrawal amount: ";
    double withdraw;
    cin >> withdraw;

    //calculate ending balance
    double end_bal;
    end_bal = current_bal + deposit - withdraw;

    //attempt to figure out random generation??
    srand(time(0));
    int acc_number = 99999999;
    for (int i = 0; i < 1; i++)
  
    //print information
    cout << fixed << setprecision(2);
    cout << "\nAccount holder:      " << last << ", " << first << endl;
    cout << "Account number:      " << rand() % acc_number << endl;
    cout << "\nBeginning balance:   $" << current_bal << endl;
    cout << "Deposit amount:    + $" << deposit << endl;
    cout << "Withdraw amount:   - $" << withdraw << endl;
    cout << "________________________________" << endl;
    cout << "Ending balance:      $" << end_bal << endl;
    

    return 0;
}
