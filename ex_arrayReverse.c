#include <stdio.h>
#define SIZE 5

int main() {
  int n[SIZE];
  int *p = n;

  printf("5개의 정수를 입력하시오 : ");
  for(int i=0; i<SIZE; i++) 
    scanf("%d", &n[i]);

  printf("역순 : ");
  for(int i=SIZE-1; i>=0; i--) {
    printf("%d ", *(p + i));
  }
}
