#include <stdio.h>

//strrchr 함수와 같은 동작을 할 수 있게 함수 작성하기 
char *str_rchr(const char *s, int c) {
	const char *p = NULL;			

	c = (char)c;
	while (1) {
		if (*s == c)				
			p = s;
		if (*s == '\0')				
			break;
		s++;
	}
	return (char *)p;
}

int main(void) {
  char str[64]; //이 문자열에서 검색
  char tmp[64];
  int ch; //ch : 검색할 문자

  char *idx;

  printf("문자열 : ");
  scanf("%s", str);

  printf("검색할 문자 : ");
  scanf("%s", tmp); //문자열로 검색할 문자를 읽어 들인다.
  ch = tmp[0];      //첫번째 문자를 검색할 문자로 지정

  if((idx = str_rchr(str,ch)) == -1) //처음 나오는 문자 검색
    printf("문자 '%c'은(는) 문자열에 없습니다.\n", ch);
  else 
    printf("문자 '%c'(은(는) %d번째에 있습니다.\n", ch, (idx - str) + 1);

  return 0;
}
