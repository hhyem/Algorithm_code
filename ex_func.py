#함수 미사용 > 매번 F 값을 입력하고 print로 출력해야 한다. 
F = 100
C = (F-32) * 5/9

#함수 사용 
def convert(F):
    C = (F-32) * 5/9
    return C

print(convert(100))
print(convert(80))
