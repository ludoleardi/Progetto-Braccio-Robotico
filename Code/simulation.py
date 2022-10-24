import tkinter as tk

def plus(n, finger):
    n = n + 0.10
    finger.config(text=n)

def minus(n, finger):
    n = n - 0.10
    finger.config(text=n)

###############################################################################################################################
gui = tk.Tk(className='roboticHandSim')
##set window size
gui.geometry("400x400")

##set window color
gui.configure(bg='#323232')

##variabili
print("set")
t = 0.00
i = 0.00
m = 0.00
r = 0.00
p = 0.00

##labels, buttons & entries
thumbLab = tk.Label(text="", bg = "#323232")
indexLab = tk.Label(text="", bg = "#323232")
middleLab = tk.Label(text="", bg = "#323232")
ringLab = tk.Label(text="", bg = "#323232")
pinkieLab = tk.Label(text="", bg = "#323232")

thumbPlus = tk.Button(gui, text="Thumb: +", command=plus(t, thumbLab))
thumbMinus = tk.Button(gui, text="Thumb: -", command=minus(t, thumbLab))

indexPlus = tk.Button(gui, text="Index: +", command=plus(i, indexLab))
indexMinus = tk.Button(gui, text="Index: -", command=minus(i, indexLab))

middlePlus = tk.Button(gui, text="Middle: +", command=plus(m, middleLab))
middleMinus = tk.Button(gui, text="Middle: -", command=minus(m, middleLab))

ringPlus = tk.Button(gui, text="Ring: +", command=plus(r, ringLab))
ringMinus = tk.Button(gui, text="Ring: -", command=minus(r, ringLab))

pinkiePlus = tk.Button(gui, text="Pinkie: +", command=plus(p, pinkieLab))
pinkieMinus = tk.Button(gui, text="Pinke: -", command=minus(p, pinkieLab))
###############################################################################################################################