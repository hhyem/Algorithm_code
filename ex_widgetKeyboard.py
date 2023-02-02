from tkinter import *
from tkinter import messagebox

def KeyEvent(event):  #키보드 눌릴 때 작동하는 함수 선언 
  messagebox.showinfo("키보드 이벤트", "눌린 키 : " + chr(event.keycode))
  #event.keycode에는 눌려진 키의 숫자 값이 들어있으므로 chr() 함수를 사용해 문자로 변환한다. 
  
window = Tk()

window.bind("<Key>", keyEvent)  #key 이벤트를 윈도창에 사용 

window.mainloop()
