#include <stdio.h>

void triangleLB(int n) {  //왼쪽 아래가 직각인 이등변 삼각형
    for(int i=0; i<=n; i++) {
        for(int j=0; j<i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void triangleLU(int n) {  //왼쪽 위가 직각인 이등변 삼각형
    for(int i=0; i<n; i++) {
        for(int j=n; j>i; j--) {
            printf("*");
        }
        printf("\n");
    }
}

void triangleRU(int n) {  //오른쪽 위가 직각인 이등변 삼각형 
    int i, j;
    for (i = 1; i <= n; i++) {					/* i 행 (i = 1, 2, ..., n) */
		for (j = 1; j <= i - 1; j++)			/* i - 1 개의 ' '을 출력 */
			putchar(' ');
		for (j = 1; j <= n - i + 1; j++)		/* n - i + 1개의 '*'를 출력 */
			putchar('*');
		putchar('\n'); 
	}
}

void triangleRB(int n) {  //오른쪽 아래가 직각인 이등변 삼각형 
    int i, j;
    for (i = 1; i <= n; i++) {					
		for(j = n; j>i; j--) 			
			putchar(' ');
		for (j = 1; j <= i; j++)		
			putchar('*');
		putchar('\n'); 
	}
}

int main() {
    int n;
    printf("숫자를 입력하세요 : ");
    scanf("%d", &n);
    triangleLB(n);
    printf("\n");
    triangleLU(n);
    printf("\n");
    triangleRU(n);
    printf("\n");
    triangleRB(n);
}
