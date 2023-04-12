  //recur2 함수를 보고 하향식 분석과 상향식 분석 수행하기 
  
  #include <stdio.h>
  
  void cur2(int n) { //하향식 : 4 3 2 1 
    if(n > 0) {
      printf("%d\n", n);
      cur2(n-1);
      cur2(n-2);
    }
  }
  
  void recur2(int n) {  //상향식 : 1 2 3 4 
    if(n > 0) {
      recur2(n-1);
      printf("%d\n", n);
      recur2(n-2);
    }
  }
  
  int main(void) {
    int x; 
    printf("정수를 입력하세요 : ");
    scanf("%d", &x);
    recur2(x);
    printf("----------------\n");
    cur2(x);
  
    return 0;
  }
