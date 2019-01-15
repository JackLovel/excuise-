import os

# auto install library
libs = { "pandas", "jieba", "pyqt5" }


try:
    for lib in libs:
        os.system("pip install " + lib)
    print("Sucessful!")
except:
    print("Failed!")
    
