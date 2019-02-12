import os
from tempfile import mkstemp
from shutil import move
from os import fdopen, remove
from fnmatch import fnmatch

#Refs: https://stackoverflow.com/a/39110/4784634
def m_replace(file_path, old, new):
    #Create temp file
    fh, abs_path = mkstemp()
    with fdopen(fh,'w') as new_file:
        with open(file_path) as old_file:
            for line in old_file:
                new_file.write(line.replace(old, new))
    remove(file_path) #Remove original file
    move(abs_path, file_path) #Move new file

def m_rename(oldfile, old, new):
    newfile = oldfile.replace(old,new)
    os.rename(oldfile, newfile)

target  = "gcc540/" # path
pattern = "*.sh"    # file

for path, subdirs, files in os.walk(target):
    for name in files:
        if fnmatch(name, pattern):
            thisfile = os.path.join(path, name)
            #m_rename(thisfile,"482","540")
            m_replace(thisfile, "&$to3&$to&$wc", "&$to3&$to&$wc  \\\\")
