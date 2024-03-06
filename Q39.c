//bsearch 함수와 같은 형식으로 호출할 수 있는 bsearchx 함수 작성하기
//35번 문제 처럼 이진 검색 알고리즘을 사용하여 일치하는 요소의 검색에 성공하면 그 위치에서 앞쪽으로 선형 검색을 수행하여 가장 앞쪽의 요소에 대한 포인터를 반환한다.

#include <stdio.h>
#include <stdlib.h>

void *bsearchx(const void *key, const void *base, size_t nmemb, size_t size, int(*compar)(const void*, const void*)) {
  size_t pl = 0;
  size_t pr = nmemb - 1;
  size_t pc;

  char *x = (char *)base;

  if(nmemb > 0) {
    while(1) {
      int comp = compar((const void*)&x[(pc = (pl+pr)/2)*size], key);

      if(comp == 0) {
        for(; pc > pl; pc--)
          if(compar((const void*)&x[(pc-1)*size], key))
            break;
        return &x[pc*size];
      }
      else if(pl == pr)
        break;
      else if(comp < 0)
        pl = pc+1;
    }
  }
  return NULL;
}

int int_cmpr(const int *a, const int *b) {
  if(*a < *b) 
    return 1;
  else if(*a > *b)
    return -1;
  else
    return 0;
}

int main(void) {
  int i, nx, ky;
  int *x, *p; //배열 첫번째 요소에 대한 포인터, 검색한 요소에 대한 포인터
  puts("bsearchx 함수를 사용하여 검색 ");
  printf("요소 개수 : ");
  scanf("%d", &nx);
  x = calloc(nx, sizeof(int));
  printf("내림차순으로 입력하세요 \n");
  printf("x[0] : ");
  scanf("%d", &x[0]);
  for(i=1; i<nx; i++) {
    do {
      printf("x[%d] : ", i);
      scanf("%d", &x[i]);
    } while (x[i] > x[i-1]);
  }

  printf("검색 값 : ");
  scanf("%d", &ky);
  p = bsearchx(&ky, x, nx, sizeof(int), (int(*)(const void *, const void *)) int_cmpr);
  if(p==NULL)
    puts("검색에 실패했습니다.");
  else
    printf("%d는(은) x[%d]에 있습니다.\n", ky, (int)(p-x));
  free(x);
  return 0;
}
