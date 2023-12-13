/*
M5T2 - Void & value returning functions
CSC 134
franksh
12/4/23
*/

#include <iostream>
using namespace std;

// List functions
int square(int);
int add(int, int);
void print_answer_line(int num, int num_squared);

int main() {
  cout << "-- M5T2: Using Multiple Functions -- \n" << endl;
  int num = 4;
  cout << num << " squared is: " << square(num) << endl;
  cout << "2 + 3 = " << add(2,3) << endl;

  // Print squares of numbers: 1 to 10
  cout << "\nNumber\tSquared" << endl;
  for (int num=1; num <=10; num++) {
    print_answer_line(num, square(num));
  }
  
}


// Takes int and returns the square of that int
int square(int num) {
  int answer = num * num;
  return answer;
}

// Takes two ints and returns sum
int add(int first, int second) {
  int answer = first + second;
  return answer;
}

void print_answer_line(int num, int num_squared) {
  cout << num << "\t\t" << num_squared << endl;
  
}