#include <windows.h>
#include <stdlib.h>
#define SIZE 100

struct point {
    int x;
    int y;
};

int main(void) {
    struct point p[SIZE]; // 크기가 100인 point 구조체 배열 선언
    int i;
    
    for (int i = 0; i < SIZE; i++) { // 난수로 점들의 위치 저장
        p[i].x = rand() % 500;
        p[i].y = rand() % 500;
    }
    
    HDC hdc = GetWindowDC(GetForegroundWindow());
    for (int i = 0; i < SIZE; i++) { // 점은 작은 원으로 그린다
    	Ellipse(hdc, p[i].x, p[i].y, p[i].x + 10, p[i].y + 10);
    }
	return 0;
}
