//한번 놓은 곳은 놓지 못하도록 하기
//컴퓨터가 다음 수를 결정하도록 바꿔보기 

#include <stdio.h>
#include <stdlib.h>

int main() {
  char board[3][3];
  int x, y;
  int com_x, com_y;

  srand(time(NULL));

  for(int x = 0; x<3; x++)
    for(int y = 0; y<3; y++) 
      board[x][y] = ' ';

  for(int k=0; k<9; k++) {
    if(k%2 == 0) {  //사람 입력 X
      while(1) {
        printf("(x, y) 좌표 : ");
        scanf("%d %d", &x, &y);
        if(board[x][y] == ' ') {
          board[x][y] = 'X';
          break;
        }
        else {
          printf("다른 좌표로 입력하세요\n");
        }
      }
    } else {  //컴퓨터 입력 O
      com_x = rand()%2;
      com_y = rand()%2;
      if(board[com_x][com_y] == ' ') {
        printf("컴퓨터 좌표 : %d %d\n", com_x, com_y);
        board[com_x][com_y] = 'O';
      }
      else {
        com_x = rand()%2;
        com_y = rand()%2;
      }
    }
    
    for(int i=0; i<3; i++) {
      printf("---|---|---|\n");
      printf(" %c | %c | %c\n", board[i][0], board[i][1], board[i][2]);
    }
    printf("---|---|---|\n");
  }
  
  return 0;
}
