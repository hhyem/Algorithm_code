#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maxof(const int a[], int n) {
	int max = a[0];
	for(int i=0; i<n; i++) {
		if(max < a[i]) max = a[i];
	}
	return max;
}

int main() {					//사람 수, 키 난수로 생성하기 
	srand(time(NULL));
	int *height;
	int number;
	printf("사람 수 : ");
	number = 5 + rand() % 15;	//사람 수 : 5~20
	printf("%d\n", number);

	height = calloc(number, sizeof(int));
	printf("%d 사람의 키를 입력하세요 \n", number);
	for(int i=0; i<number; i++) {
		printf("height[%d] : ", i);
		height[i] = rand();
		printf("%d\n", height[i]);
	}
	printf("키의 최대값은 %d 입니다. \n", maxof(height, number));
	free(height);

	return 0;
}
