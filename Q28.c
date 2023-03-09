#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void shuffle(int a[], int n) {
  int ran;
  int tmp;
  for(int i=0; i<n/2; i++) {
    srand(time(NULL));
    ran = 0 + rand() % n; //0부터 n까지 
    tmp = a[ran];
    a[ran] = a[i];
    a[i] = tmp;
  }
  
}

int main() {
  int *a;
  int n;

  printf("입력받을 요소 개수 : ");
  scanf("%d", &n);

  a = calloc(n, sizeof(int));

  printf("요소 값 입력 \n");
  for(int i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }
  shuffle(a, n);

  printf("뒤섞인 요소 출력 \n");
  for(int i=0; i<n; i++) 
    printf("%d ", a[i]);
  
  free(a);
}
