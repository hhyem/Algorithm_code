#include <iostream>
using namespace std;

class Person {
public:
  double money; // 개인 소유의 돈
  void addMoney(int money) {
    this->money += money;
  }
  static int sharedMoney; // 공금
  static void addShared(int n) {
    sharedMoney += n;
  }
};

// static 변수 생성. 전역 공간에 생성
int Person::sharedMoney=10; // 10으로 초기화

// main() 함수
int main() {
  Person::addShared(50); // static 멤버 접근, 공금=60
  cout << Person::sharedMoney << endl;
  
  Person han;
  han.money = 100;
  han.sharedMoney = 200; // static 멤버 접근, 공금=200
  
  Person::sharedMoney = 300; // static 멤버 접근, 공금=300
  Person::addShared(100); // static 멤버 접근, 공금=400
  
  cout << han.money << ' ' << Person::sharedMoney << endl;
}
