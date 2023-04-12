//재귀 함수 호출을 사용하지 않고 factorial 함수 작성하기

#include <stdio.h>

int factorial(int n) {
  int sum = 1;
  while(n > 0) {
    sum*=n;
    n-=1;
  }

  return sum;
}

int main(void) {
  int x;
  printf("정수를 입력하세요 : ");
  scanf("%d", &x);
  printf("%d의 순차곱셈 값은 %d입니다. \n", x, factorial(x));

  return 0;
}
