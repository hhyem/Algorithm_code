#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0);

//배열 a의 모든 요소의 순서 뒤섞는 함수 
void shuffle(int a[], int n) {
  int x;
  srand(time(NULL));
  for(int i=0; i<n-1; i++) {
    x = rand() % (n - i) + i;
    swap(int, a[i], a[x]);
    printf("%d ", a[i]);
  }
}

int main() {
  int a[] = {1,2,3,4,5,6,7,8,9};
  int size = sizeof(a) / sizeof(int);
  shuffle(a, size);
}
