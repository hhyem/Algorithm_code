//int형 큐를 사용하는 프로그램에 임의의 데이터를 검색하는 함수 추가하기 
int Search2(const IntQueue *q, int x) {
	int i;

	for (i = 0; i < q->num; i++) {
		if (q->que[(i + q->front) % q->max] == x)
			return i;		/* 검색 성공 */
	}
	return -1;				/* 검색 실패 */
}
