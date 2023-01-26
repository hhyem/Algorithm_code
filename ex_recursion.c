#include <windows.h>
#include <stdio.h>
HDC hdc;
void draw_circle(int x, int y, double radius) {
    // 화면에 원을 그린다.
    Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
    if (radius > 2.0) { // 반지름이 2.0 이상이면
        radius *= 0.75; // 반지름을 줄인다.
        draw_circle(x, y, radius); // 순환호출한다.
	}
}

int main(void) {
    hdc = GetWindowDC(GetForegroundWindow());
    draw_circle(300, 200, 200.0);
    return 0;
}
