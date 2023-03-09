#include <stdio.h>
#define VMAX 21

typedef struct {
  int y;
  int m;
  int d;
} Date;

Date DateOf(int y, int m, int d) {
  printf("%d년 %d월 %d일 \n", y, m, d);
};

Date After(Date x, int n) {
  x.d += n;
  while(x.d > 27) {
    if(x.d > 29 && x.m == 2) {
      x.m += 1;
      x.d -= 29;
      if(x.d < 29)
        break;
    } else if((x.m == 1 || x.m == 3 || x.m == 5 || x.m == 7 || x.m == 8 || x.m == 10 || x.m == 12) && x.d > 32) {
      x.m += 1;
      x.d -= 32;
      if(x.m > 12) {
        x.y += 1;
        x.m = 1;
      }
      if(x.d < 31)
        break;
    } else if((x.m == 4 || x.m == 6 || x.m == 9 || x.m == 11) && x.d > 31) {
      x.m += 1;
      x.d -= 31;
      if(x.d < 30)
        break;
    }
  }

  printf("%d일 뒤의 날짜는 : %d년 %d월 %d일\n", n, x.y, x.m, x.d);
}

Date Before(Date x, int n) {
  x.d -= n;
  while(x.d < 0) {
    if(x.d < 0 && x.m == 2) {
      x.m -= 1;
      x.d += 29;
      if(x.d > 28)
        break;
    } else if ((x.m == 1 || x.m == 3 || x.m == 5 || x.m == 7 || x.m == 8 || x.m == 10 || x.m == 12) && x.d < 0) {
      x.m -= 1;
      x.d += 32;
      if(x.m < 1) {
        x.y -= 1;
        x.m = 12;
      }
      if(x.d > 31)
        break;
    } else if ((x.m == 4 || x.m == 6 || x.m == 9 || x.m == 11) && x.d < 0) {
      x.m -= 1;
      x.d += 31;
      if(x.d > 30)
        break;
    }
  }
  
  printf("%d일 전의 날짜는 : %d년 %d월 %d일\n", n, x.y, x.m, x.d);
}

int main(void) {
  Date d[] = {
    {2023, 5, 22},
    {2023, 4, 22},
    {2023, 3, 10},
    {2023, 12, 11}
  };
  int n;

  int data_size = sizeof(d) / sizeof(d[0]); //데이터 개수 

  printf("날짜 출력 \n");
  for(int i=0; i<data_size; i++)
    DateOf(d[i].y, d[i].m, d[i].d);

  printf("며칠 뒤의 날짜를 반환할까요? ");
  scanf("%d", &n);
  for(int i=0; i<data_size; i++)
    After(d[i], n);

  printf("며칠 전의 날짜를 반환할까요? ");
  scanf("%d", &n);
  for(int i=0; i<data_size; i++)
    Before(d[i], n);
  
}
