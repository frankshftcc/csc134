#include <iostream>
#include <stdlib.h> //for rand()
#include <time.h> // for time()
using namespace std;

/*
CSC 134
M3T2 - Craps
franksh
9/18/23


The player rolls two 6-sided dice (abbreviated 2d6.)
7 or 11 -> instant win
2, 3, or 12 -> instant loss
TODO: add the rest
*/

int roll() {
//new function: roll 1 die, return
// number from 1 to 6
// % 6 gives us 0 to 5, so we add one
int roll = rand() % 6 + 1;
return roll;
}


int main()
{
    cout << "Welcome to the Craps table" << endl;
    int die1, die2, total;
    // roll is 2d6 (two 6-siders)/cout << "What are the two rolls?" << endl;
    //cin >> die1 >> die2;
    // random roll
    int seed = time(0);
    cout << "Today's lucky number: " << seed << endl;
    srand(seed);
    die1 = roll();
    die2 = roll();
    total = die1 + die2;
    cout << "You Rolled: ";
    cout << die1 << " + " << die2;
    cout << " == " << total << endl;

    cout << "What are the two rolls?" << endl;
    cin >> die1 >> die2;
    total = die1 + die2;
    cout << "You rolled: " << total << endl;
    // Do if/else if for:
    // 7 or 11 (win)
    // 2, 3, 12 (lose)
    if (total == 7 || total == 11) {
    // || is "or"
    }
    else if (0) {

    }
    else {
        cout << "Did not win or lose" << endl;
    }
    return 0;
}
