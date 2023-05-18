//함수 형식 매크로 swap와 같은 방식으로 바꿔보기 
#include <stdio.h>
//포인터 교환하는 함수 
#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)

int main(void) {
  char *s1 = "ABCD";  //s1은 A를 가리킨다.
  char *s2 = "EFGH";  //s2는 E를 가리킨다.

  printf("포인터 s1은 \"%s\"를 가리킵니다.\n", s1);
  printf("포인터 s2은 \"%s\"를 가리킵니다.\n", s2);

  swap(char*, s1, s2);

  puts("\n포인터 s1과 s2의 값을 서로 교환했습니다.\n");

  printf("포인터 s1은 \"%s\"를 가리킵니다.\n", s1);
  printf("포인터 s2은 \"%s\"를 가리킵니다.\n", s2);

}
