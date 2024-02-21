//날짜를 나타내는 구조체

#include <stdio.h>
#define VMAX 21

typedef struct {
  int y;
  int m;
  int d;
} Date;

//y년 m월 d일을 나타내는 구조체 반환하는 함수
Date DateOf(int y, int m, int d) {
  printf("%d년 %d월 %d일 \n", y, m, d);
};

//날짜 x의 n일 뒤의 날짜 반환
//조건 1. d가 28/29/30/31을 넘길 때
//조건 2. m이 12을 넘길 떄
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

//날짜 x의 n일 앞의 날짜 반환
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

//혼자 짠 코드
#include <stdio.h>

typedef struct {
  int y;
  int m;
  int d;
} Date;

Date Dateof(int y, int m, int d) {
  printf("%d년 %d월 %d일\n", y, m, d);
}

Date After(Date x, int n) {
  int day = x.d;
  day += n;
  if(day >= 29) {
    if(x.m == 2) {
      day -= 29;
    }
    else if(day >= 31) {
      if(x.m == 4 || x.m == 6 || x.m == 9 || x.m == 11) {
        day -= 30;
      }
      else 
        day -= 31;
    }
    x.m += 1;
  }

  if(x.m > 12) {
    x.y += 1;
    x.m = 1;
  }

  printf("%d일 뒤 날짜는 : %d년 %d월 %d일\n", n, x.y, x.m, day);
}

Date Before(Date x, int n) {
  int day = x.d;
  day -= n;

  if(day <= 0) {
    x.m -= 1;
    if(x.m == 2) {
      day += 28;
    }
    else if(x.m == 4 || x.m == 6 || x.m == 9 || x.m == 11) {
      day += 30;
    }
    else {
      day += 31;
    }
  }

  if(x.m < 0) {
    x.y -= 1;
    x.m = 12;
  }

  printf("%d일 전 날짜는 : %d년 %d월 %d일\n", n, x.y, x.m, day);
}

int main() {

  int after, before, day;
  
  Date d[] = {
  {2017,5,25},
  {2023,7,11},
  {2002,5,31},
  {1986,2,5},
  {1999, 12, 31},
  {2023,7,2}
  };

  int size = sizeof(d)/sizeof(d[0]);
  
  for(int i=0; i<size; i++)
    Dateof(d[i].y, d[i].m, d[i].d);

  printf("몇일 뒤 날짜 알기 : ");
  scanf("%d", &after);
  printf("몇번째 날 ? : ");
  scanf("%d", &day);
  After(d[day-1], after);

  printf("몇일 전 날짜 알기 : ");
  scanf("%d", &before);
  printf("몇번째 날 ? : ");
  scanf("%d", &day);
  Before(d[day-1], before);
}
