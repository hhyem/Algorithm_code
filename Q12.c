//위쪽과 왼쪽에 곱하는 수가 있는 곱셈표 출력
// | 1  2  3  4  5  6  7  8  9
//----------------------------
//1| 1  2  3  4  5  6  7  8  9
//2| 2  4  6  8  10 12 14 16 18
//3| 3  6  9  12 15 18 21 24 27

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
