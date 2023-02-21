#include <iostream>
using namespace std;

int main() {
  int a = 15; //a의 주소값 0012FF00
  int*p = &a; //p의 주소값 0013FF88
  
  //ary의 주소값는 0012FF04 시작
  int ary[5] = { 10, 20, 30, 40, 50 };
  int* ap = ary; //ap의 주소값 0013FF90
  
  cout << "[1]" << p << endl;
  cout << "[2]" << *p << endl;
  cout << "[3]" << *(ap + 3) << endl;
  cout << "[4]" << ary[4] << endl;
  
  int j = *(ap + 1) < *(ap + 2);
  cout << "[5]" << j << endl;
  
  cout << "[6]" << &ap << endl;
  cout << "[7]" << *p-- << endl;
  cout << "[8]" << *p << endl;
  
  return 0;
}
