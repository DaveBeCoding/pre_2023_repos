#! /usr/bin/python3

import os 
import time
import subprocess
import datetime
from default_locate import *

def location_menu():
    clear()
    choices = input("Select which location you would like your project to be saved \n"
                    
                    "1) Default location ~/dev/django/<project name>/\n"
                    "2) Current working directory\n"
                    "3) New location /home/<your_user>/dev/dummyLocations/test1/\n"
                    
                    )
    clear()
    create_project(choices)
    pause(timer_three)
    
def create_project(chc):
    clear()
    name_P = project_name()
    pause(timer_three)
    if int(chc) == opt_one:
        create_file(default_location+name_P)
    elif int(chc) == opt_two:
        path = os.getcwd() #pwd
        create_file(path+"/"+name_P)
        pause(timer_three)
    elif int(chc) == opt_three:
        new_location = input("type location to place file\n"
                             " \n"
                             " Example: "
                             "/home/<your_user>/dev/Your_Folder: \n"
                             )
        create_file(new_location+"/"+name_P)
        pause(timer_three)
        
def create_file(name):
    clear()
    os.chdir(records) #change dir
    f= open("r_sheet.txt","w+")
    f.write(name)
    # for i in range(10):
    #     f.write("This is line %d\r\n" % (i+1))
    f.close()
    print(" file record created name "+name+"\n")
    spin_up_django(name)
    
def project_name():
    p_name = input( " Enter project name \n")
    return p_name

def spin_up_django(name_pt):
    project_name = name_pt
    makeDir(name_pt) #change from project_name to name_pt
    changeDir(project_name)
    os.system(virtualenv_create)
    changeDir(project_name)
    makeDir(s_r_c)
    changeDir(s_r_c)
    
def main():
    location_menu()
    
def clear():
    os.system('cls' if os.name == 'nt' else 'clear')
    
def pause(set_time):
    time.sleep(set_time)
    
def makeDir(dir):
    os.mkdir(dir)
    
def changeDir(cdir):
    os.chdir(cdir)  
    
def read_file():
    pass
    
def activate_venv(p_name):
    changeDir(p_name)
    pause(timer_three)
    clear()
    os.system("bashScript.sh") #this runs the script
    # subprocess.Popen("bashScript.sh") #this works
    
if __name__ == "__main__":
    main()