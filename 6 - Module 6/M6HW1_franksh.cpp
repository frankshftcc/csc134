/*
CSC 134
franksh
12/11/2023
M6HW1

GOLD
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <limits>
using namespace std;

void clearCin(); // Input Validation

void mainMenuSelect(); // Main menu /DONE

void QuestionOne(); // Currency Converter /DONE
void QuestionTwo(); // Unit Converter
void QuestionThree(); // Assignment Redo - Apple Orchard /DONE




int main() {
    cout << "M6HW1 - Main Menu" << endl;
    cout << "1. Question 1: Currency Converter" << endl;
    cout << "2. Question 2: Unit Converter" << endl;
    cout << "3. Question 3: Assignment Redo - Apple Orchard" << endl;
    cout << "4. Exit Program" << endl;
    cout << "\nPlease enter a number between 1 - 4: ";
    mainMenuSelect();

  return 0;  
}

void mainMenuSelect(){

  // Create a menu + loop for "Question 4":
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
   else if (entry == 4) { // EXIT PROGRAM
     cout << "Exiting program..." << endl;
     return;
   }
   else {
     cout << "Invalid Entry: Please enter a number between 1 - 4: ";
     cin.ignore();
     mainMenuSelect();
   }
}

void QuestionOne(){
  cout << "1. Currency Converter" << endl;
  cout << "\n-- Currency Converter Menu --" << endl;
  cout << "1. Convert USD to Euro" << endl;
  cout << "2. Convert Euro to USD" << endl;
  cout << "3. Convert USD to Japanese Yen" << endl;
  cout << "4. Convert Japanese Yen to USD" << endl;
  cout << "5. Exit Program" << endl;
  cout << "\nPlease enter a number between 1 - 5: ";

  bool currency_input = false;
  cout << fixed << setprecision(2);
do {
  int select; cin >> select;
   if (select == 1){
     cout << "Enter the amount in USD: ";
     double usd; cin >> usd;
     double convert = usd*.85;
     cout << usd << " USD is equal to " << convert << " Euro." << endl;
     currency_input = true;
   }
   else if (select == 2){
     cout << "Enter the amount in Euro: ";
     double euro; cin >> euro;
      double convert = euro*1.18;
      cout << euro << " Euro is equal to " << convert << " USD." << endl;
      currency_input = true;
   }
   else if (select == 3){
     cout << "Enter the amount in USD: ";
     double usd; cin >> usd;
      double convert = usd*110.24;
      cout << usd << " USD is equal to " << convert << " Japanese Yen." << endl;
      currency_input = true;
   }
   else if (select == 4){
     cout << "Enter the amount in Japanese Yen: ";
     double yen; cin >> yen;
      double convert = yen*.0091;
      cout << yen << " Japanese Yen is equal to " << convert << " USD." << endl;
      currency_input = true;
   }
   else if (select == 5) { // EXIT PROGRAM
     cout << "Exiting program..." << endl;
     currency_input = true;
     return;
   }
   else {
     cout << "Invalid Entry: Please enter a number between 1 - 5: ";
   }
} while (currency_input == false);
}



void QuestionTwo(){
  cout << "2. Unit Converter" << endl;
  cout << "\n-- Unit Converter Menu --" << endl;
  cout << "1. Convert Miles to Kilometers" << endl;
  cout << "2. Convert Kilometers to Miles" << endl;
  cout << "3. Convert Pounds to Kilograms" << endl;
  cout << "4. Convert Kilograms to Pounds" << endl;
  cout << "5. Exit Program" << endl;
  cout << "\nPlease enter a number between 1 - 5: ";

    cout << fixed << setprecision(2);
    bool unit_input = false;
  do {
    int select; cin >> select;
     if (select == 1){
      cout << "Enter the distance in miles: ";
      double miles; cin >> miles;
      double convert = miles*1.60934;
      cout << miles << " miles is equal to " << convert << " kilometers." << endl;
      unit_input = true;
     }
     else if (select == 2){
       cout << "Enter the distance in kilometers: ";
       double kilometers; cin >> kilometers;
       double convert = kilometers*0.621371;
       cout << kilometers << " kilometers is equal to " << convert << " miles." << endl;
       unit_input = true;
     }
     else if (select == 3){
        cout << "Enter the weight in pounds: ";
        double pounds; cin >> pounds;
        double convert = pounds*0.453592;
        cout << pounds << " pounds is equal to " << convert << " kilograms." << endl;
        unit_input = true;
     }
     else if (select == 4){
       cout << "Enter the weight in pounds: ";
       double kilograms; cin >> kilograms;
       double convert = kilograms*2.20462;
       cout << kilograms << " kilograms is equal to " << convert << " pounds." << endl;
       unit_input = true;
     }
     else if (select == 5) { // EXIT PROGRAM
       cout << "Exiting program..." << endl;
       unit_input = true;
       return;
     }
     else {
       cout << "Invalid Entry: Please enter a number between 1 - 5: ";
     }
  } while (unit_input == false);
}



void QuestionThree(){
  cout << "3. Assignment Redo - Apple Orchard" << endl;

  //GET NAME
  cout << "What is the name of the orchard?\nName: ";
  string name; cin >> name;
  cout << "Welcome to the " << name << " orchard!" << endl;
  //GET NAME

  double price_each = 0.25;
  cout << "The current price of apples is " << price_each << " each." << endl;

  //QUANTITY LOOP
  cout << "How many apples will you buy? \nApples: ";
  bool quantity_input = false;
  do {
  int apples; cin >> apples;
  if (apples == 0){
    cout << "You can't get nothing! Choose a number greater than 0: ";
  }
  else if (apples < 0){
    cout << "You can't have negative apples! Choose a number greater than 0: ";
  }
  else {
    double total = price_each*apples;
    cout << "Your total is " << total << "." << endl;
    quantity_input = true;
  }

  } while (quantity_input == false);
  // QUANTITY LOOP

  
  //PAYMENT OPTION LOOP
  cout << "Select payment option\n1. Card\n2. Cash\nChoice: ";
  bool pay_input = false;
  do {
  int choice; cin >> choice;
  if (choice == 1){
    cout << "You have selected CARD payment. Thank you for your patronage!" << endl;
    pay_input = true;
  }
  else if (choice == 2){
    cout << "You have selected CASH payment. Thank you for your patronage!" << endl;
    pay_input = true;
  }
  else {
    cout << "Please choose 1 or 2: ";
  }
  } while (pay_input == false);
  // PAYMENT OPTION LOOP
  
}


void clearCin(){
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
}