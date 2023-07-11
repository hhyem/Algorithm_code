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

//내가 짠 코드 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0);

void shuffle(int a[], int n) {
  srand(time(NULL));
  int ran1 = 0, ran2 = 0;

  for(int i=0; i<n/2; i++) {
    ran1 = 0 + rand() % n;
    ran2 = 0 + rand() % n;

    swap(int, a[ran1], a[ran2]);    
    
  }

  for(int i=0; i<n; i++) {
    printf("%d ", a[i]);
  }

}

int main() {
  int n, *a;
  printf("요소 개수 : ");
  scanf("%d", &n);

  a = calloc(n, sizeof(int));

  for(int i=0; i<n; i++) {
    printf("%d번째 요소 : ", i+1);
    scanf("%d", &a[i]);
  }

  shuffle(a, n);
}
