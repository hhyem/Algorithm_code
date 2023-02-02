from tkinter import *

#함수 선언
def clickMouse(event):  #마우스 클릭할 때 실행될 이벤트 함수 선언 
  txt = ""
  if event.num == 1:  #event.num 값은 마우스 왼쪽 버튼 클릭했을 때 1값을 가지고, 오른쪽 버튼을 클릭하면 2 값을 가진다. 
    txt += "마우스 왼쪽 버튼이 ("
  elif event.num == 3:
    txt += "마우스 오른쪽 버튼이 ("
    
  txt += str(event.y) + "," + str(event.x) + ")에서 클릭됨"  #event.x와 event.y는 클릭한 위치의 좌표를 가진다. 
  label1.configure(text = txt)  #18행에서 화면에 표시한 레이블의 글자 변경 
  
#메인 코드
window = Tk()
window.geometry("400x400")

label1.Label(window, text="이곳이 바뀜")

window.bind("<Button>", clickMouse)  #마우스 클릭 히 함수 호출 

label1.pack(expand = 1, anchor = CENTER)
window.mainloop()
