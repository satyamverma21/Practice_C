import pyautogui as p
import time as t 

p.moveTo(1700,0)
p.click()
p.press('win')
p.write("brave")
p.press('enter')
p.moveTo(1700,800)
p.click()
t.sleep(5)
p.hotkey('ctrlleft', 'n')
p.write("web.whatsapp.com")
p.press('enter')
p.moveTo(1350,400)
t.sleep(10)
p.leftClick()
t.sleep(15)
p.press('h')
p.click()
p.write("HELLO BETU")
p.press('enter')







