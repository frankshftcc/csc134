#include <iostream>
#include <iomanip>

/*
CSC 134
M2HW1 - Pizza Party
franksh
9/15
Ask for how many pizzas
Ask for how many slices per pizza
Ask for how many visitors
Calculate leftover slices if 1 visitor needs 3 slices
*/
using namespace std;

int main() {
  
 //ask how many pizzas to order
 cout << "How many pizzas would you like to order?" << endl;
 int pizza;
 cin >> pizza;

 //ask how many slices per pizza
 cout << "How many slices should each pizza have?" << endl;
 int slices;
 cin >> slices;
  
 //ask how many visitors
 cout << "How many visitors are coming?" << endl; 
 int visitors;
 cin >> visitors;

 //calculate how many pieces are left over
 // 3 slices per 1 visitor
 int total_slices = pizza*slices;
 int slices_needed = visitors*3;
 int remaining = total_slices - slices_needed;

 //print answers
 cout << "Each visitor will receive 3 slices out of the total " << total_slices << "." << endl;
 cout << "As such, you'll have " << remaining << " slices leftover." << endl;
  
 return 0;
}