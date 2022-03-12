#include "Line.h"
#include <math.h>
#include <iostream>

using namespace std; 

Line::Line() {


}

Line::Line(Point z, Point q) {
  beginning = z;
  conclusion = q;

}

double Line::LineDistance(){
  return beginning.calcDistance(conclusion);
}

void Line::print(){
  cout << "start point: ";
  beginning.print();
  cout << endl;
  cout << "end point: ";
  conclusion.print();
  cout << endl;
}


