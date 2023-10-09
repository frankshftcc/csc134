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
    cout << "Part 1: Counting Loop with for" << endl;
    cout << "How many cars did you see each day?" << endl;
    for (int i=0; i < NUM_DAYS; i++){
        cout << "Day# " << i << ": ";
        cin >> todays_cars;
        total_cars += todays_cars; // add today to total
    }

    cout << "Total cars seen was: " << total_cars;
    cout << " over " << NUM_DAYS << " days" << endl;
    cout << endl;
    cout << "Part 2: Count with while" << endl;
    //TODO ask the user how many cars they saw
    // each day then add them up
    int i = 0;
    while (i < NUM_DAYS) {
        cout << "Day# " << i << endl;
        i++;

    }


    return 0;
}
