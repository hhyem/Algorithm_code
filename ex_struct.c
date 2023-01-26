//구조체 예제
#include <stdio.h>

struct student {
    int number;
    char name[10];
    double grade;
};

int main() {
    struct student s;
    
    s.number = 34232;
    strcpy(s.name, "홍길동");
    s.grade = 4.3;
    
    printf("학번 : %d\n", s.number);
    printf("이름 : %s\n", s.name);
    printf("학점 : %f\n", s.grade);
    return 0;
}
 
