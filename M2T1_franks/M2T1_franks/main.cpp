#include <iostream>

using namespace std;

/*
CSC 134
M2T1 - Receipt Calculator
franksh
9/6
Simple calculator.
*/

int main()
{
 //declare our variables:
  cout << "Receipt Calculator" << endl;
  //TODO: ask the user the meal price
  double menu_price = 5.99;
  double tax_percent = 0.07; // for cumberland county
  double tax_dollars;
  double total_price; //price including tax
  // calculate the tax amount and the total
  tax_dollars = tax_percent * menu_price; // 7% of meal price
  total_price = menu_price + tax_dollars; // base price + tax amount

  //TODO: figure out how to use 2 decimal places
  // print output
  cout << "Menu price: $" << menu_price << endl;
  cout << "Tax:        $" << tax_dollars << endl;
  cout << "_________________________" << endl;
  cout << "Your meal total is: $" << total_price << endl;
  cout << "Thank you for dining with us!" << endl;
    return 0;
}
