#include <stdio.h>

int GCD(int x, int y) {
  int m = x % y;

  if(m == 0) {
    return x;
  } else {
    x = y;
    y = m;
    GCD(x, y);
  }
}

int main() {
  int A, B, TEMP, R;

  scanf("%d %d", &A, &B);

  if(A >= B) {
    R = GCD(A, B);
  } else {
    TEMP = A;
    A = B;
    B = TEMP;
  }

  printf("최대공약수 : %d\n", R);
}

//---------------------------
void swap(int *L, *R) {
  int temp;
  temp = *L;
  *L = *R;
  *R = temp;
}

int GCD(int x, int y) {
  for (;;) {
  int M = x % y;
  if(M == 0)
    break;
  x = y;
  y = m;
    }
  return Y;
}

void main() {
  int a, b, r;
  scanf("%d %d", &a, &b);
  
  if(a < b) swap(&a, &b);
  r = GCD(a, b);
  
  printf("최대공약수 : %d\n", r);
}
