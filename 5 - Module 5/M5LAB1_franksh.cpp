#include <iostream>
#include <string>

using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
franksh
10/23/2023
This template serves as a starting point
for your own program. We'll be using
void functions to tell a simple story,
where the user gets to make choices.

You can fork this template by clicking on the name above, then click the three
dots on the top right, and click 'fork repl'. This makes a copy for you to use.
*/

// Function Prototypes
// Any functions you make will need to
// be listed here, in this format, at the top.
// This is so the compiler knows to save
// room for them in the final program.
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_grave();
void choice_enter_back_of_house();
void choice_check_noise();
void choice_run_noise();
void choice_kick_door();
void choice_throw_stick();
void choice_shed();

void choice_house_two();
// TODO: add more choices here

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  cout << "Main Menu" << endl;
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "You're in front of an old house." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    choice_back_door();
  } else if (3 == choice) {
    choice_go_home();
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().
void choice_front_door() {
  cout << "Try the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  }
  // if they don't pick either one, try again!
  else {
    cout << "You have to choose..." << endl;
    choice_front_door(); // recursion
  }
  
}

//edited this function to include 2 new choices
void choice_back_door() { 
  cout << "The back yard has a large grave." << endl;
  cout << "The door is locked, but partially broken." << endl;
  cout << "Do you:" << endl;
  cout << "1. Kick the door in" << endl; 
  cout << "2. Check the grave" << endl; 
  cout << "3. Give up and go home" << endl;
  string choice;
  cout << "Choose: ";
  cin >> choice;
  if (choice == "1") {
    choice_enter_back_of_house();
  }
  else if (choice == "2") {
    choice_grave();
  }
  else if (choice == "3") {
    choice_go_home();
  }
  else {
    cout << "You must choose!" << endl;
    choice_back_door();
  }

}

void choice_grave(){
  cout << "A force pulls you in... you lose consciousness (presumably forever). \nTHE END" << endl;
}
void choice_enter_back_of_house(){
  cout << "You kick the door in and sneak inside. You steal a few valuables and leave.\nTHE END" << endl;
}




// NEW CHOICES HERE ------------------------------------------------





void choice_go_home() { 
  cout << "You decide to go home." << endl;
  cout << "You hear a loud rustling from behind you!" << endl;
  cout << "Do you:" << endl;
  cout << "1. Check the source of the noise" << endl;
  cout << "2. Sprint away from the noise" << endl;
  cout << "3. Throw a stick at the noise" << endl;
  string choice;
  cout << "Choose: ";
  cin >> choice;
  if (choice == "1") {
    choice_check_noise();
  }
  else if (choice == "2") {
    choice_run_noise();
  }
  else if (choice == "3") {
    choice_throw_stick();
   }
  else {
    cout << "You must choose!" << endl;
    choice_go_home();
  }
}

void choice_run_noise(){
  cout << "You flee from the noise and hide in some bushes." << endl;
  cout << "After the noise fades, you walk the rest of the way home." << endl;
  cout << "THE END" << endl;
}

void choice_check_noise(){
  cout << "You walk towards the noise." << endl;
  cout << "Something grabs you from the dark!" << endl;
  cout << "You lose consciousness..." << endl;
  cout << "THE END" << endl;
}

void choice_throw_stick(){
  cout << "You throw a stick at the noise." << endl;
  cout << "You hear some rustling, and the noise gets further away." << endl;
  cout << "Do you:" << endl;
  cout << "1. Continue home" << endl;
  cout << "2. Go back to the house" << endl;
  string choice;
  cout << "Choose: ";
  cin >> choice;
  if (choice == "1") {
    cout << "You go home." << endl;
    cout << "THE END" << endl;
  }
  else if (choice == "2") {
    cout << "While returning to the house, you see a shed hidden behind some trees." << endl;
    choice_house_two();
  }
  else {
    cout << "You must choose!" << endl;
  }
  
}

void choice_house_two() {
  cout << "Do you:" << endl;
  cout << "1. Check the shed" << endl;
  cout << "2. Continue to the house" << endl;
  cout << "3. Give up and go home" << endl;
  string choice;
  cout << "Choose: ";
  cin >> choice;
  if (choice == "1") {
    cout << "The shed's door is locked." << endl;
   choice_shed();
  }
  else if (choice == "2") {
    main_menu();
  }
  else if (choice == "3") {
    cout << "You decide to go back home." << endl;
    cout << "THE END" << endl;
  }
  else {
    cout << "You must choose!" << endl;
    choice_house_two();
  }
}

void choice_shed(){
  cout << "Do you:" << endl;
  cout << "1. Look behind the shed" << endl;
  cout << "2. Try to fit through the broken window" << endl;
  cout << "3. Give up and go home" << endl;
  string choice;
  cout << "Choose: ";
  cin >> choice;
  if (choice == "1") {
    cout << "There's a hole behind the shed!" << endl;
    cout << "You sneak in and steal a walking cane. Is it cursed? Who knows!" << endl;
    cout << "You go home." << endl;
    cout << "THE END" << endl;

  }
  else if (choice == "2") {
    cout << "You can't fit into the window..." << endl;
    choice_shed();
  }
  else if (choice == "3") {
    cout << "You decide to go back home." << endl;
    cout << "THE END" << endl;
  }
  else {
    cout << "You must choose!" << endl;
    choice_house_two();
  }


  
}