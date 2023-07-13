#include <stdio.h>

int factorial(int n) {
  int Fact = 1;

  if(n>0) {
    while(n>0) {
      Fact *= n;
      n-=1;
    }
  } else
    Fact = 1;

  return Fact;
}

int main() {
  int n, Fact;
  scanf("%d", &n);

  Fact = factorial(n);

  printf("%d\n", Fact);

  return 0;
}
