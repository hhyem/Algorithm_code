//배열 요소를 역순으로 정렬하는 과정을 출력한다.

#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)

void ary_reverse(int a[], int n) {
  for(int j=0; j<n; j++) 
    printf("%d ", a[j]);
  for(int i=0; i<n/2; i++) {
    printf("\na[%d]와 a[%d]를 교환합니다. \n", i, n-i-1);
    swap(int, a[i], a[n-i-1]);
    for(int j=0; j<n; j++) 
      printf("%d ", a[j]);
  }
  printf("\n역순 정렬을 종료합니다.\n");
}

int main(void) {
  int i;
  int *x; //배열 첫 번째 요소의 포인터
  int nx; //배열 x의 요소 개수

  printf("요소 개수 : ");
  scanf("%d", &nx);
  x = calloc(nx, sizeof(int));

  printf("%d개의 정수를 입력하세요 \n", nx);
  for(i=0; i<nx; i++) {
    printf("x[%d] : ", i);
    scanf("%d", &x[i]);
  }

  ary_reverse(x, nx);
  printf("배열의 요소를 역순으로 정렬했습니다. \n");
  for(i=0; i<nx; i++) 
    printf("x[%d] = %d\n", i, x[i]);
  free(x);

  return 0;
}



//혼자 풀어본 것
#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0);

void ary_rev(int a[], int n) {

  for(int z=0; z<n/2; z++) {
    for(int i=0; i<n; i++)
      printf("%d ", a[i]);
    printf("\n");
    printf("a[%d]와 a[%d]를 교환합니다.\n", z, n-z-1);
    swap(int, a[z], a[n-z-1]);
  }
  for(int i=0; i<n; i++)
    printf("%d ", a[i]);

  printf("\n역순 정렬을 종료합니다.\n");
}

int main(void) {

  //x : 배열 첫번쨰 요소 포인터
  //nx : 배열 x 요소 개수
  int i, *x, nx; 

  printf("요소 개수 : ");
  scanf("%d", &nx);

  x = calloc(nx, sizeof(int));
  printf("%d개의 정수를 입력하세요\n", nx);
  for(i=0; i<nx; i++) {
    printf("x[%d] : ", i);
    scanf("%d", &x[i]);
  }

  ary_rev(x, nx);

  printf("배열 요소를 역순으로 정렬했습니다.\n");
  for(i=0; i<nx; i++)
    printf("x[%d] = %d\n", i, x[i]);

  free(x);
}
