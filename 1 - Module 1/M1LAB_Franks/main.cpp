#include <iostream>

using namespace std;

/*
CSC 134
M1LAB - Apple Orchard
franks
8/28
Simple interactive store.
*/

int main()
{
    string name = "Franks";
    cout << "Welcome to the " << name << " orchard." << endl;

    // declare our variables
    int apples = 100;
    double price_each = 0.25;

    // print number of apples, price each
    cout << "We have " << apples << " for sale." << endl;
    cout << "Cost is $" << price_each << " each." << endl;

    double total_price = apples * price_each;
    // then print the total price
    cout << "The price of all 100 apples is $" << total_price << "." << endl;

    // then print the total price
    // TODO: ask the user how many to buy

    // TODO: Make the prices look "correct" (ex. $25.00)
    return 0;
}
