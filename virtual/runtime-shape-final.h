class Shape
{
 public:
  Shape() {};
  virtual double area() {return 0.0;};
};
class Rectangle: public Shape
{
 protected:
  double width;
  double height;
 public:
 Rectangle(double w, double h): width(w), height(h) {}
  double area(void) override final {return width * height;}
};
class Square: public Rectangle
{
 public:
  Square(double s): Rectangle(s, s) {};
  // this does not compile
  double area(void) override {return width + height;}
};
#define PI 3.1415926
class Circle: public Shape
{
 private:
  double radius;
 public:
 Circle(double r): radius(r) {};
  double area(void) override final {return radius * radius * PI;}
};
  
