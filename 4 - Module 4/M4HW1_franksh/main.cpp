#include <iostream>
using namespace std;
/*
CSC 134
M4HW1
franksh
10/22/2023
*/


void Bronze();
void Silver();
void Gold();



int main()
{
    cout << "-- Main Menu --" << endl;
    cout << "1. Bronze" << endl;
    cout << "2. Silver" << endl;
    cout << "3. Gold" << endl;
    cout << "\nSelect 1, 2 or 3: ";
    string select; cin >> select;

    if (select == "1"){
        Bronze();
    }
    else if (select == "2"){
        Silver();
    }
    else if (select == "3"){
        Gold();
    }
    else {
        cout << "Please choose 1, 2, or 3: ";
    }

    return 0;
}


//Use while loop to print 5 * (1 thru 12) table
void Bronze(){
  cout << "-- BRONZE --" << endl;
  int num = 5;
  for (int i = 1; i <= 12; i++){
    int answer = num*i;
    cout << num << " times " << i << " is " << answer << endl;
  }

}


//Modify Bronze's 5 to a cin input of 1-12
void Silver(){
  cout << "-- SILVER --" << endl;
  cout << "Choose a number from 1 - 12: ";
  int num; cin >> num;
  for (int i = 1; i <= 12; i++){
    int answer = num*i;
    cout << num << " times " << i << " is " << answer << endl;
  }

}


//Modify Silver so it loops until they select a valid number

/*
I was able to make one that works with integers only but it
broke whenever a string was entered.. so I used replit to
help with it

I added comments to the parts I used from replit
and tried to explain what they do to understand them
*/

void Gold(){
  cout << "-- GOLD --" << endl;
  cout << "Choose a number from 1 - 12: ";
  int num;

  while (!(cin >> num) || num > 12 || num < 1){
// !(cin >> num) -> checks if input failed/not an integer
    cin.clear();
// cin.clear() -> clears error flags of cin so program continues
  while (cin.get() != '\n');
// cin.get() != '\n'; -> discards input prior to a new line
//in preparation for new input
    cout << "Invalid entry! Please choose from 1 - 12: ";
  }
  for (int i = 1; i <= 12; i++){
    int answer = num*i;
    cout << num << " times " << i << " is " << answer << endl;
  }

}


