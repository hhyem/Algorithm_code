#include <stdio.h>
#define SIZE 16

int main() {
  int week[SIZE];
  float sum = 0, cnt = 0;

  for(int i=0; i<SIZE; i++) {
    printf("%d번째 강의에 출석하셨나요(출석은 1, 결석은 0) : ", i+1);
    scanf("%d", &week[i]);
    if(week[i] == 0) {
      cnt += 1;
    }
  }

  sum = cnt/SIZE;

  if(sum <= 30)
    printf("수업일수 부족입니다. (%f)", sum*100.0);
  
  return 0;
}
