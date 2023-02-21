//헤더 파일 
#include <iostream>
using namespace std;

class Adder {
  int op1, op2;
public:
  Adder(int a, int b);
  int process();
};

class Calculator {
public:
  void run();
};

//cpp 파일
#include <iostream>
using namespace std;

Adder::Adder(int a, int b) {
  op1 = a;
  op2 = b;
}

int Adder::process() {
  return op1 + op2;
}

void Calculator::run() {
  cout << "두 개의 수를 입력하세요 >> ";
  int a, b;
  cin >> a >> b;
  Adder adder(a, b);
  cout << adder.process();
}

//main cpp 파일 
//헤더, cpp 파일 include 
#include <iostream>
using namespaces std;
int main() {
  Calculator calc;
  calc.run();
}
