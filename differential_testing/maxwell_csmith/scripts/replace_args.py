import os
from tempfile import mkstemp
from shutil import move
from os import fdopen, remove
from fnmatch import fnmatch

old  = "kc=${ary_centroids_k10[8]} #TODO"
new  = "kc=${ary_centroids_k10[10]} #TODO"

def m_replace(file_path, pattern, subst):
    #Create temp file
    fh, abs_path = mkstemp()
    with fdopen(fh,'w') as new_file:
        with open(file_path) as old_file:
            for line in old_file:
                new_file.write(line.replace(pattern, subst))
    #Remove original file
    remove(file_path)
    #Move new file
    move(abs_path, file_path)


#Use full path
root = "/Users/mdrafiqulrabin/Desktop/GitHub/Doctoral-Research/differential_testing/maxwell_csmith/scripts/sample/"
pattern = "*.sh"

for path, subdirs, files in os.walk(root):
    for name in files:
        if fnmatch(name, pattern):
            file = os.path.join(path, name)
            m_replace(file, old, new)


#Refs:
#Link: https://stackoverflow.com/a/39110/4784634
#Link: https://stackoverflow.com/a/13214966/4784634
