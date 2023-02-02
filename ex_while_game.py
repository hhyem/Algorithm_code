import random

num = random.randint(1, 100)
tries = 1

while 1:
    print("1부터 100 사이의 숫자를 맞춰보세요 : ")
    user = int(input())
    if(num < user) :
        print('너무 커요')
    elif (num > user):
        print('너무 작아요')
    else:
        print('정답!')
        break;
    tries += 1

print(f'{tries}만에 맞췄습니다.')
