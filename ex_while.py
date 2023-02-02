import turtle

n = int(input('정수를 입력하세요: '))

t=turtle.Turtle()
degree = 360/n

while n>0:
    t.forward(50)
    t.left(degree)
    n-=1
