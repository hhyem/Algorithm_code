//키를 난수로 생성한 후 최대값 구하기 
//사람 수도 난수로 구한다.

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int maxof(const int a[], int n) {
  int i;
  int max = a[0];
  for(i=1; i<n; i++) 
    if(a[i] > max) max = a[i];
  return max;
}

int main(void) {
  int i;
  int *height;
  int number;
  
  printf("사람 수 : ");
  srand(time(NULL));
  number = 5 + rand() % 16; //5 이상 20 이하 
  printf("%d\n", number);
  
  height = calloc(number, sizeof(int));

  for(i=0; i<number; i++) {
    height[i] = 100 + rand() % 90; //100~189의 난수 생성, 대입
    printf("height[%d] = %d\n", i, height[i]);
  }

  printf("최대값은 %d입니다. \n", maxof(height, number));
  free(height);

  return 0;
}
