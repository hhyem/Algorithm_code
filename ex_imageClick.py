#예제) 그림 파일인 GIF 파일을 선택하는 코드 (선택하면 파일 이름이 화면에 뜬다.)
from tkinter import *
from tkinter.filedialog import *

window = Tk()
window.geometry("400x100")

label1 = Label(window, text = "선택된 파일 이름")
label1.pack()

#askopenfilename() 함수 사용 
filename = askopenfilename(parent = window, filetypes = (("GIF 파일", "*.gif"), ("모든 파일","*.*")))

#filename 출력 
label1.configure(text=str(filename))

window.mainloop()
