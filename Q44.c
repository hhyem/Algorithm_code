#include <stdio.h>
#include "IntQueue.h"

int main(void) {
	IntQueue que;

	if (Initialize(&que, 64) == -1) {
		puts("큐 생성 실패");
		return -1;
	}

	while (1) {
		int m, x, idx;
		printf("현재 데이터 수 : %d / %d\n", Size(&que), Capacity(&que));
		printf("(1) 인큐 (2) 디큐 (3) 피크 (4) 출력 (5) 검색 (0) 종료 : ");
		scanf("%d", &m);

		if (m == 0) break;
		switch (m) {
		case 1:
			printf("데이터 : "); scanf("%d", &x);
			if (Enqueue(&que, x) == -1)
				puts("\a오류 : 인큐 실패 ");
			break;
			
		case 2:
			if (Deque(&que, &x) == -1)
				puts("\a오류 : 디큐 실패 ");
			else
				printf("피크한 데이터 : %d\n", x);
			break;

		case 3:
			if (Peek(&que, &x) == -1)
				puts("\a 오류 : 피크 실패");
			else
				printf("피크한 데이터 : %d\n", x);
			break;

		case 4:
			Print(&que);
			break;

		case 5:
			printf("검색할 데이터 : ");
			scanf("%d", &x);
			if ((idx = Search2(&que, x)) == -1)
				puts("\a오류 : 검색 실패");
			else {
				printf("데이터는 인덱스 %d 위치에 있습니다.\n", idx);
				printf("큐의 맨 앞의 요소에서 %d 만큼 뒤에 있습니다.\n", Search2(&que, x));
			}
			break;
		}
	}
	Terminate(&que);
	return 0;
}
