import tkinter as tk
from tkinter import *
import os


my_font=("Segoe UI", 11);

#Main window setup
window = Tk();
window.title("PWGen");
window.configure(background="#262626")

#Labels setup
Label(window, text="Enter site url: ", bg="#006db0", fg="white", font=my_font).grid(row=0, column=0, sticky=W);


window.mainloop();
