import os
from tempfile import mkstemp
from shutil import move
from os import fdopen, remove
from fnmatch import fnmatch

def m_getLastline(file):
    with open(file, "rb") as fin:
        #By time
        #first = fin.readline()
        #for last in fin: pass
        #return last
        #By space
        return fin.readlines()[-2]

#Must use full path
root = "/Users/mdrafiqulrabin/Desktop/GitHub/Doctoral-Research/differential_testing/maxwell_csmith/default"
pattern = "csmith.o*"

for path, subdirs, files in os.walk(root):
    for name in files:
        if fnmatch(name, pattern):
            file = os.path.join(path, name)
            str = m_getLastline(file)
            print("{0} = {1}".format(file.split("-")[1],str))
            #print (str)
