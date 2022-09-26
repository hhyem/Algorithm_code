#include <stdio.h>

int main() {
    int n, cnt = 1;
    printf("양의 정수를 입력하세요: ");
    scanf("%d", &n);

    while(n>10) {
      n /= 10;
      cnt++;
    }
    printf("그 수는 %d자리입니다.\n", cnt);

    return 0;
}
