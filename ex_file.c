// 1. 원본 파일, 복사 파일 이름을 입력받는다.
// 2. 원본 파일 > 읽기 모드로 연다.
// 3. 복사 파일 > 쓰기 모드로 연다.
// 4. 원본 파일에서 한 글자씩 읽어서 (fgetc) 문자형 변수에 저장한 후 복사 파일에 쓴다.(fputc)
// 5. 4번을 원본 파일의 파일끝이 읽힐 때까지 반복한다.
// 6. 원본 파일을 닫는다.
// 7. 복사 파일을 닫는다.

#include <stdio.h>

int main(void) {
    char file_1[100];
    char file_2[100];
    FILE * fp1, fp2;
    char read_f;
    
    printf("원본 파일 이름 : ");
    scanf("%s", &file_1);
    printf("복사 파일 이름 : ");
    scanf("%s", &file_2);
    
    if((fp1 = fopen("file_1", "r")) = NULL) {
    	fprintf(stderr,"원본 파일 %s를 열 수 없습니다.\n");
        exit(1);
    }
    
    if((fp2 = fopen("file_2", "w")) == NULL) {
       	fprintf(stderr,"복사 파일 %s를 열 수 없습니다.\n");
        exit(1);
    }
    
    while((read_f = fgetc(fp1)) != EOF) 
        fputc(read_f, fp2);
    
    fclose(fp1);
    fclose(fp2);
    
    return 0;
}
