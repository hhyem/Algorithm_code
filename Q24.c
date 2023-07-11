//배열의 맨 앞쪽에 아랫자리가 아니라 윗자리를 저장하는 함수 작성하기 
//어떻게 해야하는지를 모르겠어서 그냥 tmp 배열을 따로 만들고 역순으로 저장하는 방법을 사용했다... 

//아니면 swap 함수 사용하기?????? 

#include <stdio.h>

#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0);

int card_convr(unsigned x, int n, char d[]) {
  char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int digits = 0; //변환 후 자릿수
  char tmp[512];

  if(x == 0)
    d[digits++] = dchar[0];
  else
    while(x) {
      tmp[digits++] = dchar[x%n];
      // d[digits++] = dchar[x%n];
      x/=n;
    }

  int j = 0;
  for(int i=digits-1; i>=0; i--) {
    d[j] = tmp[i];
    j+=1;
  }
  return digits;
}

int main(void) {
  int i, dno, cd;
  unsigned no;
  char cno[512];
  int retry;
  puts("10진수를 기수 변환합니다.");

  do {
    printf("변환하는 음이 아닌 정수 : ");
    scanf("%u", &no);
    do {
      printf("어떤 진수로 변환할까요? (2-36) : ");
      scanf("%d", &cd);
    } while(cd < 2 || cd > 36);
    dno = card_convr(no, cd, cno);
    printf("%d진수로는 ", cd);
    for(i=dno-1; i>=0; i--)
      printf("%c", cno[i]);
    printf("입니다.\n");
    printf("한번 더 할까요? 1--예/0--아니오 : ");
    scanf("%d", &retry);
  } while(retry == 1);

  return 0;
}
