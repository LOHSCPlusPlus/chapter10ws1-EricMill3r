#include "Point.h"
using namespace std;

class Line{
  public:
    Line();
    Line(Point A, Point B);
     

void print();
double LineDistance();



  private:
    Point beginning;
    Point conclusion;
};