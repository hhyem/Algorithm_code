import random

print('random:', random.random())			#0이상 1미만 난수
print('randint:', random.randint(0,9))  	#0이상 9이하 난수
print('randrange :', random.randrange(0,9))	#0이상 9미만 난수
print('sample : ',random.sample(range(0,10),3))	#0이상 10미만 난수 3개

listVar = [1,2,3,4,5,6]

#무작위로 1개 선택 
print('choice : ',random.choice(listVar))
print('chocie : ',random.choice(listVar))

#아이템 순서 섞기
random.shuffle(listVar)
print('shuffle : ',listVar)
rnadom.shuffle(listVar)
print('shuffle : ',listVar)
