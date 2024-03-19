//int형 큐를 사용하는 프로그램에 임의의 데이터를 검색하는 함수 추가하기 
int Search2(const IntQueue *q, int x) {
	int i;

	for (i = 0; i < q->num; i++) {
		if (q->que[(i + q->front) % q->max] == x)
			return i;		/* 검색 성공 */
	}
	return -1;				/* 검색 실패 */
}

//search2 함수는 search 함수처럼 찾은 요소의 인덱스를 반환하지 않는다. 
//search2 함수는 찾은 데이터가 맨 앞의 요소로부터 상대적으로 몇 번째 위치에 있는지에 대한 인덱스 값을 반환한다. 검색에 실패할 경우 -1을 반환한다.
