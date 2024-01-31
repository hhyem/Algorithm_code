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
