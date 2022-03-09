class Point{
    public:
        Point();
        Point(double xVal, double yVal);
        double calcDistance(Point other);
/*
        double getX();
        double getY();
        void setX(double xVal);
        void setY(double yVal);
*/
void print();
    private:
        double x;
        double y;
      
};
