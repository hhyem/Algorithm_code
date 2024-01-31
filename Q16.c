#include <stdio.h>

void triangleLB (int n) { //왼쪽 아래가 직각인 이등변 삼각형 
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void triangleLU(int n) {  //왼쪽 위가 직각인 이등변 삼각형 
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(i+j<=n+1)
                printf("*");
        }
        printf("\n");
    }
}

void triangleRU(int n) {  //오른쪾 위가 직각인 이등변 삼각형 
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(i<=j) 
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void triangleRB(int n) {  //오른쪽 아래가 직각인 이등변 삼각형
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(i+j<n+1)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("\n");
    triangleLB(n);
    printf("\n");
    triangleLU(n);
    printf("\n");
    triangleRU(n);
    printf("\n");
    triangleRB(n);
}


//나중에 스스로 한 거
#include <stdio.h>

void triangleLB(int n) {
  for(int i=0; i<n; i++) {
    for(int j=0; j<=i; j++)
      printf("*");
    printf("\n");
  }
}

void triangleLU(int n) {
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      if(i + j > n-1) 
        break;
      else
        printf("*");
    }
    printf("\n");
  }
}

void triangleRU(int n) {
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      if(j < i)
        printf(" ");
      else
        printf("*");
    }
    printf("\n");
  }
}

void triangleRB(int n) {
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      if(i+j < n-1)
        printf(" ");
      else
        printf("*");
    }
    printf("\n");
  }
}

int main(void) {
  int n;
  printf("왼쪽 아래가 직각인 이등변 삼각형을 출력합니다.\n");
  printf("높이 : ");
  scanf("%d", &n);
  triangleLB(n);

  printf("왼쪽 위가 직각인 이등변 삼각형을 출력합니다.\n");
  printf("높이 : ");
  scanf("%d", &n);
  triangleLU(n);

  printf("오른쪽 위가 직각인 이등변 삼각형을 출력합니다.\n");
  printf("높이 : ");
  scanf("%d", &n);
  triangleRU(n);

  printf("오른쪽 아래가 직각인 이등변 삼각형을 출력합니다.\n");
  printf("높이 : ");
  scanf("%d", &n);
  triangleRB(n);
    
  
  return 0;
}
