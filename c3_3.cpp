#include <iostream>
#include <string>
using namespace std;

int main() {
  char password[11];
  cout << "프로그램을 종료하려면 암호를 입력하세요. " << endl;
  while(true) {
    cout << "암호 >>";
    cin >> password;
    if(strcmp(password, "C++") == 0) {
      cout << "프로그램을 정상 종료합니다." << endl;
      break;
    }
    else 
      cout << "암호가 틀립니다." <<endl;
  }
}

//strcmp 문자열 비교 함수
//같으면 0, 앞문자열이 크면 1, 뒷문자열이 크면 -1
