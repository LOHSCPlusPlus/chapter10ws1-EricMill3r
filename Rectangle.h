#include "Line.h"
using namespace std;


class Rectangle{
  public:
    Rectangle();
    Rectangle(Line length, Line height);
     

void print();
double calcArea();



  private:
    Line length;
    Line height;
};