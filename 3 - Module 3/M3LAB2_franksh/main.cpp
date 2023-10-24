#include <iostream>
using namespace std;

/*
CSC 134
M3LAB2 - Choices with If
Franksh
9/30
*/

int main()
{
  // this program will ask a question and respond to it
  // run it, and test it by typing in different values.
  // example test values: 1, 2, 3, banana (try all of them)

  // declare the variable + ask the question
  cout << "Do you choose box 1 or box 2?" << endl;
  cout << "Enter 1 or 2: ";
  int door;
  cin >> door;
  string choice;

  // IF CHOICE 1: kittens
  if (1 == door) {
  	cout << "You chose box 1..." << endl;
    cout << "Do you open it? Type YES or NO: " << endl;
    cin >> choice;
    if (choice == "YES" || choice == "yes" || choice == "Y" || choice == "y" || choice == "Yes"){
       cout << "You open it to find a bunch of friendly kittens inside!" << endl;
       cout << "You had a great experience!" << endl;
    }
     else if (choice == "NO" || choice == "no" || choice == "n" || choice == "N" || choice == "No"){
      cout << "You did not open the box..." << endl;
      cout << "You had a boring experience..." << endl;
    }
    else {
      cout << "That's not a valid choice!" << endl;
    }
  }
   // IF CHOICE 2: puppies
  else if (2 == door) {
  	cout << "You chose box 1..." << endl;
    cout << "Do you open it? Type YES or NO: " << endl;
    cin >> choice;
    if (choice == "YES" || choice == "yes" || choice == "Y" || choice == "y" || choice == "Yes"){
       cout << "You open it to find a bunch of friendly kittens inside!" << endl;
       cout << "You had a great experience!" << endl;
    }
    else if (choice == "NO" || choice == "no" || choice == "n" || choice == "N" || choice == "No"){
      cout << "You did not open the box..." << endl;
      cout << "You had a boring experience..." << endl;
    }
    else {
      cout << "That's not a valid choice!" << endl;
    }
    cout << "You open it to find a bunch of friendly puppies inside!" << endl;
  }
  else {
  	cout << "You need to pick 1 or 2!" << endl;
  }

  // close message
  cout << "Thank you for playing!" << endl;
  return 0;

}
