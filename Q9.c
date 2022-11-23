#include <stdio.h>
#include <stdlib.h>

//b의 모든 요소를 배열 a에 역순으로 복사하는 함수 
void ary_rcopy(int a[], const int b[], int n) {  
  int j = 0;
  for(int i=n-1; i>=0; i--) {
    a[j] = b[i];
    printf("%d\n", a[j]);
    j++;
  }
}

int main() {
  int b[] = {1,2,4,1,52,22,3};
  int size = sizeof(b) / 4;
  int *a;
  a = calloc(size, sizeof(int));

  ary_rcopy(a, b, size);
}
