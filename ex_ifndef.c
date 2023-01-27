//student.h 파일
#ifndef STUDENT_H
#define STUDENT_H

struct STUDENT {
    int number;
    char name[10];
};

#endif

//student.c 파일
#include "student.h"
#include "student.h" // 실수로 2번 포함시켰다! 

int main(void) {
	return 0;
}
