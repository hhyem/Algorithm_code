#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)

void any_reverse(int a[], int n) {
	for(int i=0; i<n/2; i++) {
		printf("a[%d]과 a[%d]를 교환합니다. \n", i, n-i-1);
		swap(int, a[i], a[n-i-1]);
		for(int i=0; i<n; i++) 
      printf("%d ", a[i]);
    printf("\n");
	}
	printf("\n");
}

int main(void) {
	int i, *x, nx;  //x : 첫 번째 요소의 포인터, nx : 배열 x의 요소 개수 

	printf("요소 개수 : ");
	scanf("%d ", &nx);
	x = calloc(nx, sizeof(int));
	for(i = 0; i < nx; i++) {
		scanf("%d", &x[i]);
	}

	any_reverse(x, nx);
  printf("역순 정렬을 종료합니다.\n");

	free(x);

	return 0;
}
