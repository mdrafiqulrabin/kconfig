import os
from tempfile import mkstemp
from shutil import move
from os import fdopen, remove
from fnmatch import fnmatch

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




vn=["4.8.2", "4.9.2", "5.2.0", "5.4.0"]
fn=["v482", "v492", "v520", "v540"]

#Use full path
pre_root = "/Users/mdrafiqulrabin/Desktop/GitHub/Doctoral-Research/differential_testing/maxwell_csmith/scripts/run/"
pattern = "*.sh"

for i in range(0,len(vn)):
    root = pre_root + fn[i]
    for path, subdirs, files in os.walk(root):
        for name in files:
            if fnmatch(name, pattern):
                file = os.path.join(path, name)
                #m_replace(file, old, new)
                m_replace(file, "kc=${ary_centroids_k10[9]} #TODO", "kc=''")


#Refs:
#Link: https://stackoverflow.com/a/39110/4784634
#Link: https://stackoverflow.com/a/13214966/4784634
