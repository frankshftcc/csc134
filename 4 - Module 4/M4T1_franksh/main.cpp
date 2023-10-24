#include <iostream>
using namespace std;

/*
CSC 134
M4T1 - While Loops
franksh
10/11/2023
*/

//Declare list functions
void Part1();
void Part2();


int main()
{
    cout << "Main Menu" << endl;
    cout << "1. Part 1" << endl;
    cout << "2. Part 2" << endl;
    cout << "Select 1 or 2: ";
    string select; cin >> select;

//This is a string because I noticed inputting letters when
//it's set to an int makes it break

    if (select == "1"){
        Part1();
    }
    else if (select == "2"){
        Part2();
    }
    else {
        cout << "Please choose 1 or 2:" << endl;
        main();
    }
return 0;
}


void Part1(){
    int number = 5;
    int i = 0;
    while (i < number) {
        cout << "Hello" << endl;
        i++;
    }
    cout << "That's all!" << endl;

}

void Part2(){
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 10;

    int num = MIN_NUMBER;

    cout << "Number\tNumber Squared" << endl;

    while (num <= MAX_NUMBER){
        cout << num << "\t\t" << num*num << endl;
        num++;
    }
    cout << "That's all!" << endl;
}









