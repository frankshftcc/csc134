#include <iostream>
#include <iomanip>

/*
M2LAB1 - Crate Example
Find the volume of a crate of a given size
Find the cost to make it
Find the price we sell it for
Find the profit
*/


using namespace std;

int main()
{
    cout << "General Crates Pricing System" << endl;
    // declare the variables
    const double COST_PER_CUBIC_FOOT = 0.23; // $ per cubic foot
    const double CHARGE_PER_CUBIC_FOOT = 0.5;

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
    cout << "Charge to customer:  $" << charge << endl;
    cout << "Our profit:          $" << profit << endl;
    return 0;
}
