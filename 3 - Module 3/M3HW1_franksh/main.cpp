#include <iostream>

using namespace std;

/*
CSC134
M3T3 - Simple Menu
Franksh
9/25/23

Setup for homework menu
*/

// First, list of functions
// (Declare)
void Question1();
void Question2();
void Question3();
void Question4();

// Second, main
int main()
{
    cout << "Main Menu" << endl;
    //for now, just call all 3
    //Question1();
    //Question2();
    //Question3();
    //Question4();

    cout << "1. Chatbot." << endl;
    cout << "2. Receipt." << endl;
    cout << "3. Adventure." << endl;
    cout << "4. Math practice." << endl;
    cout << "Your choice? ";

    int choice;
    cin >> choice;
    cout << "You chose: " << choice << endl;
    //now branch on the choice
    if (1==choice) {
      Question1();
    }
    else if (2==choice){
      Question2();
    }
    else if (3==choice){
      Question3();
    }
    else if (4==choice){
      Question4();
    }
    else {
        cout << "Sorry, that is not a valid choice." << endl;
    }
    return 0;
}

//Third, the full functions
// Define

void Question1() {
  cout << "Hi! How tall are you (in centimeters)?" << endl;
  double height;
  cin >> height;
  if (0 < height < 92) {
    cout << "What are you, a dwarf?" << endl;
  }
    if (height < 0) {
    cout << "Huh, do you just not exist?" << endl;
  }
  else if (height > 220){
    cout << "Do you grab airplanes out of the sky?" << endl;
  }
  else if (152 < height < 178){
    cout << "You're about average height." << endl;
  }
    else if (178 < height < 220){
    cout << "You're taller than average!" << endl;
  }
      else if (92 < height < 152){
    cout << "You're shorter than average!" << endl;
  }
  else{
        cout << "Don't get smart with me!" << endl;
  }
}

void Question2() {
  cout << "Question 2" << endl;
}

void Question3() {
  cout << "Question 3" << endl;
}

void Question4() {
  cout << "Question 4" << endl;
}
