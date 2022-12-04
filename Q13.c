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
  
///* Q13 다양한 조건의 날짜 계산  */
//#include <stdio.h>
//
//typedef struct {
//	int y; /* 년  */
//	int m; /* 월 (1 ~ 12) */
//	int d; /* 일 (1 ~ 31) */
//} Date;
//
//Date Before(Date x, int n);
//Date After(Date x, int n);
//
///*--- 각 달의 일수 ---*/
//static int mdays[2][13] = {
//	{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },			/* 평년 */
//	{ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }			/* 윤년 */
//};
//
///*--- year년이 윤년인지 검사하는 함수 ---*/
//int isleap(int year)
//{
//	return year % 4 == 0 && year % 100!= 0 || year % 400 == 0;
//}
//
///*--- y년 m월 d일을 나타내는 구조체를 반환하는 함수 DateOf ---*/
//Date DateOf(int y, int m, int d)
//{
//	Date temp;
//
//	temp.y = y;
//	temp.m = m;
//	temp.d = d;
//
//	return temp;
//}
//
///*--- 날짜 x의 n 일 뒤의 날짜를 반환 ---*/
//Date After(Date x, int n)
//{
//	if (n < 0)
//		return Before(x, -n);
//
//	x.d += n;
//
//	while (x.d > mdays[isleap(x.y)][x.m - 1]) {
//		x.d -= mdays[isleap(x.y)][x.m - 1];
//		if (++x.m > 12) {
//			x.y++;
//			x.m = 1;
//		}
//	}
//	return x;
//}
//
///*--- 날짜 x의 n일 앞의 날짜를 반환 ---*/
//Date Before(Date x, int n)
//{
//	if (n < 0)
//		return After(x, -n);
//
//	x.d -= n;
//
//	while (x.d < 1) {
//		if (--x.m < 1) {
//			x.y--;
//			x.m = 12;
//		}
//		x.d += mdays[isleap(x.y)][x.m - 1];
//	}
//
//	return x;
//}
//
///*--- 날짜를 출력합니다. ---*/
//int Print(Date x)
//{
//	int y = x.y;
//	int m = x.m;
//	int d = x.d;
//
//	char * ws[] = { "일", "월" "화" "수", "목", "금", "토" };
//	if (m == 1 || m == 2) {
//		y--;
//		m += 12;
//	}
//	printf("%04d년 %02d월 %02d일(%s)", x.y, x.m, x.d, ws[(y + y / 4 - y / 100 + y / 400 + (13 * m + 8) / 5 + d) % 7]);
//}
//
//int main(void)
//{
//	int n;
//	int y, m, d;
//	Date x;
//
//	printf("날짜를 입력하세요.\n");
//	printf("년 : "); scanf("%d", &y);
//	printf("월 : "); scanf("%d", &m);
//	printf("일 : "); scanf("%d", &d);
//
//	x = DateOf(y, m, d);
//
//	printf("며칠 앞 / 뒤의 날짜를 구할까요? : ");
//	scanf("%d", &n);
//
//	printf("%d 일 뒤의 날짜 : ", n); Print(After(x, n)); putchar('\n');
//	printf("%d 일 앞의 날짜 : ", n); Print(Before(x, n)); putchar('\n');
//
//	return 0;
//}
