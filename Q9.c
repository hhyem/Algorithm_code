//정수 a,b를 포함하여 그 사이의 모든 정수의 합을 구하는 함수 작성하기

#include <stdio.h>

int sumof(int a, int b) {
    int sum = 0;
    for(int i=a; i<=b; i++) {
        sum += i;
    }

    return sum;
}

int main() {
    int a, b, sum = 0;
    printf("1부터 n까지의 합을 구합니다.\n");
    printf("a 값 : ");
    scanf("%d", &a);
    printf("b 값 : ");
    scanf("%d", &b);

    printf("1부터 n까지의 합 : %d\n", sumof(a, b));

    return 0;
}
