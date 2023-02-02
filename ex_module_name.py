#main 파일 
import module01
import module02
import module03

if __name__ == '__main__':
	print('실행 파일입니다.')
    print('__name__ : ', __name__)



#module01.py
def fun():
	print('module1 함수 실행 ')
    
if __name__ == '__main':  #메인 파일이면 실행한다.
	fun()
    print('__name__: ', __name__)
    
#module02.py
def fun():
	print('module2 함수 실행 ')
    
if __name__ == '__main':  #메인 파일이면 실행한다.
	fun()
    print('__name__: ', __name__)
    
#module03.py
def fun():
	print('module3 함수 실행 ')
    
if __name__ == '__main':  #메인 파일이면 실행한다.
	fun()
    print('__name__: ', __name__)
