//아래를 향한 n단의 숫자 피라미드를 출력하는 함수 
//i행에 출력하는 숫자 : 1 % 10
//1111111
// 22222
//  333
//   4

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

//직접 짠 코드
#include <stdio.h>

void nrpira(int n) {
  int t = (n-1) * 2 + 1; //한 줄에 출력할 숫자 개수 
  int nt = 0, index, j = 1;
  
  for(int i=n; i>=1; i--) {
    index = (i-1) * 2 + 1; //공백 개수 
    nt = (t-index) / 2;       //별 개수 
    for(int q=0; q<nt; q++)
      printf(" ");
    for(int z=0; z<index; z++)
      printf("%d", j);
    j+=1;
    printf("\n");
  }
}

int main(void) {

  int n;
  scanf("%d", &n);

  nrpira(n);
  
}

//내가 짠 코드
#include <stdio.h>

void nspira(int n) {
  int t = 1;
  int p = 0; 
  for(int i=n; i>=1; i--) {
    p = t % 10;
    for(int j=n-i; j>0; j--)
      printf(" ");
    for(int k=(i-1) * 2 + 1; k>0; k--) 
      printf("%d", p);
    printf("\n");
    t +=1;
  }
}

int main(void) {
  int n;
  printf("높이 : ");
  scanf("%d", &n);
  printf("\n");
  nspira(n);
  
  return 0;
}
