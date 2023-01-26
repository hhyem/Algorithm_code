//영어 단어를 이루는 글자들이 뒤죽박죽 섞인 것을 받아서 순서대로 재배치 하는 게임

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SOL "apple"

int main() {
  char answer[100] = SOL;
  char user[100];

  //문자열 안의 글자 섞기 > 난수 필요
  //두 개의 난수를 발생시켜 그 위치의 글자들이 서로 바뀌도록 한다. 
  for(int i=0; i<strlen(answer); i++) {
    int r1 = rand()%strlen(answer);
    int r2 = rand()%strlen(answer);
    char tmp = answer[r1];
    answer[r1] = answer[r2];
    answer[r2] = tmp;
  }
  
  do {
    printf("%s는 어떤 단어가 스크램블된 것일까요? ", answer);
    scanf("%s", user);
  } while(strcmp(SOL, user) != 0);

  printf("축하합니다.\n");
}
