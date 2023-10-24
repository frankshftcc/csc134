#include <iostream>
#include <iomanip>

/*
CSC 134
M2HW1 - FTCC Cheer
franksh
9/15
Output 3 similar lines using strings only
Output 1 final line using strings only
*/
using namespace std;

int main() {

  //ask for school + team
  cout << "School name: ";
  string school;
  cin >> school;
  cout << "Team name: ";
  string team;
  cin >> team;

  //create and combine strings
  string letsGo = "Let's go ";
  string cheerOne = letsGo + school;
  string cheerTwo = letsGo + team;

  //print cheers
  cout << cheerOne << endl;
  cout << cheerOne << endl;
  cout << cheerOne << endl;
  cout << cheerTwo << endl;

  
 return 0;
}