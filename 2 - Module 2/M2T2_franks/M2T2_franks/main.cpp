#include <iostream>
#include <iomanip>

using namespace std;

/*
CSC 134
M2T2 - Receipt Calculator
franksh
9/11
This program should take the price of a meal, which is user entered.

The user should enter:
- The name of the food item
- Its price
- How many they want

It should include:
  - The price before tax
  - The amount of tax owed (8%)
  - The total including tax
*/

int main()
{
  // Set up variables
  double menu_price = 0; // set to 0 until user gives input
  double tax_percent = 0.07; // standard tax rate (for Cumberland county)
  double item_price; // price of item
  int num_items; // number they want
  string item_name; // name of what they want

  // 1 - Greet the user
  cout << "Welcome to the CSC 134 Grill." << endl;

  // 2 - Ask the user the meal price
  cout << "What would you like today?" << endl;
  cin >> item_name;

  cout << "What's the price on that item?" << endl;
  cin >> item_price;

  cout << "How many " << item_name << " do you want? " << endl;
  cin >> num_items;

  // 3 - Calculate the menu price
  menu_price = num_items * item_price;

  // 4 - Print the receipt

  double tax_dollars = menu_price * tax_percent; // 7% of meal price
  double total_price = menu_price + tax_dollars; //price including tax

  // Calculate the tax amount and the total
  // We #include <iomanip> at the top and use this magic below
  // To round 2 decimal places; ex. 2.04555 -> 2.05
  cout << fixed << setprecision(2);
  // Print output
  cout << "Order: " << num_items << " " << item_name << "(s)" << endl;
  cout << "Menu price: $" << menu_price << endl;
  cout << "Tax:        $" << tax_dollars << endl;
  cout << "_________________________" << endl;
  cout << "Your meal total is: $" << total_price << endl;
  cout << "Thank you for dining with us!" << endl;
    return 0;
}
