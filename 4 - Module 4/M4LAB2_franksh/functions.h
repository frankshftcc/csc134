#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <cstdlib>
#include <ctime>
using namespace std;


// counting test: count zero to nine
void counting_test() {
  int num = 0;
  while (num <=9) {
    cout << num << " ";
    num++;
  }
  cout << endl;
}

// dice roller: rolle 1d6, then roll 3d6.
// XdY is defined as rolling X dice with Y sides.
void dice_roller() {
  srand(time(0));
  cout << "Your seed is: " << time(0) << endl;
  int d100 = rand() % 100;
  cout << "Percentage roll: " << endl;
  cout << "You rolled: " << d100 << endl;


  //roll 3d6 (three dice added together)
  int first = rand() % 6 + 1;
  int second = rand() % 6 + 1;
  int third = rand() % 6 + 1;
  int total = first + second + third;
  cout << "3d6 Bell Curve roll:" << endl;
  cout << "Roll: " << first << " + " << second;
  cout << " + " << third << " = " << total << endl;

}
   void total_average()
{
     cout << "Running total and average" << endl;
    // Roll 3d6 ten times
    srand(time(0));
    int total = 0;
    for (int i = 0; i < 10; i++) {
        int first = (rand() % 6) +1;
        int second = (rand() % 6) +1;
        int third = (rand() % 6) +1;
        int sum = first + second + third;
        total += sum;
        }
     float average = static_cast<float>(total)/10;

      cout << "Total: " << total << endl;
      cout << "Average: " << average << endl;
    }




#endif //FUNCTIONS_II
