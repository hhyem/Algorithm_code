#include <stdio.h>
#include <stdlib.h>

//b의 모든 요소를 배열 a에 복사하는 함수 
void ary_copy(int a[], const int b[], int n) {  
  for(int i=0; i<n; i++) {
    a[i] = b[i];
    printf("%d\n", a[i]);
  }
}

int main() {
  int b[] = {1,2,4,1,52,22,3};
  int size = sizeof(b) / 4;
  int *a;
  a = calloc(size, sizeof(int));

  ary_copy(a, b, size);
}
