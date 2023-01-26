#include <stdio.h>
#include <string.h>
#define WORDS 5

int mai(void) {
  char dic[WORDS][2][30] = {  //단어 개수, 영어/한글, 문자열 최대 길이
    {"book", "책"},
    {"boy","소년"},
    {"computer","컴퓨터"},
    {"language","언어"},
    {"rain","비"}
  };
  char user[100];
  
  printf("단어를 입력하세요 : ");
  scanf("%s", user);

  for(int i=0; i<WORDS; i++) {
    if(strcmp(user, dic[i][0]) == 0) {
      printf("%s : %s\n", user, dic[i][1]);
    }
  }

 

printf("사전에서 발견되지 않았습니다.\n");

  return 0;
  
}
