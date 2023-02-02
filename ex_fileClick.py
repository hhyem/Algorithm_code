#파일 메뉴 > 파일열기/프로그램 종료가 있고 그림 파일을 선택할 수 있는 프로그램

from tkinter import *
from tkinter.filedialog import *

def func_open():  #파일 열기 메뉴 선택 시 실행되는 함수 
  #askopenfilename() 함수로 파일 선택 후 선택한 파일명을 phoeoImage() 함수로 처리 
  filename = askopenfilename(parent = window, filetypes = (("GIF 파일","*.gif"), ("모든 파일","*.*")))
  photo = PhotoImage(file = filename)
  #레이블에 이미지 표시 
  pLabel.configure(image = photo)
  pLabel.image = photo
  
def func_exit():
  window.quit()
  window.destroy()
  
#메인 코드 
window = Tk()
window.geometry("400x400")

window.title("명화 감상하기")

 #선택한 GIF를 윈도창에 출력하기 위해 레이블에 준비 
photo = PhotoImage()  #photoImage()에 별도의 매개변수 없이 빈 그림만 준비 
pLabel = Label(window, image = photo) 
pLabel.pack(expand = 1, anchor = CENTER)

mainMenu = Menu(window)  
window.config(menu = mainMenu)
fileMenu = Menu(mainMenu)
mainMenu.add_cascade(label = "파일", menu = fileMenu)
fileMenu.add_command(label = "파일 열기", command = func_opne)
fileMenu.add_seperator()
fileMenu.add_command(label = "프로그램 종료", command = func_exit)

widnow.mainloop()
