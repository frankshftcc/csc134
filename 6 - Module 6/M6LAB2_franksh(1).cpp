/*
M6LAB2 - Arrays/Vectors
CSC134
franksh
12/2/2023

GOLD
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <limits>
using namespace std;

void clearCin();

int main() {
  
  cout << "M6LAB2 - GOLD" << endl;
  cout << "Part 1: Vectors" << endl;
  vector<int> numbers;
  int size;

  // do loop for the 1 - 20 restriction
  do {
    cout << "Please enter the desired # of entries (must be between 1 - 20): ";
    cin >> size;
       if(cin.fail()){
       clearCin();
       size = 0;
  }
     } while (size > 20 || size < 0);

  for (int i=0; i < size; i++) {
    int num;
    cout << "[" << i + 1 << "] " << "Enter number: ";
    cin >> num;
    numbers.push_back(num);
  }
  
  // Print back everything in the vector
  cout << "numbers[] = ";
  for (int i=0; i < numbers.size(); i++) {
    cout << numbers[i] << " ";
  }
  cout << endl;
  
  // Find the total, average, min, and max
  auto min_number = min_element(numbers.begin(), numbers.end());
  auto max_number = max_element(numbers.begin(), numbers.end());
  int total = accumulate(numbers.begin(), numbers.end(), 0);
  double average = (double)total / numbers.size();
  cout << "Total (sum): " << total << endl;
  cout << "Average: " << average << endl;
  cout << "Smallest number: " << *min_number << endl;
  cout << "Largest number: " << *max_number << endl;
}


// i learned this from my buddy
void clearCin(){
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
}