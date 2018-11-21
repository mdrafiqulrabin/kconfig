import sys, os, re

def comment_remover(text):
    def replacer(match):
        s = match.group(0)
        if s.startswith('/'):
            return " " # note: a space and not an empty string
        else:
            return s
    pattern = re.compile(
        r'//.*?$|/\*.*?\*/|\'(?:\\.|[^\\\'])*\'|"(?:\\.|[^\\"])*"',
        re.DOTALL | re.MULTILINE
    )
    return re.sub(pattern, replacer, text)

all_files = os.listdir("c_files_with_comments/")
for file_name in all_files:
    src_file = "c_files_with_comments/" + file_name
    dst_file = "c_files_without_comments/" + file_name
    text = ""
    #print (src_file)
    if (not src_file.endswith(".c")):
        continue
    with open(src_file) as rd_file:
        text = rd_file.read()
    text = comment_remover(text)
    #print (text)
    with open(dst_file, "a") as wr_file:
        wr_file.write(text)
        wr_file.write("\n")

print ("Done...")
