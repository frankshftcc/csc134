/*
M6T2 - Rectangles Classes and Objects
CSC 134
franksh
12/7/2023
Bronze
*/

#include <iostream>
using namespace std;

// Rectangle class
class Rectangle {
private: // often _ indicates a private variable
  double _width;
  double _height;

public:
  void set_width(double);
  void set_height(double);
  // const = does not change the object
  double get_width() const;
  double get_height() const;
  double get_area() const;
};

// functions of the Rectangle class
void Rectangle::set_width(double w) { _width = w; }

void Rectangle::set_height(double h) { _height = h; }

double Rectangle::get_width() const { return _width; }

double Rectangle::get_height() const { return _height; }

double Rectangle::get_area() const {
  double area = _width * _height;
  return area;
}
// main()
int main() {
  Rectangle r;
  double width;
  double height;

  // Ask the user for the size of the rectangle
  cout << "What is the rectangle height?" << endl;
  cin >> height;
  cout << "What is the rectangle width?" << endl;
  cin >> width;

  // Set up the rectangle
  r.set_height(height);
  r.set_width(width);

  // Tell them the size and the area
  cout << "The rectangle is height: ";
  cout << r.get_height() << " and ";
  cout << "width: " << r.get_width() << endl;
  cout << "Its area is: " << r.get_area() << endl;

}