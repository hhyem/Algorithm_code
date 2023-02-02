from tkinter import * 
from tkinter import messagebox
window = Tk()

#chk.get() 함수 : 체크버튼에 설정된 값을 가져와서 메시지 출력 
def myFunc():
    if chk.get() == 0:
        messagebox.showinfo("", "체크버튼 꺼짐")
    else:
        messagebox.showinfo("", "체크버튼 켜짐")

#chk 변수 준비, IntVar() 함수 사용
#Checkbutton() 옵션 중 variable에 chk 변수 사용
chk = IntVar()
cb1 = CheckButton(window, text="클릭하세요", variable = chk, command=myFunc)

cb1.pack()
window.mainloop()
