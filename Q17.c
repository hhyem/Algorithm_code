#include <stdio.h>

void spira(int n) {
    int i, j;
	for (i = 1; i <= n; i++) {						/* i 행 (i = 1, 2, ..., n) */
		for (j = 1; j <= n - i; j++)				/* n-i 개의 ' '을 출력 */
			putchar(' ');
		for (j = 1; j <= (i - 1) * 2 + 1; j++)		/* (i-1)*2+1개의 '*'을 출력 */
			putchar('*');
		putchar('\n');
	}
}

int main() {
    int n;
    printf("숫자를 입력해주세요: ");
    scanf("%d", &n);
    spira(n);
}
