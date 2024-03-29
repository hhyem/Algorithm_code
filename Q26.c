//배열 b의 모든 요소를 배열 a에 복사하는 함수 
//const : 읽기만 가능, 상수(변할 수 없는 변수)

#include <stdio.h>

void ary_copy(int a[], const int b[], int n) {
  for(int i=0; i<n; i++) {
    a[i] = b[i];
  }
}

int main() {
  int a[10];
  int b[10];

  printf("b 요소 값을 입력하세요 \n");
  for(int i=0; i<10; i++) {
    scanf("%d", &b[i]);
  }
  ary_copy(a, b, 10);

  printf("복사된 a의 요소값 출력 \n");
  for(int i=0; i<10; i++) {
    printf("%d ", a[i]);
  }
}
