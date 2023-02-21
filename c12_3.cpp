#include <iostream>
using namespace std;

class Base {
  int a;
protected:
  void setA(int a) { this->a = a; }
public:
  void showA() { cout << a; }
};

class Derived : private Base {
  int b;
protected:
  void setB(int b) { this->b = b; }
public:
  void showB() { cout << b; }
};

int main() {
  Derived x;
  x.a = 5; // ① 에러 
  x.setA(10); // ② 에러 
  x.showA(); // ③ 에러 
  x.b = 10; // ④ 에러 
  x.setB(10); // ⑤ 에러 
  x.showB(); // ⑥
} 
