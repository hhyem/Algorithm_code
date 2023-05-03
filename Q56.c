#include <stdio.h>
#include <stdlib.h>
#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)

void bubble(int a[], int n) {   //6 4 3 7 1 9 8
  int i, j;
  int ccnt = 0, scnt = 0; 
  for (i = 0; i < n - 1; i++) { 
    printf("패스%d：\n", i + 1);
    for (j = n - 1; j > i; j--) {
      for (int m = 0; m < n - 1; m++)
				printf("%3d %c", a[m], (m != j - 1) ? ' ' : (a[j - 1] > a[j]) ? '+' : '-');
			  printf("%3d\n", a[n - 1]);
        ccnt++;
        if (a[j - 1] > a[j]) { //앞 숫자가 더 클 때
          scnt++;
          swap(int, a[j - 1], a[j]);
        }
    }
    for (int m = 0; m < n; m++)
			printf("%3d  ", a[m]);
		putchar('\n');
  }
  printf("비교 %d회\n", ccnt);
	printf("교환 %d회\n", scnt);
}

int main(void) {
  int i, nx;
  int *x; //배열 첫 번째 요소에 대한 포인터

  puts("버블 정렬");
  printf("요소 개수 : ");
  scanf("%d", &nx);
  x = calloc(nx, sizeof(int)); //요소 개수가 nx인 int형 배열 생성

  for(i=0; i<nx; i++) {
    printf("x[%d] : ", i);
    scanf("%d", &x[i]);
  }

  bubble(x, nx); //배열 x 버블 정렬

  puts("오름차순으로 정렬했습니다. ");
  for(i=0; i<nx; i++) 
    printf("x[%d] = %d\n", i, x[i]);

  free(x);
  return 0;
}
