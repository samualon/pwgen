import tkinter as tk
from tkinter import *
import os


my_font=("Segoe UI", 11);

#Main window setup
window = Tk();
window.title("PWGen");
window.configure(background="#262626")

#Labels setup
label1 = Label(window, text="Enter site url: ", bg="#006db0", fg="white", font=my_font);
label1.pack(padx=5, pady=5);
label1.grid(row=0, column=0);

window.mainloop();
