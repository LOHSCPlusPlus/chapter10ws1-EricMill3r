#include "Line.h"
#include <iostream>
using namespace std;

int main() {
  Point A(5,9);
  Point B(2,8);
  Line One(A,B);
  One.print();
  cout << One.LineDistance();

  return 0;
}


