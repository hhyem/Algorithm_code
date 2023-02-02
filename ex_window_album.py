from tkinter import *
from time import *

#전역변수 선언
fnameList = ["jeju1.gif","jeju2.gif","jeju3.gif","jeju4.gif","jeju5.gif","jeju6.gif","jeju7.gif","jeju8.gif","jeju9.gif"]
photoList = [None] * 9 #PhotoImage() 함수로 생성할 변수 9개 
num = 0  #현재 사진 번호 

#함수 선언
def clickNext() :  #다음 버튼 누르면 실행되는 함수 
  global num  #num 전역 변수를 함수 안에서 사용 
  num += 1
  if num > 8:  #사진 번호가 최대 8을 넘기면 0번 사진 표시 
    num = 0
  photo = PhotoImage(file = "gif/" + fnameList[num])
  pLabel.configure(image = photo)
  pLabel.image = photo  #변경된 사진 번호에 해당하는 이미지 파일로 pLabel 변경
  
def clickPrev():   #이전 버튼 누르면 처리되는 함수 
  global num
  num -= 1
  if num < 0:
    num = 8
  photo = PhotoImage(file = "gif/" + fnameList[num])
  pLabel.configure(image = photo)
  pLabel.image = photo
  
#메인 코드
window = Tk()
window.geometry("700x500")
window.title("사진 앨범 보기")

btnPrev = Button(window, text = "<<이전",command = clickPrev)
btnNext = Button(window, text = "다음 >>", command = clickNext)

photo = PhotoImage(file = "gif/" + fnameList[0])  #프로그램 실행 후 첫번째 사진 표시 
pLabel = Label(window, image = photo)

btnPrev.place(x = 250, y = 10)  #버튼, 이미지 위치 place로 지정 
btnNext.place(x = 400, y = 10)
pLabel.place(x = 15, y = 50)

window.mainloop()
