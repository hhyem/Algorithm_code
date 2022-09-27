#include <stdio.h>

void nspira(int n) {
    int i, j;
	for (i = 1; i <= n; i++) {							/* i 행 (i = 1, 2, ..., n) */
		for (j = 1; j <= i - 1; j++)					/* i-1 개의 ' '을 출력 */
			putchar(' ');
		for (j = 1; j <= (n - i) * 2 + 1; j++)			/* (n-i) * 2 + 1개의 숫자를 출력 */
			printf("%d", i % 10);
		putchar('\n');
	}
}

int main() {
    int n;
    printf("숫자를 입력해주세요: ");
    scanf("%d", &n);
    nspira(n);
}
