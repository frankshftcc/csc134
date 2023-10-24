#include <iostream>
using namespace std;

/*
CSC 134
M4LAB 1 - Creating a Block of Asterisks
franksh
10/14/2023
*/

int main()
{
    cout << "M4LAB\n" << endl;
//declare variables
    int height, width;
//set size
    cout << "How tall should the block be?" << endl;
    cin >> height;
    cout << "How wide should the block be?" << endl;
    cin >> width;
// ROW OF ASTERISK
cout << "One row" << endl;
    for (int i=0; i < width; i++) {
        cout << "*" << " ";
    }
    cout << endl;
//COLUMN OF ASTERISK
cout << "One column" << endl;
    for (int j=0; j < height; j++) {
        cout << "*" << endl;
    }
    cout << endl;
//BLOCK OF ASTERISK
cout << "The entire block!" << endl;

    for (int j=0; j < height; j++) {
        for (int i=0; i < width; i++) {
        cout << "*" << " ";
      }
          cout << endl;
    }
    return 0;
}
