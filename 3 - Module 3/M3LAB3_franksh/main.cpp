#include <iostream>
using namespace std;

/*
CSC 134
M3LAB3 - Letter Grade Calculator
franksh
10/1
Given a number grade 0-100, give the letter grade
*/

int main() {
  // use constants for the 10 point scale
  const int A = 90; // or higher
  const int B = 80;
  const int C = 70;
  const int D = 60;

  cout << "Number Grade to Letter Grade" << endl;
  // get the number grade
  int num_grade = 0;
  string letter_grade = "NO GRADE";
  cout << "What is the number grade: ";
  cin >> num_grade;

  // convert it to a letter
  if (num_grade >= A) {
    letter_grade = "A";
  }
  else if (num_grade >= B) {
    letter_grade = "B";
  }
  else if (num_grade >= C) {
    letter_grade = "C";
  }
  else if (num_grade >= D) {
    letter_grade = "D";
  }
  // if not set, it's "F" ( 60 < F )
  else {
    letter_grade = "F";
  }
  // print results
  cout << "A grade of " << num_grade;
  cout << " is " << letter_grade << "." << endl;
}
