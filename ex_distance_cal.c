#include <stdio.h>
#include <math.h>

struct point {
  int x; 
  int y;
};

int main(void) {
  struct point p1;
  struct point p2;
  double re;

  printf("점의 좌표를 입력하시오 (x, y) : ");
  scanf("%d %d", &p1.x, &p1.y);
  printf("점의 좌표를 입력하시오 (x, y) : ");
  scanf("%d %d", &p2.x, &p2.y);

  double x = p1.x - p2.x;
  double y = p1.y - p2.y;
  
  re = sqrt(x *x + y * y);

  printf("두 점 사이의 거리는 %f입니다.", re);
  
  return 0;
  
}
