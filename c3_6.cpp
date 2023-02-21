#include <iostream>
using namespace std;

class Rectangle { //Rectangle 클래스 선언부 
public:
  int width;
  int height;
  int getArea();
};

int Rectengle::getArea() {  //Rectangle 클래스 구현부 
  return width*height;
}

int main() {
  Rectangle rect;
  rect.width = 3;
  rect.height = 5;
  cout << "사각형 면적은 " << rect.getArea() << endl;
}
