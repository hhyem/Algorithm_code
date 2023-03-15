#include <stdio.h>
#include <stdlib.h>

int search(int a[], int n, int key) {
  int i=0;
  a[n] = key;

  printf("   |  ");
  for(i=0; i<n; i++) 
    printf("%d  ", i);
  printf("\n---+");
  for(i=0; i<n; i++) 
    printf("---");
  printf("-\n");

  for(int i=0; i<n; i++) {
		printf("   |");
		printf("%*s", 3 * (i - 1) + 5, "");
		printf("*\n");
		printf("%3d|", i);
		for (int j = 0; j < n; j++)
			printf("%3d", a[j]);
		putchar('\n');

		if (a[i] == key)
			return i; /* 검색 성공 */

		printf("   |\n");
    // if(i%2==0) {
    //   printf("   |");
    //   printf("%*s", 2 * (i - 1) + 1, "");
    //   printf("*\n");
    // } 
    // else {
    //   printf(" %d |", k);
    //   k++;
    //   for(int j=0; j<n; j++) {
    //     printf("%d  ", a[j]);
    //   }  
    //   printf("\n");
    // }
  }
  
  for(i=0; i<n; i++) {
    if(a[i] == key) 
      break;
  }

  return i == n?-1:i;
}

int main(void) {
  int i, nx, ky, idx;
  int *x;
  puts("선형 검색(보초법)");
  printf("요소 개수 : ");
  scanf("%d", &nx);
  x = calloc(nx +1, sizeof(int));
  for(i=0; i<nx; i++) {
    printf("x[%d] : ",i);
    scanf("%d", &x[i]);
  }
  printf("검색값 : ");
  scanf("%d", &ky);

  idx = search(x, nx, ky);  //배열, 요소 개수, 검색 값
  
  if(idx == -1)
    puts("검색에 실패했습니다.");
  else
    printf("%d(은)는 x[%d]에 있습니다.\n", ky, idx);
  free(x);

  return 0;
}
