import os, glob, re, csv

filePath = "../ast_files/pycparser/correct/*.ast"
output_file = "gcc_reg_stats.csv"

txtCode = ""

cntArray = "arrays"
astArray = "ArrayDecl:"

cntPointer = "pointers"
astPointer = "PtrDecl:"

cntStruct = "structs"
astStruct = "Struct:"

cntUnion = "unions"
astUnion = "Union:"

cntPackedStruct = "packed-struct"
astPackedStruct = "Pragma: pack"

cntDiv = "divs"
astDiv = "BinaryOp: /"

cntMul = "muls"
astMul = "BinaryOp: *"

cntPreIncOp = "pre-incr-operator"
astPreIncOp = "UnaryOp: ++"

cntPreDecOp = "pre-decr-operator"
astPreDecOp = "UnaryOp: --"

cntPostIncOp = "post-incr-operator"
astPostIncOp = "UnaryOp: p++"

cntPostDecOp = "post-decr-operator"
astPostDecOp = "UnaryOp: p--"

cntUnaryPlusOp = "unary-plus-operator"
astUnaryPlusOp = "UnaryOp: +"

cntFunc = "funcs"
astFunc = "FuncDef:"

cntLongLong = "longlong"
astLongLong = "IdentifierType: ['long', 'long']"

cntFloat = "float"
astFloat = "IdentifierType: ['float']"

cntJump = "jump"
astJump = ["Return:", "Break:", "Continue:", "Goto:"]

cntVolatile = "volatiles"
astVolatile = "TypeDecl:.*\['volatile'\]"

cntCompoundAssignment = "compound-assignment"
astCompoundAssignment = "Assignment:\s*.." # +=

cntConst = "consts"
astConst = "TypeDecl:.*\['const'\]"

cntVolatilePtr = "volatile-pointers"
astVolatilePtr = r"PtrDecl:.*\n\s*TypeDecl:.*\['volatile'\]"

cntConstPtr = "const-pointers"
astConstPtr = r"PtrDecl:.*\n\s*TypeDecl:.*\['const'\]"

cntInlineFunc = "inline-function"
astInlineFunc = "Decl:.*\['inline'\]"

cntGlobalVar = "global-variables"
astGlobalVar = r"TypeDecl:.*\n\s*IdentifierType:.*"

cntBuiltinFunc  = "builtin-func"
astBuiltinFunc1 = r"FuncCall:.*\n\s*ID:.*"
astBuiltinFunc2 = r"FuncDef:.*\n\s*Decl:\s*"

cntInt8_t = "int8_t"
astInt8_t = "IdentifierType:\s*\[\'int8_t\'\]"

cntUint8_t = "uint8_t"
astUint8_t = "IdentifierType:\s*\[\'uint8_t\'\]"

cntInt16_t = "int16_t"
astInt16_t = "IdentifierType:\s*\[\'int16_t\'\]"

cntUint16_t = "uint16_t"
astUint16_t = "IdentifierType:\s*\[\'uint16_t\'\]"

cntInt32_t = "int32_t"
astInt32_t = "IdentifierType:\s*\[\'int32_t\'\]"

cntUint32_t = "uint32_t"
astUint32_t = "IdentifierType:\s*\[\'uint32_t\'\]"

cntInt64_t = "int64_t"
astInt64_t = "IdentifierType:\s*\[\'int64_t\'\]"

cntUint64_t = "uint64_t"
astUint64_t = "IdentifierType:\s*\[\'uint64_t\'\]"

### method ###

def saveToCsvFile(fileName, line):
    with open (fileName, 'a') as file:
        file.write(line)
        file.write('\n')

def doSomething(fileName):
    with open(fileName, 'r') as myfile:
        txtCode = myfile.read()
        return txtCode

def getPatternCount(thePattern, txtCode):
    return str(len(re.findall(thePattern, txtCode)))

def getGlobalVar(txtCode):
    if txtCode.find("FuncDef:") > -1:
        txtCode = txtCode[:txtCode.index("FuncDef:")]
    return getPatternCount(astGlobalVar,txtCode)

def getGlobalVar(txtCode):
    if txtCode.find("FuncDef:") > -1:
        txtCode = txtCode[:txtCode.index("FuncDef:")]
    return getPatternCount(astGlobalVar,txtCode)

