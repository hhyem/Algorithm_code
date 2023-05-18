//strlen 함수 사용
#include <stdio.h>
#include <string.h>

int str_len_1(const char *s) {
  int len = 0;
  while(s[len])
    len++;
  return len;
}

int str_len_2(const char *s) {
  int len = 0;
  while(*s++)
    len++;
  return len;
}

int str_len_3(const char *s) {
  const char *p = s;
  while(*s) 
    s++;
  return s - p;
}

int main(void) {
  char str[256];
  printf("문자열 : ");
  scanf("%s", &str);

  printf("이 문자열의 길이는 %d입니다.\n", str_len_1(str));
  printf("이 문자열의 길이는 %d입니다.\n", str_len_2(str));
  printf("이 문자열의 길이는 %d입니다.\n", str_len_3(str));
  printf("이 문자열의 길이는 %d입니다.\n", strlen(str));
}
