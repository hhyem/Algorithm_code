//가우스 덧셈으로 1부터 n까지의 합 구하기
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("1부터 n까지의 합을 구합니다.\n");
    printf("n 값 : ");
    scanf("%d", &n);

    sum = (1 + n) * n/2;

    printf("1부터 n까지의 합 : %d\n", sum);

    return 0;
}
