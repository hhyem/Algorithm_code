#include <stdio.h>

void print_array(int values[], int n) {
  printf("[ ");
  for(int i=0; i<n; i++) 
    printf("%d ", values[i]);
  printf("] \n");
}

double get_array_avg(int values[], int n) {
  int re = 0;
  for(int i=0; i<n; i++) 
    re += values[i]; 
  re /= n;
  printf("배열 원소들의 평균 = %d\n", re);
  
  return n;
}

int main() {
  
  int sum[] = {10,20,30,40,50};
  print_array(sum, 5);
  get_array_avg(sum, 5);
  
  return 0;
}
