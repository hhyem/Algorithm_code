//입력한 높이와 너비에 맞는 직사각형을 * 기호로 출력하는 프로그램

#include <stdio.h>

int main() {

    int a, b;
    printf("직사각형을 출력합니다.\n");
    printf("높이 : ");
    scanf("%d", &a);
    printf("너비 : ");
    scanf("%d", &b);

    for(int i=0; i<a; i++) {
        for(int j=0; j<b; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
