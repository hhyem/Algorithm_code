#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SOL "apple"

int main() {
  char answer[100] = SOL;
  char user[100];

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
