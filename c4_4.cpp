//Adder.h
#ifndef ADDER_H
#define ADDER_H

class Adder {
  int op1, op2;
public:
  Adder(int a, int b);
  int process();
};

#endif

//Calculator.h
#ifndef CALCULATOR_H
#define CALCULATOR_H
class Calculator {
public:
  void run();
};
#endif

//Adder.cpp
#include "Adder.h"

Adder::Adder(int a, int b) {
  op1 = a;
  op2 = b;
}

int Adder::process() {
  return op1 + op2;
}

//Calculator.cpp
#include <iostream>
using namespace std;

#include "Calculator.h"
#include "Adder.h"

void Calculator::run() {
  cout << "두 개의 수를 입력하세요 >> ";
  int a, b;
  cin >> a >> b;
  Adder adder(a, b);
  cout << adder.process();
}

//main.cpp
#include "Calculator.h"

int main() {
  Calculator calc;
  calc.run();
}
