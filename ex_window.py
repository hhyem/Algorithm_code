from tkiner import *
#messagebox 모듈 
from tkinter import messagebox

#messagebox.showinfo(제목, 내용) > 화면에 메시지 상자 출력 
def myFunc():
    messagebox.showinfo("강아지 버튼","강아지 귀엽죠?")
    
window = Tk()

photo = PhotoImage(file = "...")
#글자 대신 이미지 표현
button1 = Button(window, image=photo,command=myFunc()

button1.pack()

window.mainloop()
