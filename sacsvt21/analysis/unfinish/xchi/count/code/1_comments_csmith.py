import sys, glob, re
from pathlib import Path

pathC = str(sys.argv[1])

# Refs: https://stackoverflow.com/a/241506/4784634
def comment_remover(txtCode):
    def replacer(match):
        s = match.group(0)
        if s.startswith('/'):
            return " " #space
        else:
            return s
    pattern = re.compile(
        r'//.*?$|/\*.*?\*/|\'(?:\\.|[^\\\'])*\'|"(?:\\.|[^\\"])*"',
        re.DOTALL | re.MULTILINE
    )
    return re.sub(pattern, replacer, txtCode)

def main():
    i = 0
    print(pathC)
    for file in Path(pathC).glob('**/*.c'):
        i = i + 1
        txtCode = Path(file).read_text()
        txtCode = comment_remover(txtCode)
        with open(file, 'w') as f: f.write(txtCode)
        print(i, " = ", file)

main()
