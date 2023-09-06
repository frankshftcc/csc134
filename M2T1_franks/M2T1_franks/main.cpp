#include <iostream>
#include <iomanip>

using namespace std;

/*
CSC 134
M2T1 - Receipt Calculator
franksh
9/6
This program should take the menu price, calculate the tax, and give you a total.
*/

int main()
{
  //declare our variables:
  cout << "Receipt Calculator" << endl;
  //TODO: ask the user the meal price
  double menu_price = 5.99;
  double tax_percent = 0.07; // for cumberland county
  double tax_dollars = menu_price * tax_percent; // 7% of meal price
  double total_price = menu_price + tax_dollars; //price including tax
  // calculate the tax amount and the total
  // we #include <iomanip> at the top and use this magic below
  // to use 2 decimal places
  cout << fixed << setprecision(2);
  // print output
  cout << "Menu price: $" << menu_price << endl;
  cout << "Tax:        $" << tax_dollars << endl;
  cout << "_________________________" << endl;
  cout << "Your meal total is: $" << total_price << endl;
  cout << "Thank you for dining with us!" << endl;
    return 0;
}
