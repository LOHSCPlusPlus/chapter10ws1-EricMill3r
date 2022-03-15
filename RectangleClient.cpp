#include "Rectangle.h"
#include <iostream>
using namespace std;

int main() {
    

  Point A(5,9);
  Point B(2,8);
  Line One(A,B);

  Point C(5,9);
  Point D(2,8);
  Line Two(C,D);

  Point E(5,9);
  Point F(2,8);
  Line Three(E,F);

  Point G(5,9);
  Point H(2,8);
  Line Four(G,H);

  Rectangle R(One,Two);
 
  R.print();
  cout << "Rectangle Area: " << R.calcArea();
  return 0;
  }
