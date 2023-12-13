/*
CSC 134
franksh
12/5/2023
M5HW1
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <limits>
using namespace std;


void clearCin();

// Declaring functions
void mainMenuSelect(); // Main menu

void QuestionOne();
void QuestionTwo();
void QuestionThree();
void QuestionFour();
void QuestionFive();

// Main Menu - list 5 options, then 6th to exit; include input validation
int main() {
  cout << "M5HW1 - Main Menu" << endl;
  cout << "1. Question 1: Rainfall" << endl;
  cout << "2. Question 2: Hyperrectangle Calc" << endl;
  cout << "3. Question 3: Roman Numerals" << endl;
  cout << "4. Question 4: Geometry Calc" << endl;
  cout << "5. Question 5: Distance Calc" << endl;
  cout << "6. Exit Program" << endl;
  cout << "\nPlease enter a number between 1 - 6: ";
  mainMenuSelect();

return 0;  
}


void mainMenuSelect(){

  // Create a menu + loop for "Question 6":
  // "Loop" is created by calling the mainMenuSelect again

  int entry; cin >> entry;

   if (entry == 1){
     QuestionOne();
   }
   else if (entry == 2){
     QuestionTwo();
   }
   else if (entry == 3){
     QuestionThree();
   }
   else if (entry == 4){
     QuestionFour();
   }
   else if (entry == 5){
     QuestionFive();
   }
   else if (entry == 6) { // EXIT PROGRAM
     cout << "Exiting program..." << endl;
     return;
   }
   else {
     cout << "Invalid Entry: Please enter a number between 1 - 6: ";
     cin.ignore();
     mainMenuSelect();
   }
}


void QuestionOne(){
  cout << "Question 1: Rainfall" << endl;
  //month 1
  cout << "Enter month 1: ";
  string month_1; cin >> month_1;
  cout << "Enter rainfall for " << month_1 << ": ";
  double rainfall_1; cin >> rainfall_1;
  //month 2
  cout << "Enter month 2: ";
  string month_2; cin >> month_2;
  cout << "Enter rainfall for " << month_2 << ": ";
  double rainfall_2; cin >> rainfall_2;
  //month 3
  cout << "Enter month 3: ";
  string month_3; cin >> month_3;
  cout << "Enter rainfall for " << month_3 << ": ";
  double rainfall_3; cin >> rainfall_3;
  //average
  double average_rain = (rainfall_1 + rainfall_2 + rainfall_3)/3;
  cout << "The average rainfall for " << month_1 << ", " << month_2 << ", and " << month_3 << " is " << average_rain << "." << endl;
  return;
    }

void QuestionTwo(){
  cout << "Question 2: Hyperrectangle Calc" << endl;
  cout << "Please enter..." << endl;
  
  double width, length, height;
  // input validation done using do loops
  do {
    cout << "Width: ";
    cin >> width;
    if (width <= 0) {
      cout << "Width must be greater than 0!\n";
    }
  } while (width <= 0);

  do {
    cout << "Length: ";
    cin >> length;
    if (length <= 0) {
      cout << "Length must be greater than 0!\n";
    }
  } while (length <= 0);

  do {
    cout << "Height: ";
    cin >> height;
    if (height <= 0) {
      cout << "Height must be greater than 0!\n";
    }
  } while (height <= 0);
  
  //calculation
  double volume = width*length*height;
  cout << "\nGiven these values:" << "\n- Width: " << width << "\n- Length: " << length << "\n- Height: " << height << "\nYour object has a volume of " << volume << "." << endl;
  return;
}

void QuestionThree(){
  cout << "Question 3. Roman Numerals" << endl;
  int number;
  
  do {
      cout << "Enter a number between 1 - 10: ";
      cin >> number;
      if (cin.fail()) {
        cout << "Invalid input. Please enter a number." << endl;
        clearCin();
      } 
      else if (number < 1 || number > 10) {
        cout << "Invalid input. Number must be between 1 and 10." << endl;
        clearCin();
      }
        
   else {
   switch (number) {
     case 1:
     cout << "The roman numeral version of " << number << " is I." << endl;
            break;
     case 2:
     cout << "The roman numeral version of " << number << " is II." << endl;
            break;
     case 3:
     cout << "The roman numeral version of " << number << " is III." << endl;
            break;
     case 4:
     cout << "The roman numeral version of " << number << " is IV." << endl;
            break;
     case 5:
     cout << "The roman numeral version of " << number << " is V." << endl;
            break;
     case 6:
     cout << "The roman numeral version of " << number << " is VI." << endl;
            break;
     case 7:
     cout << "The roman numeral version of " << number << " is VII." << endl;
            break;
     case 8:
     cout << "The roman numeral version of " << number << " is VIII." << endl;
            break;
     case 9:
     cout << "The roman numeral version of " << number << " is IX." << endl;
            break;
     case 10:
     cout << "The roman numeral version of " << number << " is X." << endl;
            break;
        }
      }
    } while (number < 1 || number > 10);
  }


void QuestionFour(){
  cout << "Question 4. Geometry Calc" << endl;
  cout << "1. Calculate area of Circle" << endl;
  cout << "2. Calculate area of Rectangle" << endl;
  cout << "3. Calculate area of Triangle" << endl;
  cout << "4. Exit Program" << endl;

      int choice = 0;

      while (choice < 1 || choice > 4) {
          cout << "Enter your choice (1 - 4): ";
          cin >> choice;

          if (cin.fail() || choice < 1 || choice > 4) {
              cout << "Invalid input. Please enter a number between 1 and 4." << endl;
              clearCin();
          } else {
              if (choice == 1) {
                  double radius;
                  do {
                      cout << "Enter the radius of the circle: ";
                      cin >> radius;
                      if (radius <= 0) {
                          cout << "Radius must be greater than 0!" << endl;
                      }
                  } while (radius <= 0);
                  double circle_area = 3.14 * radius * radius;
                  cout << "The area of the circle is: " << circle_area << endl;

              } else if (choice == 2) {
                  double length, width;
                  do {
                      cout << "Enter the length of the rectangle: ";
                      cin >> length;
                      if (length <= 0) {
                          cout << "Length must be greater than 0!" << endl;
                      }
                  } while (length <= 0);
                  do {
                      cout << "Enter the width of the rectangle: ";
                      cin >> width;
                      if (width <= 0) {
                          cout << "Width must be greater than 0!" << endl;
                      }
                  } while (width <= 0);
                  double rectangle_area = length * width;
                  cout << "The area of the rectangle is: " << rectangle_area << endl;

              } else if (choice == 3) {
                  double base, height;
                  do {
                      cout << "Enter the base of the triangle: ";
                      cin >> base;
                      if (base <= 0) {
                          cout << "Base must be greater than 0!" << endl;
                      }
                  } while (base <= 0);
                  do {
                      cout << "Enter the height of the triangle: ";
                      cin >> height;
                      if (height <= 0) {
                          cout << "Height must be greater than 0!" << endl;
                      }
                  } while (height <= 0);
                  double triangle_area = 0.5 * base * height;
                  cout << "The area of the triangle is: " << triangle_area << endl;

              } else if (choice == 4) {
                  cout << "Exiting program..." << endl;
                  return;
              }
          }
      }
  }

void QuestionFive(){
  cout << "Question 5. Distance Calc" << endl;
  int speed, time;
  cout << "What is the speed of the vehicle in mph? ";
  cin >> speed;
  cout << "How many hours has it traveled? ";
  cin >> time;

  //creating the table
  cout << "Hours      Distance Traveled" << endl;
  cout << "----------------------------" << endl;
  for (int i = 1; i <= time; i++) {
      cout << setw(4) << i << setw(15) << speed * i << endl;
  }
  return;
}


// Input validation function
void clearCin(){
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
}