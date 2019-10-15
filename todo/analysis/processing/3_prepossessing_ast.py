import glob
from pathlib import Path

pathAST = "../../data/c2ast/*.c.ast"
rootAST = "TranslationUnitDecl"
rootC = ".c:"

def getValidAST(file):
    txtAST = Path(file).read_text().splitlines()
    for i, lineAST in enumerate(txtAST):
        if rootAST in lineAST: break
    if i < len(txtAST) - 1:
        with open(file, 'w') as f:
            f.write('\n'.join(txtAST[i:]))
    txtAST = Path(file).read_text()
    return txtAST

def getRawAST(file):
    txtAST = Path(file).read_text().splitlines()
    for i, lineAST in enumerate(txtAST):
        if rootC in lineAST: break
    if i < len(txtAST) - 1:
        with open(file, 'w') as f:
            f.write(txtAST[0])
        with open(file, 'a') as f:
            f.write('\n')
            f.write('\n'.join(txtAST[i:]))
    txtAST = Path(file).read_text()
    return txtAST

def main():
    i = 0
    for file in glob.glob(pathAST):
        i = i + 1
        txtAST = getValidAST(file)
        txtAST = getRawAST(file)
        print(i, " : ", file)

main()
