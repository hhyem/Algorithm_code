리스트명[n:m]
pre = []

for i in range(10):
    print('헌혈해 주셔서 감사합니다. 혈액형을 선택하세요')
    b = input('A, B, AB, O : ')
    pre.append(b)

print('--------------------------')
print('혈액형: 개수 ')
print('--------------------------')

a = 0
b = 0
ab = 0
o = 0

for i in range(10):
    if pre[i] == 'A':
        a += 1
    elif pre[i] == 'B':
        b += 1
    elif pre[i] == 'AB':
        ab += 1
    else:
        o += 1

print('A형 : ', a)
print('B형 : ', b)
print('AB형 : ', ab)
print('O형 : ', o)
