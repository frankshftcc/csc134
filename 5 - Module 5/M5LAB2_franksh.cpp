// M5LAB2
// CSC 134
// Beaty_Franks
// 11/8/23


#include <iostream>
using namespace std;

double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
  // This program calculates the area of a rectangle.

   double length, width, area;      

   // Get the rectangle's length.
   length = getLength();

   // Get the rectangle's width.
   width = getWidth();

   // Get the rectangle's area.
   area = getArea(length, width);

   // Display the rectangle's data.
   displayData(length, width, area);
  
}



double getLength(){
 cout << "Input length: ";
 double length;
 cin >> length;
 return length;
}

double getWidth(){
cout << "Input width: ";
double width;
cin >> width;
return width;
}

double getArea(double length, double width){ 
 double area = length * width;
 cout << "Area: " << area << endl;
  return area;
}

void displayData(double length, double width, double area){
 cout << "\nLength: " << length << endl;
 cout << "Width: " << width << endl;
 cout << "Area: " << area << endl;
}
