import tkinter as tk
from tkinter import *
import os
import time


#Functions
def generate_click():
    user_site = site_entry.get();
    user_email = email_entry.get();
    user_characters = characters_entry.get();

    program_data = open('../etc/runtime.data', 'w+').close();
    program_data = open('../etc/runtime.data', 'w+');
    program_data.write(user_characters);
    program_data.close();

    time.sleep(2);

    dir = os.path.dirname(__file__);
    os.startfile(os.path.join(dir, 'main.exe'));

    time.sleep(3);

    program_data = open('../etc/runtime.data', 'r+');
    password = program_data.read();

    password_label.config(text="Generated pass: " + password);


def overview_click():
    return 0;


#Etc
my_font=("Segoe UI", 11);


#Main window setup
window = Tk();
window.title("PWGen");
window.configure(background="#262626")


#Labels setup
site_label = Label(window, text="Enter site url: ", bg="#006db0", fg="white", font=my_font, width = 35);
site_label.grid(row=0, column=0, padx = 10, pady = 5);

email_label = Label(window, text="Enter username or email: ", bg="#006db0", fg="white", font=my_font, width = 35);
email_label.grid(row=2, column=0, padx = 10, pady = 5);

characters_label = Label(window, text="Enter desired password length: ", bg="#006db0", fg="white", font=my_font, width = 35);
characters_label.grid(row=4, column=0, padx = 10, pady = 5);

password_label = Label(window, text="Generated pass: ", bg="#006db0", fg="white", font=my_font, width = 35, height = 2)
password_label.grid(row=7, column=0, padx = 10, pady = 10);


#Textbox setup
site_entry = Entry(window, bg = "#006db0", fg = "white", width = 30);
site_entry.grid(row=1, column =0, padx = 10, pady = 5);

email_entry = Entry(window, bg = "#006db0", fg = "white", width = 30);
email_entry.grid(row = 3, column = 0, padx = 10, pady = 5);

characters_entry = Entry(window, bg = "#006db0", fg = "white", width = 30);
characters_entry.grid(row = 5, column = 0, padx = 10, pady = 5);


#Button setup
generate_button = Button(window, text="Generate", command=generate_click, bg = "#96c4ff");
generate_button.grid(row = 6, column = 0, padx = 50, pady = 5, sticky = W);

overview_button = Button(window, text="Overview", command=overview_click, bg = "#96c4ff");
overview_button.grid(row = 6, column = 0, padx = 50, pady = 5, sticky = E);


window.mainloop();
