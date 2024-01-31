#include <stdio.h>

int main() {

    printf("   |");
    for(int i=1; i<=9; i++) {
        printf("%3d", i);
    }

    printf("\n--+-------------------------------\n");

    for(int i=1; i<=9; i++) {
        printf("%d  |", i);
        for(int j=1; j<=9; j++) {
            printf("%2d ", i*j);
        }
        printf("\n");
    }

    return 0;
}


//2번째 버전
#include <stdio.h>

int main(void) {

  printf("  |  1");
  for(int i=2; i<=9; i++) {
    printf("%3d", i);
  }
  printf("\n--+-------------------------------\n");
  
  for(int i=1; i<=9; i++) {
    printf("%2d|", i);
    for(int j=1; j<=9; j++) {
      printf(" %2d", i * j);
    }
    printf("\n");
  }

  return 0;
}
