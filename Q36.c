//요소 값이 내림차순으로 정렬된 long 형 배열에서의 검색을 bsearch 함수 사용하여 작성하기 

#include <stdio.h>
#include <stdlib.h>

long long_cmpr(const long *a, const long *b) {
  if(*a < *b) 
    return 1;
  else if(*a > *b)
    return -1;
  else 
    return 0;
}

int main(void) {
  long i, nx, ky;
  long *x, *p; //배열 첫번째 요소 포인터, 검색한 요소에 대한 포인터

  puts("bsearch 함수 사용해서 검색");
  printf("요소 개수 : ");
  scanf("%ld", &nx);
  x = calloc(nx, sizeof(long));
  printf("내림차순으로 입력하세요 : \n");
  printf("x[0] : ");
  scanf("%ld", &x[0]);

  for(i=1; i<nx; i++) {
    do {
      printf("x[%ld] : ", i);
      scanf("%ld", &x[i]);
    } while (x[i] > x[i-1]); //바로 앞의 값보다 크면 다시 입력
  }
  printf("검색 값 : ");
  scanf("%ld", &ky);
  p = bsearch(&ky,      //검색값에 대한 포인터 
            x,          //배열 
            nx,         //요소 개수 
            sizeof(long),  //요소 크기 
            (long(*)(const void*, const void*)) long_cmpr //비교함수
            );
  if(p==NULL) 
    puts("검색에 실패했습니다.");
  else
    printf("%ld는(은) x[%ld]에 있습니다.\n", ky, (long)(p-x));
  free(x);
  return 0;  
}