def getBuiltinFunc(txtCode):
    r1 = re.findall(astBuiltinFunc1, txtCode)
    funcCount = 0
    for i in r1:
        i = i.split("ID:")[-1].strip()
        r2 = re.findall(astBuiltinFunc2+i, txtCode)
        if len(r2) == 0:
            funcCount += 1
    return str(funcCount);

### main ###

for file in glob.glob(filePath):
    txtCode = doSomething(file)
    cntArray += "," + str(txtCode.count(astArray))
    cntPointer += "," + str(txtCode.count(astPointer))
    cntStruct += "," + str(txtCode.count(astStruct))
    cntUnion += "," + str(txtCode.count(astUnion))
    cntPackedStruct += "," + str(txtCode.count(astPackedStruct))
    cntDiv += "," + str(txtCode.count(astDiv))
    cntMul += "," + str(txtCode.count(astMul))
    cntPreIncOp += "," + str(txtCode.count(astPreIncOp))
    cntPreDecOp += "," + str(txtCode.count(astPreDecOp))
    cntPostIncOp += "," + str(txtCode.count(astPostIncOp))
    cntPostDecOp += "," + str(txtCode.count(astPostDecOp))
    cntUnaryPlusOp += "," + str(txtCode.count(astUnaryPlusOp))
    cntFunc += "," + str(txtCode.count(astFunc))
    cntLongLong += "," + str(txtCode.count(astLongLong))
    cntFloat += "," + str(txtCode.count(astFloat))
    cntJump += "," + str(sum(txtCode.count(i) for i in astJump))
    cntVolatile += "," + getPatternCount(astVolatile,txtCode)
    cntCompoundAssignment += "," + getPatternCount(astCompoundAssignment,txtCode)
    cntConst += "," + getPatternCount(astConst,txtCode)
    cntInlineFunc += "," + getPatternCount(astInlineFunc,txtCode)
    cntVolatilePtr += "," + getPatternCount(astVolatilePtr,txtCode)
    cntConstPtr += "," + getPatternCount(astConstPtr,txtCode)
    cntGlobalVar += "," + getGlobalVar(txtCode)
    cntBuiltinFunc += "," + getBuiltinFunc(txtCode)
    cntInt8_t += "," + getPatternCount(astInt8_t,txtCode)
    cntUint8_t += "," + getPatternCount(astUint8_t,txtCode)
    cntInt16_t += "," + getPatternCount(astInt16_t,txtCode)
    cntUint16_t += "," + getPatternCount(astUint16_t,txtCode)
    cntInt32_t += "," + getPatternCount(astInt32_t,txtCode)
    cntUint32_t += "," + getPatternCount(astUint32_t,txtCode)
    cntInt64_t += "," + getPatternCount(astInt64_t,txtCode)
    cntUint64_t += "," + getPatternCount(astUint64_t,txtCode)

saveToCsvFile(output_file, cntArray)
saveToCsvFile(output_file, cntPointer)
saveToCsvFile(output_file, cntStruct)
saveToCsvFile(output_file, cntUnion)
saveToCsvFile(output_file, cntPackedStruct)
saveToCsvFile(output_file, cntDiv)
saveToCsvFile(output_file, cntMul)
saveToCsvFile(output_file, cntPreIncOp)
saveToCsvFile(output_file, cntPreDecOp)
saveToCsvFile(output_file, cntPostIncOp)
saveToCsvFile(output_file, cntPostDecOp)
saveToCsvFile(output_file, cntUnaryPlusOp)
saveToCsvFile(output_file, cntFunc)
saveToCsvFile(output_file, cntLongLong)
saveToCsvFile(output_file, cntFloat)
saveToCsvFile(output_file, cntJump)
saveToCsvFile(output_file, cntVolatile)
saveToCsvFile(output_file, cntCompoundAssignment)
saveToCsvFile(output_file, cntConst)
saveToCsvFile(output_file, cntInlineFunc)
saveToCsvFile(output_file, cntVolatilePtr)
saveToCsvFile(output_file, cntConstPtr)
saveToCsvFile(output_file, cntGlobalVar)
saveToCsvFile(output_file, cntBuiltinFunc)
saveToCsvFile(output_file, cntInt8_t)
saveToCsvFile(output_file, cntUint8_t)
saveToCsvFile(output_file, cntInt16_t)
saveToCsvFile(output_file, cntUint16_t)
saveToCsvFile(output_file, cntInt32_t)
saveToCsvFile(output_file, cntUint32_t)
saveToCsvFile(output_file, cntInt64_t)
saveToCsvFile(output_file, cntUint64_t)
