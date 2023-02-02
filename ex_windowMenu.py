from tkinter import *

window = Tk()

mainMenu = Menu(window)  #부모윈도로 mainMenu 변수 생성 
window.config(menu = mainMenu) #생성한 메뉴 자체를 윈도창의 메뉴로 지정 

fileMenu = Menu(mainMenu)  #상위 메뉴인 파일 생성, 메뉴 자체에 부착 
#파일 메뉴는 선택하고 끝나는 것이 아니라, 그 아래에 다른 메뉴가 확장되어야 하므로 add_cascade() 함수 사용
mainMenu.add_cascade(label = "파일", menu = fileMenu)  #파일 메뉴의 하위에 열기 메뉴 준비 
fileMenu.add_command(label = "열기")  
fileMenu.add_seperator()  #메뉴 사이에 구분선 넣기 
fileMenu.add_command(label = "종료")  #하위 메뉴 생성 

window.mainloop()
