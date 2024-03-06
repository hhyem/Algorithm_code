//요소 개수가 n인 배열 a에서 key와 일치하는 모든 요소의 인덱스를 배열 idx의 맨 앞부터 순서대로 저장하고
//일치한 요소의 개수를 반환하는 함수 작성하기

#include <stdio.h>
#include <stdlib.h>

int search_idx(const int a[], int n, int key, int idx[]) {

  int cnt = 0;
  
  for(int i=0; i<n; i++) {
    if(a[i] == key) {
      idx[i] = i;
      cnt++;
    }
  }

  printf("배열 a에 있는 key의 개수 : %d\n", cnt);
  printf("key의 인덱스 값 : ");
  for(int i=0; i<n; i++) {
    if(idx[i]!=0)
      printf("%d ", idx[i]);
  }

  return 0;
}

int main() {

  printf("배열 개수 : ");
  int n;
  scanf("%d", &n);
  int *a;
  a = calloc(n, sizeof(int));

  int *idx;
  idx = calloc(n, sizeof(int));

  printf("배열 값 입력\n");
  for(int i=0; i<n; i++) {
    printf("%d : ", i);
    scanf("%d", &a[i]);
  }

  printf("찾으려는 값 입력 : ");
  int key;
  scanf("%d", &key);

  search_idx(a, n, key, idx);
  
  free(a);
  free(idx);
  
}
