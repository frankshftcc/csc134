#include <iostream>
using namespace std;
/*
CSC 134
M1T2 - Hello Student
franksh
8/23/23
  */
 int main() {
  cout << "Name: Hailey Franks\nMajor: Computer Engineering\nInterests: Drawing, biking, swimming." << endl;
   
  cout << "Hello, what's your name?" << endl;
  // ask the user's name
  string name; 
  // this works even if your answer has spaces
  cin >> name;


  cout << "Nice to meet you, " << name << "." << endl;
  cout << "What's your favorite food?" << endl;
  // ask the user's favorite food
  string food;
  cin >> food;
  
  cout << "I have never tried " << food << " before." << endl;
  cout << "Where could I get some?" << endl; 
  // 
  string place;
  cin >> place; 
  
  cout << "Oh, I'll be sure to go there! I'll see you later!" << endl;
  
  // Now add a few lines of info about yourself
  // and have the person next to you test the program
}