//사용자가 입력하는 학생들의 성적을 형식화된 입출력을 사용하여 텍스트 파일에 저장한다.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int number;
    char name[100];
    double score;
    char ch;
    FILE *fp;
    
    fp = fopen("score.txt","w");
    if(fp == NULL) {
    	printf("성적 파일 scores.txt를 열 수 없습니다.\n");
        exit(0);
	  }
    
    do {
        printf("학번 : ");
        scanf("%d", &number);
        printf("이름 : ");
        scanf("%s", name);
        printf("성적 : ");
        scanf("%f", &score);
        
        fprintf(fp, "%d %s %f\n", number, name, score);
        printf("데이터 추가 계속 ? (y/n) : ");
        ch = getche();
    } while(ch!='n');
    
    fclose(fp);
    
    return 0;
}
