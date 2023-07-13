#include <stdio.h>

int main() {
  int n, Fact = 1;  
  scanf("%d", &n);

  while(n > 0) {
    Fact *= n;
    n-=1;
  }

  printf("%d", Fact);
}
