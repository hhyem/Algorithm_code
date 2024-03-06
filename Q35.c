//이진 검색 알고리즘 프로그램은 검색할 값과 같은 값을 갖는 요소가 하나 이상일 경우 그 요소 중 맨 앞의 요소를 찾지 못한다.
//맨 앞 요소를 찾는 bin_search2 함수를 작성한다.

#include <stdio.h>
#include <stdlib.h>

int bin_search2(const int a[], int n, int key) {
  int pl = 0;      //검색 범위 맨 앞 인덱스
  int pr = n-1;    //검색 범위 맨 끝 인덱스
  int pc;          //검색 범위 한가운데 인덱스 
  
  do {
    pc = (pl+pr) /2;
    printf("   |");

    for (int i = 0; i < 4 * pl; i++) 
      printf("  ");
		printf(" <-");
		for (int i = 0; i < 4 * (pc - pl); i++) 
      printf(" ");
		printf("+");
		for (int i = 0; i < 4 * (pr - pc) - 2; i++) 
      printf(" ");
		printf("->\n");

    printf("%3d|", pc);
    for(int i=0; i<n; i++) {
      printf("%4d", a[i]);
    }
    printf("\n");
    if(a[pc] == key)   //검색 성공 
      return pc;
    else if(a[pc] < key)
      pl = pc+1;
    else
      pr = pc-1;
  } while(pl <= pr);
  return -1;
}
int main() {

  int i, nx, ky, idx;
  int *x;
  puts("이진 검색 ");
  printf("요소 개수 : ");
  scanf("%d", &nx);
  x = calloc(nx, sizeof(int));
  printf("오름차순으로 입력하세요 : \n");
  printf("x[0] : ");
  scanf("%d", &x[0]);
  for(i=1; i<nx; i++){
    do {
      printf("x[%d] : ", i);
      scanf("%4d", &x[i]);
    } while (x[i]<x[i-1]);
  }
  printf("검색 값 : ");
  scanf("%d", &ky);
  printf("   |");
  for(i=0; i<nx; i++) 
    printf("%4d", i);
  printf("\n---");
  for(i=0; i<nx*4; i++) 
    printf("-");
  printf("\n");
  idx = bin_search2(x, nx, ky);
  if(idx == -1)
    puts("\n검색에 실패했습니다.");
  else
    printf("\n%d은(는) x[%d]에 있습니다.\n", ky, idx);
  free(x);
}
