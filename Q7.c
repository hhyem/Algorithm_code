//n이 7이면 '1+2+3+4+5+6+7=28'로 출력하는 프로그램 작성하기

#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("1부터 n까지의 합을 구합니다.\n");
    printf("n 값 : ");
    scanf("%d", &n);

    for(int i=0; i<=n; i++) {
        sum += i;
        if (i < 7) {
            printf("%d + ", i + 1);
        }
        if (i == 7) {
            break;
        }
    }
    printf(" = %d", sum);
    //printf("1부터 %d까지의 합은 %d입니다. \n", n, sum);

    return 0;
}
