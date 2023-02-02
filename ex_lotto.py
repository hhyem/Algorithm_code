#모듈 파일 (lotto.py)
import random

userNums = []
randNums = []
collect = []

def setUNumber(ns):
    global userNums
    userNums = ns
    
def getUNumbers():
	return userNums
    
def setRNumbers():
	global randNums
    
    randNums = random.sample(range(1,46),6)
    
def getRNumbers():
	return randNums
    
def compareNumbers():
	global usreNums
    global randNums
    global collect
    
    collect = []
    for item in userNums:
    	if randNums.count(item) != 0:
        	collect.append(item)
            
	return collect

#실행파일
import lotto as lm

nums = []

print('1부터 45까지 정수 6개를 입력하세요.')

nums.append(int(input('Number 1 : ')))
nums.append(int(input('Number 2 : ')))
nums.append(int(input('Number 3 : ')))
nums.append(int(input('Number 4 : ')))
nums.append(int(input('Number 5 : ')))
nums.append(int(input('Number 6 : ')))

lm.setUNumbers(nums)  #사용자 번호 설정
lm.setRNumbers() #랜덤 번호 설정

print('이번주 로또 번호 ', lm.getRNumbers())
print('내가 선택한 번호 ', lm.getUNumbers())
print('일치하는 숫자 :',lm.compareNumbers())
