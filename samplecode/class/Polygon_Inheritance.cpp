//Simple program to show inheritance of two classes
#include <iostream>
using namespace std;

class Polygon {

  protected:
    int width, height;
  public:
    void setValues(int a, int b) {
      width = a;
      height = b;
    }

};

class Triangle : public Polygon {

  public:
    int area() {
	return width * height;
    }

};

class Rectangle : public Polygon {

  public:
    int area() {
      return width * height;
    }
};

int main() {
  Triangle triangle;
  Rectangle rectangle;

  triangle.setValues(4, 5);

  rectangle.setValues(10, 20);

  cout << "Triangle Area: " << triangle.area() << "\n";

  cout << "Rectangle Area: " << rectangle.area() << "\n";

  return 0;

}
