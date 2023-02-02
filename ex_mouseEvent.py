from tkinter import *
from tkinter import messagebox

#함수 선언
def clickLeft(event):  #마우스 이벤트 발생할 때 작동할 함수 정의 
  messagebox.showinfo("마우스","마우스 왼쪽 버튼 클릭됨")
  
#메인 
windwo = Tk()

window.bind("<Button-1>", clickLeft)  #window.bind() 함수 : 마우스 왼쪽 버튼 클릭 할 때 발생하는 이벤트인 <Button-1> 설정하고 clickLeft 함수명 지정 

window.mainloop()
