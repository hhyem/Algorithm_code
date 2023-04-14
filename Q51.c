//숫자가 아닌 문자열로 기둥 이름 출력하기 
#include <stdio.h>

//원반[1] ~ 원반[no]를 x 기둥에서 y 기둥으로 옮기기
void move(int no, int x, int y) {
  char c[] = {'A', 'B', 'C'};
  
  if(no > 1)
    move(no -1, x, 6-x-y); //그룹을 시작 > 중간 기둥으로
  printf("원반[%d]를(을) %c 기둥에서 %c 기둥으로 옮김\n", no, c[x-1], c[y-1]);  
  if(no > 1)
    move(no-1, 6-x-y, y); //그룹을 중간 > 목표 기둥으로
}

int main(void) {
  int n; //원반 개수
  printf("하노이 탑 \n원반 개수 : ");
  scanf("%d", &n);
  move(n, 1, 3);

  return 0;
}
