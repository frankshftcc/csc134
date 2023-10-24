#include <iostream>
using namespace std;

/*
CSC 134
M4T3 - Three Loops
franksh
10/9/23

Three times, we'll take some number, then sun and average them.
- 1: for loop
- 2: while loop
- 3 sentinel loop
*/


int main()
{
    const int NUM_DAYS = 5;
    int todays_cars;
    int total_cars = 0;
    double average;
    cout << "Part 1: Counting Loop with for" << endl;
    cout << "How many cars did you see each day?" << endl;
    for (int i=0; i < NUM_DAYS; i++){
        cout << "Day# " << i << ": ";
        cin >> todays_cars;
        total_cars += todays_cars; // add today to total
    }

    cout << "Total cars seen was: " << total_cars;
    cout << " over " << NUM_DAYS << " days" << endl;
    // find average as a double
    average = (double) total_cars/NUM_DAYS;
    cout << "Average per day = " << average << endl;
    cout << endl;


    cout << "Part 2: Count with while" << endl;
    //TODO ask the user how many cars they saw
    // each day then add them up
    int i = 0;
    total_cars = 0;
    while (i < NUM_DAYS) {
        cout << "Day# " << i << ": ";
        cin >> todays_cars;
        total_cars += todays_cars; // add today to total
        i++; // go to next day
    }

    cout << "Total cars seen was: " << total_cars;
    cout << " over " << NUM_DAYS << " days" << endl;
    // find average as a double
    average = (double) total_cars/NUM_DAYS;
    cout << "Average per day = " << average << endl;
    cout << endl;


    // Part 3 - Sentinel
    cout << "Enter how many cars you saw per day." << endl;
    cout << "or -1 to finish." << endl;
    bool keep_going = true;
    int day = 0;
    total_cars = 0;
    while (keep_going) {
        cout << "Day# " << day << ": ";
        cin >> todays_cars;
        if (todays_cars == -1) {
            cout << "OK, Done" << endl;
            keep_going = false;
        }
        else {
            total_cars += todays_cars;
            day++;
        }
    }
    cout << "Total = " << total_cars << " cars" << endl;
    return 0;
}
