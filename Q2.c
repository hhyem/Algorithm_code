//세 값의 최소값을 구하는 min3 함수 작성하기

#include <stdio.h>

int min3(int a, int b, int c) {
	
	if(a<b&& a<c) {
		return a;
	} else if (b<a && b<c) {
		return b;
	} else 
	return c;

}

int main() {

	printf("min3(%d %d %d) = %d", 5,8,6, min3(5,8,6));

}
