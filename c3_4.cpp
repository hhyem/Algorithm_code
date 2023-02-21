#include <iostream>
#include <string>
//C스트링 : cin.getline(name, 11, '\n');
//string 클래스 : getline(cin, singer);
using namespace std;

int main() {
  string song("Falling in love with you");
  string elvis("Elvis Presley");
  string singer;
  
  cout << song + "를 부른 가수는 ";
  cout << "(힌트 : 첫 글자는 " << elvis[0] << ")?";
  
  getline(cin, singer);  //빈칸 포함하는 문자열 입력 가능 
  if(singer == elvis)
    cout << "맞았습니다.";
  else
    cout << "틀렸습니다. " + elvis + " 입니다." << endl;
}
