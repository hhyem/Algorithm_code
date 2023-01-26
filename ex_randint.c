#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void line(HDC hdc, int x1, int y1, int x2, int y2) {
	MoveToEx(hdc, x1, y1, NULL);
	LineTo(hdc, x2, y2);
}

int randint(int a, int b) {
	return a + rand()%(b-a);
}

int main(void) {
	int i;
	Hdc hdc = GetWindowDc(GetForegroundWindow())
    
	for(i = 0; i<30; i++) {
		int x1 = randint(0, 300);
		int y1 = randint(0, 300);
		int x2 = randint(0, 300);
		int y2 = randint(0, 300);
		line(hdc, x1, y1, x2, y2);
		Sleep(100);
	}
}
