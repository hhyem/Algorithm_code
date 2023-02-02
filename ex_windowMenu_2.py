from tkinter import *
from tkinter import messagebox

def func_open():  #열기 메뉴 선택 시 간단한 메시지창 알림 
  messagebox.showinfo("메뉴 선택", "열기 메뉴 선택")
  
def func_exit():  #종료 메뉴 선택 시 프로그램 종료 
  window.quit()
  window.destroy()
  
window = Tk()

mainMenu = Menu(window)
window.config(menu = mainMenu)

fileMenu = Menu(mainMenu)
mainMenu.add_cascade(label="파일", menu = fileMenu)
fileMenu.add_command(label = "열기", command=func_open)  #열기 메뉴 선택 시 add_command() 함수 사용
#선택할 때 실행할 함수명을 command 값으로 사용
#즉 파일 메뉴 선택하면 하위메뉴가 확장되고 
#열기 메뉴를 선택하면 func_open() 함수가 실행된다. 
fileMenu.add_seperator()
fileMenu.add_command(labe="종료",command=func_exit)  #종료 메뉴 선택 시 add_command() 함수 사용
#선택할 때 실행할 함수명을 command 값으로 사용
#파일 메뉴 선택하면 하위메뉴가 확장되고 
#종료 메뉴 선택하면 func_exit() 함수가 실행된다.

window.mainloop()
