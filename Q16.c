#include <stdio.h>

void triangleLB(int n) {
    for(int i=0; i<=n; i++) {
        for(int j=0; j<i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

main() {
    int n;
    printf("숫자를 입력하세요 : ");
    scanf("%d", &n);
    triangleLB(n);
}
