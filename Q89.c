#include <stdio.h>
#include <string.h>

int bf_matchr(const char txt[], const char pat[]) {
	int txt_len = strlen(txt);		
	int pat_len = strlen(pat);		
	int pt = txt_len - pat_len;		
	int pp;							

	while (pt >= 0) {
		pp = 0;
		while (txt[pt] == pat[pp]) {
			if (pp == pat_len - 1)
				return pt - pp;
			pp++;
			pt++;
		}
		pt = pt - pp - 1;
	}

	return -1;
}

int main(void) {
  int idx;
  char s1[256];
  char s2[256];
  puts("부르트-포스법");
  printf("텍스트 : ");
  scanf("%s", s1);
  printf("패턴 : ");
  scanf("%s", s2);
  idx = bf_matchr(s1, s2);
  if(idx == -1)
    puts("텍스트에 패턴이 없습니다.");
  else 
    printf("%d번째 문자부터 match합니다.\n", idx + 1);

  return 0;
}
