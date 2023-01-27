#include <stdio.h>
#define PI 3.1415
#define CIRECLE_AREA(r) (PI*r*r)
#define DEBUG

int main(void) {
    double radius, area;

    #ifdef DEBUG
    	printf("디버깅 모드입니다.\n");

	printf("원의 반지름 : ");
    scanf("%lf", &radius);
    area = CIRCLE_AREA(radius);
    printf("원이 면적 = %.2f", area);
    
    return 0;
}
