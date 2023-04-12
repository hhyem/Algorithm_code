//배열 a의 모든 요소의 최대공약수를 구하는 함수 작성하기 

#include <stdio.h>
#include <stdlib.h>

int gcd_array(const int a[], int n) {

  int min = a[0]; //최소값 
  for(int i=0; i<n; i++) {
    if(min > a[i])
      min = a[i];
  }

  while(min > 0) { //최소값보다 작아지면 break 
    for(int i=0; i<n; i++) {
      if(a[i] % min == 0) 
        return min;
      else 
        min-=1;
    }   
  }

  return min;


  return 0;
}

int main(void) {
  int num, *a;
  puts("배열 요소의 최대공약수를 구합니다. ");
  printf("배열 개수를 입력하세요 : ");
  scanf("%d", &num);
  a = (int*)malloc(num * sizeof(int));
  
  printf("배열 요소를 입력하세요 : \n");
  for(int i=0; i<num; i++) {
    scanf("%d", &a[i]);
  }
  printf("최대공약수는 %d입니다.\n", gcd_array(a, num));

  free(a);
  
  return 0;
}
