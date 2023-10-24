#include <iostream>
#include <iomanip>

/*
CSC 134
M2HW1 - Crates Part 2: electric boogaloo
franksh
9/15
Using M2LAB1 as a base, change 2 constants and set all prices to 2 decimals
*/

using namespace std;
int main()
{
 
cout << "General Crates Pricing System" << endl;
// Declare variables
const double COST_PER_CUBIC_FOOT = 0.3; // $ per cubic foot
const double CHARGE_PER_CUBIC_FOOT = 0.52;
double length, width, height; // in feet
double volume; // in cubic feet
double cost, charge, profit; // $
 
// Get the crate dimensions
cout << "Enter length, width and height in feet. Press ENTER after each value." << endl;
cin >> length >> width >> height;
 
// Calculate the volume
volume = length*width*height;
 
// Find the cost and price for that volume
cost = volume*COST_PER_CUBIC_FOOT;
 
// Find the profit
charge = volume*CHARGE_PER_CUBIC_FOOT;
 
// Find the profit
profit = charge - cost;
 
// Output the answer
cout << fixed << setprecision(2);
cout << "That crate is: " << volume << " cubic ft." << endl;
cout << "Cost to manufacture: $" << cost << endl;
cout << "Charge to customer: $" << charge << endl;
cout << "Our profit: $" << profit << endl;
 
return 0;
}

