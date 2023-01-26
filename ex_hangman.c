#include <stdio.h>
#include <string.h>

int main(void) {
  char solution[100] = "meet at midnight";
  char answer[100] = "____ __ ________";
  char ch;
  int tries = 0;

  while(tries < 10) {
    if(tries > 10) {
      printf("시도 횟수를 초과했습니다.\n");
      break;
    }
    printf("문자열을 입력하시오 : %s\n", answer);
    printf("글자를 추측하시오 : ");  
    scanf("%c", &ch);
    
    for(int i=0; i<strlen(solution); i++) {
      if(solution[i] == ch)
        answer[i] = ch;
    }
    
    if(strcmp(solution, answer) == 0) {
      printf("정답 \n");
      break;
    } 
    tries++;
  }
  return 0;
}
