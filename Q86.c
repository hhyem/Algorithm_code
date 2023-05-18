/* Q7 strncmp 함수 수정 */
#include <stdio.h>
#include <string.h>

//1, 0, -1만 출력
int str_ncmp_1(const char *s1, const char *s2, size_t n) {
  int temp = 0;
  for(int i=0; i<n; i++) {
    if(s1[i] > s2[i])
      temp = 1;
    else if(s1[i] < s2[i])
      temp = -1;
    else if(s1[i] == s2[i])
      temp = 0;
  }
  return temp;
}

//교재 
int str_ncmp_2(const char *s1, const char *s2, size_t n) {
	while (n && *s1 && *s2) {
		if (*s1 != *s2)			
			return (unsigned char)*s1 - (unsigned char)*s2;
		s1++;
		s2++;
		n--;
	}
	if (!n)  return 0;
	if (*s1) return 1;
	return -1;
}

int main(void) {
	char st[128];

	puts("\"STRING\"의 처음 세 문자와 비교합니다.");
	puts("\"XXXX\"이면 종료합니다.");

	while (1) {
		printf("문자열：");
		scanf("%s", st);

		if (str_ncmp_1("XXXX", st, 3) == 0)
			break;
		printf("str_ncmp(\"STRING\", st, 3) = %d\n", str_ncmp_1("STRING", st, 3));
	}

	return 0;
}
