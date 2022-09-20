#include <stdio.h>

int min4(int a, int b, int c, int d) {
	
	if(a<b && a<c && a<d) {
		return a;
	} else if (b<a && b<c && b<d) {
		return b;
	} else if (c<a && c<b && c<d) {
		return c;
	} else 
	return d;

}

int main() {

	printf("min4(%d %d %d %d) = %d", 1, 7, 100, 15, min4(1,7,100,15));

}