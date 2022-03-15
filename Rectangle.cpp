#include "Rectangle.h"
#include <math.h>
#include <iostream>
using namespace std;

Rectangle::Rectangle() {


}

Rectangle::Rectangle(Line l, Line h) {
  length = l;
  height = h;

}

double Rectangle::calcArea(){
double CalculateDistance = length.LineDistance() * height.LineDistance();
return CalculateDistance;
}

void Rectangle::print(){
cout << "length";
length.print();
cout << "height";
height.print();



  
}
