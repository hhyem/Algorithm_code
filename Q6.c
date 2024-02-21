//while문이 종료될 떄 변수 i 값이 n+1이 됨을 확인한다 (변수 i값 출력하기)

#include <stdio.h>

int main() {
    int i = 1, n, sum = 0;
    printf("1부터 n까지의 합을 구한다.\n");
    printf("n의 값: ");
    scanf("%d", &n);

    while(i<=n) {
        sum+=i;
        i++;
    }
    printf("i : %d\n", i);
    printf("1부터 %d까지의 합은 %d입니다. \n", n, sum);
}
