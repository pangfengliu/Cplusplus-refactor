class Shape
{
 public:
  double area() {return 0.0;};
};
class Rectangle: public Shape
{
 private:
  double width;
  double height;
 public:
 Rectangle(double w, double h): width(w), height(h) {}
  double area(void) {return width * height;}
};
class Square: public Rectangle
{
 public:
  Square(double s): Rectangle(s, s) {};
};
#define PI 3.1415926
class Circle: public Shape
{
 private:
  double radius;
 public:
 Circle(double r): radius(r) {};
  double area(void) {return radius * radius * PI;}
};
  
