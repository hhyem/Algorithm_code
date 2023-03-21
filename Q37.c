#include <stdio.h>
#include <stdlib.h>

//base가 가리키는 요소의 크기 : size
//요소 개수가 nmemb인 배열에서 key와 알치하는 요소를 
//비교함수 compar을 사용해서 선형 검색
void *seqsearch(const void *key, const void *base, size_t nmemb, size_t size, int(*compar)(const void*, const void*)) {
  size_t i;
  char *x = (char*)base;

  for(i=0; i<nmemb; i++)
    if(!compar((const void *) &x[i*size], key))
      return (&x[i*size]);
  return NULL;
}

int int_cmp(const int *a, const int *b) {
  if(*a < *b) 
    return 1;
  else if(*a > *b)
    return -1;
  else
    return 0;
}

int main(void) {
  int i, nx, ky;
  int *x;
  int *p;
  puts("seqsearch 함수 사용해서 검색 ");
  printf("요소 개수 : ");
  scanf("%d", &nx);
  x = calloc(nx, sizeof(int));
  printf("내림차순으로 입력하세요 : \n");
  printf("x[0] : ");
  scanf("%d", &x[0]);
  for(i=1; i<nx; i++) {
    do {
      printf("x[%d] : ", i);
      scanf("%d", &x[i]);
    } while(x[i] > x[i-1]);
  }

  printf("검색값 : ");
  scanf("%d", &ky);
  p = seqsearch(&ky, x, nx, sizeof(int), (int(*)(const void*, const void*))int_cmp);
  if(p == NULL)
    puts("검색에 실패했습니다.");
  else
    printf("%d는(은) x[%d]에 있습니다.\n", ky, (int)(p-x));
  free(x);
  return 0;
}
