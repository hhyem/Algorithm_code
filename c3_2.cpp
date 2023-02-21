#include <iostream>
using namespace std;

int main() {
  cout << "주소를 입력하세요 >> ";
  
  char addrss[100];
  cin.getline(address, 100, '\n');  //키보드로부터 주소 읽기. 빈칸이 있어도 엔터키가 입력될 때까지 하나의 문자열로 인식한다. 
  
  cout << "주소는 " << address << "입니다.\n";
}
