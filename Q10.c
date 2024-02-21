//두 변수 a,b를 정수에 입력하고 b-a를 출력하는 프로그램
//변수 b에 입력한 값이 a 이하면 변수 b의 값을 다시 입력받는다.

#include <stdio.h>

int main(void) {
  int a, b;
  int sum = 0;
  
  printf("a값 : ");
  scanf("%d", &a);
  printf("b값 : ");
  scanf("%d", &b);

  while(a >= b) {
    printf("a보다 큰 값을 입력하세요!\n");
    printf("b값 : ");
    scanf("%d", &b);
  }

  printf("b - a는 %d입니다.\n", b - a);

  return 0;
}
