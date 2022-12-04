#include <stdio.h>
//윤년 제외 

typedef struct { 
  int y;
  int m;
  int d;
} Date;

Date dateOf(int y, int m, int d) {  //y년 m월 d일 나타내는 구조체 
  Date x;
  printf("%d년 %d월 %d일\n", y, m, d);
  return x;
}

Date After(Date x, int n) {  //날짜 x의 n일 뒤 날짜 반환
  x.d += n;
  int temp = x.d;

  if(x.m == 2 && x.d > 28) {
    int temp = x.d;
    x.d = temp - 28;
    x.m = 3;
  } else if((x.m == 4 || x.m == 6 || x.m == 9 || x.m == 11) && x.d > 30) {
    x.d = temp - 30;
    x.m += 1;
  }
  else if((x.m == 1 || x.m == 3 || x.m == 5 || x.m == 7 || x.m == 8 || x.m == 10 || x.m == 12) && x.d > 31) {  
    x.m += 1;
    x.d = temp - 31;
    if(x.m > 12) {
      x.y += 1;
      x.m = 1;
    }
  }
  printf("%d년 %d월 %d일\n", x.y, x.m, x.d);
  return x;
}

Date Before(Date x, int n) {  //날짜 x의 n일 앞의 날짜 반환 
  x.d -= n;
  int temp = x.d;
  
  if(x.m == 2 && x.d <= 0) { //뺏을 때 0도 포함
    x.m -= 1;
    x.d = temp + 29;  //0은 포함되지 않기 때문에 1을 더 더해준다.
  } else if((x.m == 4 || x.m == 6 || x.m == 9 || x.m == 11) && x.d <= 0) {
    x.m -= 1;
    x.d = temp + 31;  //0은 포함되지 않기 때문에 1을 더 더해준다.
  }
  else if((x.m == 1 || x.m == 3 || x.m == 5 || x.m == 7 || x.m == 8 || x.m == 10 || x.m == 12) && x.d <= 0) {  
    x.m -= 1;
    x.d = temp + 31;  //32일은 없기 때문에 여기서는 31을 더해준다. 
    if(x.m < 1) {
      x.y -= 1;
      x.m = 12;
    }
  }
  
  printf("%d년 %d월 %d일\n", x.y, x.m, x.d);
  return x;
}

int main() {
  Date x[] = {
    {2022,4,29},
    {2022,12,27},
    {2022,4,5},
    {2022,1,5}
  };

  int nx = sizeof(x) / sizeof(x[0]); //개수 
  for(int i=0; i<nx; i++) 
    dateOf(x[i].y, x[i].m, x[i].d);

  printf("각 날짜의 5일 뒤\n");
  for(int i=0; i<nx; i++) 
    After(x[i], 5);

  printf("각 날짜의 5일 전\n");
  for(int i=0; i<nx; i++) 
    Before(x[i], 5);
  
    return 0;
}
  
