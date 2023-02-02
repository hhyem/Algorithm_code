import time

lt = time.localtime()  #시스템 시간
print('localtime : ', lt)

#상수를 이용한 시스템 시간 출력
print('tm_year : ',lt.tm_year)
print('tm_mon : ',lt.tm_mon)  #월
print('tm_mday : ',lt.tm_mday) #일
print('tm_hour : ',lt.tm_hour) #시
print('tm_min : ', lt.tm_min) #분
print('tm_sec : ',lt_tm_sec) #초
print('tm_wday : ',lt.tm_wday) #요일
