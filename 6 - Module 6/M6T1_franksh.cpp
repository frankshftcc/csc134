/*
M6T1 - Five Nights at For Loops
CSC 134
franksh
12/1/23
*/

#include <iostream>
#include <vector>
using namespace std;

void array_version() {


  // INT chickens, CONST INT nights
  const int NIGHTS = 5;
  int chickens[5];
  
  // or: int chickens[NIGHTS] = {0, 0, 0, 0, 0};
  
  for (int night=0; night<NIGHTS; night = night +1) {
    cout << "Night " << night+1 << ": ";
    int tonights_chickens;
    cin >> tonights_chickens;
    chickens[night] = tonights_chickens;
  }
  for (int night = 0; night < NIGHTS; night++ ) {
    cout << "Night " << night+1 << ": ";
    cout << chickens[night] << " bears spotted." << endl;
  }

}

int main() {

  cout << "Enter observation data for each night: " << endl;
  
  const int NIGHTS = 5;
  vector<int> chickens(NIGHTS, 0); // 5 nights, 0 each
  for (int night=0; night<NIGHTS; night++) {
    cout << "Night " << night+1 << ": ";
    cin >> chickens[night];
  }
  cout << endl << "----------" << endl << endl;
  for (int night=0; night<NIGHTS; night++) {
    cout << "Night " << night+1 << ": ";
    cout << chickens[night] << " chickens" << endl;
  }

}