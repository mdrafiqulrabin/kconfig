import os, glob, re, csv

filePath1 = "../ast_files/pycparser/correct/*.ast"
filePath2 = "../c_files/c_files_without_comments"
output_file = "gcc_reg_stats.csv"

txtCode = ""
fileNameLine = "c-files"
sizeInCharsC = "sizeInCharsC"
sizeInCharsAST = "sizeInCharsAST"

cntCommaOp = "comma-operators"
astCommaOp = ","

cntMainFunc = "main"
astMainFunc = ".*main\s*\(\s*\)"

cntMainArgc = "main-argc"
astMainArgc = ".*main\s+\(.*[^\s]+.*\)"

cntMath8 = "math8"
astMath8 = "(?:int8_t|uint8_t)"

cntMath16 = "math16"
astMath16 = "(?:int16_t|uint16_t)"

cntMath32 = "math32"
astMath32 = "(?:int32_t|uint32_t)"

cntMath64 = "math64"
astMath64 = "(?:int64_t|uint64_t)"

cntBitField = "bitfields"
astBitField = "[^\s]+\s*:\s*\d+"

cntMaxAryDim = "max-array-dim"
astMaxAryDim1 = "\[[^,;]*\]"
astMaxAryDim2 = "\]\s*\["

cntMaxAryLen = "max-array-len-per-dim"
astMaxAryLen = "\[\s*(\d+)\s*\]"

### method ###

def getSizeInCharacters(fileName):
    with open(fileName,'r') as file:
        lines = 0
        words = 0
        characters = 0
        for line in file:
            wordslist = line.split()
            lines += 1
            words += len(wordslist)
            characters += sum(len(word) for word in wordslist)
        return characters;

def saveToCsvFile(fileName, line):
    with open (fileName, 'a') as file:
        file.write(line)
        file.write('\n')

def getTextCode(fileName):
    with open(fileName, 'r') as myfile:
        txtCode = myfile.read()
        return txtCode

def getPatternCount(thePattern, txtCode):
    return str(len(re.findall(thePattern, txtCode)))

def getMaxAryDim(txtCode):
    r1 = re.findall(astMaxAryDim1, txtCode)
    maxCount = 0
    for i in r1:
        r2 = re.findall(astMaxAryDim2, i)
        if len(r2) > maxCount:
            maxCount = len(r2)
    return str(maxCount + 1);

def getMaxAryLen(txtCode):
    r = re.findall(astMaxAryLen, txtCode)
    if len(r) > 0 :
        r = [int(i.strip()) for i in r]
        return str(max(r))
    else:
        return "0"

### main ###

for file in glob.glob(filePath1):
    sizeInCharsAST += "," + str(getSizeInCharacters(file))
    file = file.split("/")[-1].split(".ast")[0]
    fileNameLine += "," + file
    file = filePath2 + "/" + file
    sizeInCharsC += "," + str(getSizeInCharacters(file))
    ####
    txtCode = getTextCode(file)
    cntCommaOp   += "," + str(txtCode.count(astCommaOp))
    cntMainFunc  += "," + getPatternCount(astMainFunc, txtCode)
    cntMainArgc  += "," + getPatternCount(astMainArgc, txtCode)
    #cntMath8     += "," + getPatternCount(astMath8, txtCode)
    #cntMath16    += "," + getPatternCount(astMath16, txtCode)
    #cntMath32    += "," + getPatternCount(astMath32, txtCode)
    #cntMath64    += "," + getPatternCount(astMath64, txtCode)
    cntBitField  += "," + getPatternCount(astBitField, txtCode)
    cntMaxAryDim += "," + getMaxAryDim(txtCode)
    cntMaxAryLen += "," + getMaxAryLen(txtCode)

saveToCsvFile(output_file, fileNameLine)
saveToCsvFile(output_file, sizeInCharsC)
saveToCsvFile(output_file, sizeInCharsAST)

saveToCsvFile(output_file, cntCommaOp)
saveToCsvFile(output_file, cntMainFunc)
saveToCsvFile(output_file, cntMainArgc)

#saveToCsvFile(output_file, cntMath8)
#saveToCsvFile(output_file, cntMath16)
#saveToCsvFile(output_file, cntMath32)
#saveToCsvFile(output_file, cntMath64)

saveToCsvFile(output_file, cntBitField)
saveToCsvFile(output_file, cntMaxAryDim)
saveToCsvFile(output_file, cntMaxAryLen)
