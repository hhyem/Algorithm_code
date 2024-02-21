//n단의 피라미드를 출력하는 함수 
//i행에는 (i-1) * 2 + 1 개의 기호문자 *를 출력한다. 

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

//내가 짠 코드(어째 더 퇴화하는 듯한..모습이)
#include <stdio.h>

void spira(int n) {
  int s = (n-1) * 2 + 1; //최종 열 개수 (마지막 열)
  int t = (s-1) / 2; //공백 
  int star = 0; //* 출력할 개수 
  for(int i=1; i<=n; i++) {
    for(int j=0; j<1; j++) {
      for(int k=0; k<t; k++)
        printf(" ");
      star = ((i-1) * 2 + 1);
      for(int z=0; z<star; z++)
        printf("*");
      t-=1;
    }
    printf("\n");
  }
}

int main(void) {
  int n;
  printf("높이 : ");
  scanf("%d", &n);
  spira(n);
  
  return 0;
}
