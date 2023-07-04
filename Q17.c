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


//아래는 직접 짠 코드
#include <stdio.h>

void spira(int n) {
  int t = (n-1) * 2 + 1;
  int nt = 0, index;
  
  for(int i=1; i<=n; i++) {
    nt = (i-1) * 2 + 1; //별 개수 
    index = (t-nt) / 2; //공백 개수 
    for(int z=0; z<index; z++)
      printf(" ");
    for(int q=0; q<nt; q++)
      printf("*");
    printf("\n");
  }
}

int main(void) {

  int n;
  scanf("%d", &n);

  spira(n);
  
}
