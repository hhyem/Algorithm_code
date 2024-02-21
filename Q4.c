//세 값의 대소 관계 13종류의 모든 조합에 대해 중앙값을 구하여 출력하는 프로그램 

#include <stdio.h>

int med3(int a, int b, int c) {
	if (a>=b)
		if (b>=c)
			return b;
		else if(a<=c) 
			return a;
		else	
			return c;
	else if(a>c)
		return a;
	else if(b>c)
		return c;
	else
		return b;
}

int main() {

	int a, b, c;

	printf("세 정수의 중앙값 구하기 \n");

	printf("med3(%d, %d, %d) = %d\n", 3, 2, 1, med3(3, 2, 1)); /* [A] a > b > c */
	printf("med3(%d, %d, %d) = %d\n", 3, 2, 2, med3(3, 2, 2)); /* [B] a > b = c */
	printf("med3(%d, %d, %d) = %d\n", 3, 1, 2, med3(3, 1, 2)); /* [C] a > c > b */
	printf("med3(%d, %d, %d) = %d\n", 3, 2, 3, med3(3, 2, 3)); /* [D] a = c > b */
	printf("med3(%d, %d, %d) = %d\n", 2, 1, 3, med3(2, 1, 3)); /* [E] c > a > b */
	printf("med3(%d, %d, %d) = %d\n", 3, 3, 2, med3(3, 3, 2)); /* [F] a = b > c */
	printf("med3(%d, %d, %d) = %d\n", 3, 3, 3, med3(3, 3, 3)); /* [G] a = b = c */
	printf("med3(%d, %d, %d) = %d\n", 2, 2, 3, med3(2, 2, 3)); /* [H] c > a = b */
	printf("med3(%d, %d, %d) = %d\n", 2, 3, 1, med3(2, 3, 1)); /* [I] b > a > c */
	printf("med3(%d, %d, %d) = %d\n", 2, 3, 2, med3(2, 3, 2)); /* [J] b > a = c */
	printf("med3(%d, %d, %d) = %d\n", 1, 3, 2, med3(1, 3, 2)); /* [K] b > c > a */
	printf("med3(%d, %d, %d) = %d\n", 2, 3, 3, med3(2, 3, 3)); /* [L] b = c > a */
	printf("med3(%d, %d, %d) = %d\n", 1, 2, 3, med3(1, 2, 3)); /* [M] c > b > a */


	printf("중앙값은 %d입니다. \n", med3(a,b,c));	

}
