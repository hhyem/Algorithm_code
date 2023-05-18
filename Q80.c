//널문자 다음에 문자를 대입해도 결과가 동일한지 확인하기 
#include <stdio.h>

int main(void) {
  char str[10];
  str[0] = 'A';
  str[1] = 'B';
  str[2] = 'C';
  str[3] = 'D';
  str[4] = 'E';
  str[5] = '\0';
  str[6] = 'X';

  printf("문자열 str에는 \"%s\"가 들어 있습니다. \n", str);
}
