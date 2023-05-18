//포인터 x, y가 가리키는 문자열 내용 모두 바꾸어 넣기 
#include <stdio.h>

void swap_str(char *x, char *y)
{
	char *temp;
	while (*x && *y) {					/* 짧은 문자열의 끝까지 문자열을 교환 */
		char t = *x; *x++ = *y; *y++ = t;
	}
	if (*x) {							/* x가 더 긴 문자열이라면 */
		temp = x;
		while (*x) { *y++ = *x++; }		/* x의 나머지를 y로 복사 */
		*temp = *y = '\0';
	}
	else if (*y) {						/* y가 더 긴 문자열이라면 */
		temp = y;
		while (*y) { *x++ = *y++; }		/* y의 나머지를 x로 복사 */
		*temp = *x = '\0';
	}
	else {
		*x = *y = '\0';
	}
}

int main(void) {
	char s1[128], s2[128];

	printf("문자열 S1 :");	scanf("%s", s1);
	printf("문자열 S2 :");	scanf("%s", s2);

  swap_str(&s1, &s2);

  puts("\n포인터 s1과 s2의 값을 서로 교환했습니다.\n");

  printf("포인터 s1은 \"%s\"를 가리킵니다.\n", s1);
  printf("포인터 s2은 \"%s\"를 가리킵니다.\n", s2);
}
