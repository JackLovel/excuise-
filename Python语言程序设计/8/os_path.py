# coding: utf-8

import os.path as op

path = "os_path.txt"

# file's abs path
path1 = op.abspath(path)
print(path1)

# normal path 
print(op.normpath("D://PYE//file.txt"))

# relative path
path2 = op.relpath(path1)
print(path2)


# menu name
path3 = op.dirname(path1)
print(path3)


# menu file name
path4 = op.basename(path1)
print(path4)


# combine path1 with path2
path5 = op.join("/home", "PYE/file.txt")
print(path5)


# file or menu is exist?
path6 = op.exists("/home/PYE/file.txt")
print(path6)


# is file?
path7 = op.isfile("os_path.txt")
print(path7)


# is directory?
path8 = op.isdir("/home")
print(path8)


# get file size 
path9 = op.getsize("os_path.txt")
print(path9)

