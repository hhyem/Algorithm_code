#include <iostream>
using namespace std;

class Circle {
public:
  int radius;
  double getArea();
};

double Circle::getArea() {
  return 3.14*radius*radius;
}

int main() {
  Circle donut; //donut 이름으로 Circle 타입의 객체 생성
  donut.radius = 1; //donut 객체의 멤버 변수 접근 : 반지름을 1로 설정 
  double area = donut.getArea();  //donut의 멤버 함수 호출 
  cout << "donut 면적은 " << area << endl;
  
  Circle pizza;
  pizza.radius = 30;
  area = pizza.getArea();
  cout << "pizza 면적은 " << area << endl;
}
