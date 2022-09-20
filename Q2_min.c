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