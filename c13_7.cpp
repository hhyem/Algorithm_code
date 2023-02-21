#include <iostream>
#include <string>
using namespace std;

template <class T>
class MyStack {
  int tos; // top of stack
  T data [100]; // T 타입의 배열. 스택의 크기는 100
public:
  MyStack();
  void push(T element); // element를 data [] 배열에 삽입
  T pop(); // 스택의 탑에 있는 데이터를 data[] 배열에서 리턴
}

class Point {
  int x, y;
public:
  Point(int x=0, int y=0) { this->x = x; this->y = y; }
  void show() { cout << '(' << x << ',' << y << ')' << endl; }
};

int main() {
  MyStack<int *> ipStack; // int* 만을 저장하는 스택
  int *p = new int [3];
  for(int i=0; i<3; i++) p[i] = i*10; // 0, 10, 20으로 초기화
    ipStack.push(p); // 포인터 푸시
  int *q = ipStack.pop(); // 포인터 팝
  for(int i=0; i<3; i++) cout << q[i] << ' '; // 화면 출력
    cout << endl;
  delete [] p;
  
  MyStack<Point> pointStack; // Point 객체 저장 스택
  Point a(2,3), b;
  pointStack.push(a); // Point 객체 a 푸시. 복사되어 저장
  b = pointStack.pop(); // Point 객체
  b.show();
  
  MyStack<Point*> pStack; // Point* 포인터 스택
  pStack.push(new Point(10,20)); // Point 객체 푸시
  Point* pPoint = pStack.pop(); // Point 객체의 포인터 팝
  pPoint->show(); // Point 객체 출력
  
  MyStack<string> stringStack; // 문자열만 저장하는 스택
  string s="c++";
  stringStack.push(s);
  stringStack.push("java");
  cout << stringStack.pop() << ' ‘;
  cout << stringStack.pop() << endl;
}
