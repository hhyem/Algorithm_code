#include <iostream>
using namespace std;

class PrivateAccessError {
  private:
    int a;
    void f();
    PrivateAccessError();
  public:
    int b;
    PrivateAccessError(int x);
    void g();
};

//a와 f는 private으로 생성되었지만, 멤버 함수 구현부에 있기 때문에 에러가 발생하지 않는다. 
PrivateAccessError::PrivateAccessError() {
  a = 1; // (1)
  b = 1; // (2)
}

PrivateAccessError::PrivateAccessError(int x) {
  a = x; // (3)
  b = x; // (4)
}

void PrivateAccessError::f() {
  a = 5; // (5)
  b = 5; // (6)
}

void PrivateAccessError::g() {
  a = 6; // (7)
  b = 6; // (8)
}

int main() {
  PrivateAccessError objA; // (9) 생성자가 private이기 때문에 에러 발생 
  PrivateAccessError objB(100); // (10)
  objB.a = 10; // (11)  변수는 private이므로 에러 발생 
  objB.b = 20; // (12) 
  objB.f(); // (13)  변수가 privateㅇ로 생성되었으므로 에러 발생 
  objB.g(); // (14)
}
