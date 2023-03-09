#include <stdio.h>

void ary_rcopy(int a[], const int b[], int n) {
  for(int i=0; i<n; i++) { 
    a[n-i-1] = b[i]; 
  }
}

int main() {
  int a[10] = {0,};
  int b[10];

  printf("b 요소 값을 입력하세요 \n");
  for(int i=0; i<10; i++) {
    scanf("%d", &b[i]);
  }
  ary_rcopy(a, b, 10);

  printf("복사된 b의 값을 역순으로 출력 \n");
  for(int i=0; i<10; i++) {
    printf("%d ", a[i]);
  }
}
