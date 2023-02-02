menus = [(1, '레코드 추가'), (2, '조회'), (3, '삭제'), (4, '저장'), (5, '종료')]

for i, n in menus:
    print(i, n)
    
myTuple = (10,20,30)

#리스트로 변환
myList = list(myTuple)
#값 추가
myList.append(40)

#튜플로 변환
myTuple = tuple(myList)
print(myTuple)
