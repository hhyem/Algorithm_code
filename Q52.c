#include <stdio.h>

//move 함수를 비재귀적으로 바꾸기 
void move(int no, int x, int y) {  //3 1 3
    
    Top:
    if(no > 0) {
        move(no-1, x, 6-x-y);
        printf("원반[%d]를(을) %d 기둥에서 %d 기둥으로 옮김 \n", no, x, y);
        no -= 1;
        x = 6-x-y;
        goto Top;
    }
    
    // if(no > 1)
    //     move(no-1, 6-x-y, y);
}

int main(void) {
    int n;
    printf("하노이의 탑\n원반 개수 : ");
    scanf("%d", &n);
    move(n, 1, 3);
    
    return 0;
}
