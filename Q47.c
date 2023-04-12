//재귀 함수 호출을 사용하지 않고 gcd 함수 작성하기 

#include <stdio.h>

int gcd(int x, int y) {
  int tmp = 0;
  if(y > x) {
    tmp = x;
    x = y;
    y = tmp;
  }

  int i = y;  

  while(i > 0) { //i가 0보다 클 때까지 반복 
    if(x % i == 0 && y % i == 0)  //i가 x와 y 둘 다 나누어 떨어지면 i는 최대공약수가 된다. 
      return i;
    else { //나누어 떨어지지 않는다면 i를 1씩 감소시킨다. 
      i-=1;
    }
  }

  return i;
}

int main(void) {
  int x, y;
  puts("두 정수의 최대공약수를 구합니다.");
  printf("정수를 입력하세요 : ");
  scanf("%d", &x);
  printf("정수를 입력하세요 : ");
  scanf("%d", &y);
  printf("최대공약수는 %d입니다.\n", gcd(x, y));
  
  return 0;
}
