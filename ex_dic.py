student1 = {'학번':1000,'이름':'홍길동','학과':'컴퓨터학과'}

#값 추가하기
딕셔너리명[키] = '값'
student1['연락처'] = '010-1111'

#값 수정
딕셔너리명[키] = 값
student1['학과'] = '파이썬학과'
{'학번':1000, '이름':'홍길동', '학과':'파이썬학과','연락처':'010-1111'}

#값 삭제
del(딕셔너리명[키])
del(student1['학과'])
{'학번':1000,'이름':'홍길동','연락처':'010-1111'}
