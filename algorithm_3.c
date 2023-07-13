#include <stdio.h>

int factorial(int n) {
  int Fact = 1;

  if(n>0) {
    Fact = n * factorial(n-1) 
  }

  return Fact;
}

int main() {
  int n, Fact;
  scanf("%d", &n);

  Fact = factorial(n);

  printf("%d", Fact);

}
