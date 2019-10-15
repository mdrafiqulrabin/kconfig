import glob,re
from pathlib import Path
import pandas as pd

pathAST = "../../data/regression/ast/*.c.ast"
pathCSV = "../../data/args/args_count.csv"

argsRegEx = {
    'argc' : r"FunctionDecl.*main.*\n.*ParmVarDecl",
    'arrays' : r"VarDecl.*\[\d+\]",
    'bitfields' : r"FieldDecl.*\n.*IntegerLiteral.*",
    'comma_operators' : r"\,",
    'compound_assignment' : r"CompoundAssignOperator",
    'consts' : r"VarDecl.*const",
    'divs' : r"BinaryOperator.*'\/'",
    'embedded_assigns' : r"\=.+\=",
    'pre_incr_operator' : r"UnaryOperator.*prefix.*\+\+",
    'pre_decr_operator' : r"UnaryOperator.*prefix.*\-\-",
    'post_incr_operator' : r"UnaryOperator.*postfix.*\+\+",
    'post_decr_operator' : r"UnaryOperator.*postfix.*\-\-",
    'unary_plus_operator' : r"(?!.*prefix.*\+\+).*UnaryOperator.*prefix.*\+",
    'jumps' : r"GotoStmt|BreakStmt|ContinueStmt",
    'longlong' : r"VarDecl.*long\s+long",
    'int8' : r"(?!.*uint8_t).*VarDecl.*int8_t",
    'uint8' : r"VarDecl.*uint8_t",
    'float' : r"VarDecl.*float",
    'main' : r"FunctionDecl.*main",
    'math64' : "(?i)u64|int64|signed64|size_t.*64|typedef.*64|m64|attribute.*64|mm_set.*64|:\s*64[^\d]|>>\s*64|<<\s*64|long\s*long|double",
    'inline_function' : r"FunctionDecl.*inline",
    'muls' : r"BinaryOperator.*'\*'",
    'safe_math' : r"safe[_a-z]+func",
    'packed_struct' : r"pragma\s*pack|attribute.*packed",
    'paranoid' : r"ImplicitCastExpr.*FunctionToPointerDecay.*\n.*DeclRefExpr.*Function.*assert",
    'pointers' : r"VarDecl.*\*",
    'structs' : r"RecordDecl.*struct",
    'unions' : r"RecordDecl.*union",
    'volatiles' : r"VarDecl.*volatile",
    'volatile_pointers' : r"VarDecl.*volatile.*\*",
    'const_pointers' : r"VarDecl.*const.*\*",
    'global_variables' : r"\n\|-VarDecl",
    'builtins' : r"FunctionDecl.*implicit.*extern"
}

def getCount(theText, theRex):
    return str(len(re.findall(str(theRex), str(theText))))

def getMatch(theText, theRex):
    return str(re.findall(str(theRex), str(theText)))

def debugPrint(txtAST, txtC):
    print("argc = ", getCount(txtAST, argsRegEx['argc']))
    print("arrays = ", getCount(txtAST, argsRegEx['arrays']))
    print("bitfields = ", getCount(txtAST, argsRegEx['bitfields']))
    print("comma_operators = ", getCount(txtC, argsRegEx['comma_operators']))
    print("compound_assignment = ", getCount(txtAST, argsRegEx['compound_assignment']))
    print("consts = ", getCount(txtAST, argsRegEx['consts']))
    print("divs = ", getCount(txtAST, argsRegEx['divs']))
    print("embedded_assigns = ", getCount(txtC, argsRegEx['embedded_assigns']))
    print("pre_incr_operator = ", getCount(txtAST, argsRegEx['pre_incr_operator']))
    print("pre_decr_operator = ", getCount(txtAST, argsRegEx['pre_decr_operator']))
    print("post_incr_operator = ", getCount(txtAST, argsRegEx['post_incr_operator']))
    print("post_decr_operator = ", getCount(txtAST, argsRegEx['post_decr_operator']))
    print("unary_plus_operator = ", getCount(txtAST, argsRegEx['unary_plus_operator']))
    print("jumps = ", getCount(txtAST, argsRegEx['jumps']))
    print("longlong = ", getCount(txtAST, argsRegEx['longlong']))
    print("int8 = ", getCount(txtAST, argsRegEx['int8']))
    print("uint8 = ", getCount(txtAST, argsRegEx['uint8']))
    print("float = ", getCount(txtAST, argsRegEx['float']))
    print("main = ", getCount(txtAST, argsRegEx['main']))
    print("math64 = ", getCount(txtC, argsRegEx['math64']))
    print("inline_function = ", getCount(txtAST, argsRegEx['inline_function']))
    print("muls = ", getCount(txtAST, argsRegEx['muls']))
    print("safe_math = ", getCount(txtC, argsRegEx['safe_math']))
    print("packed_struct = ", getCount(txtC, argsRegEx['packed_struct']))
    print("paranoid = ", getCount(txtAST, argsRegEx['paranoid']))
    print("pointers = ", getCount(txtAST, argsRegEx['pointers']))
    print("structs = ", getCount(txtAST, argsRegEx['structs']))
    print("unions = ", getCount(txtAST, argsRegEx['unions']))
    print("volatiles = ", getCount(txtAST, argsRegEx['volatiles']))
    print("volatile_pointers = ", getCount(txtAST, argsRegEx['volatile_pointers']))
    print("const_pointers = ", getCount(txtAST, argsRegEx['const_pointers']))
    print("global_variables = ", getCount(txtAST, argsRegEx['global_variables']))
    print("builtins = ", getCount(txtAST, argsRegEx['builtins']))

def main():
    mcols = [*argsRegEx.keys()]
    mcols.insert(0, 'cfile')
    mcols.insert(0, 'i')
    mrows = []
    
    i = 0
    for astfile in glob.glob(pathAST):
        i = i + 1
        print("i = ", i, astfile)
        
        cfile = astfile.replace(".c.ast",".c")
        txtAST = Path(astfile).read_text()
        txtC = Path(cfile).read_text()
        #debugPrint(txtAST, txtC);
        
        mrows.append(
                     [
                      str(i),
                      cfile.split('/')[-1],
                      getCount(txtAST, argsRegEx['argc']),
                      getCount(txtAST, argsRegEx['arrays']),
                      getCount(txtAST, argsRegEx['bitfields']),
                      getCount(txtC, argsRegEx['comma_operators']),
                      getCount(txtAST, argsRegEx['compound_assignment']),
                      getCount(txtAST, argsRegEx['consts']),
                      getCount(txtAST, argsRegEx['divs']),
                      getCount(txtC, argsRegEx['embedded_assigns']),
                      getCount(txtAST, argsRegEx['pre_incr_operator']),
                      getCount(txtAST, argsRegEx['pre_decr_operator']),
                      getCount(txtAST, argsRegEx['post_incr_operator']),
                      getCount(txtAST, argsRegEx['post_decr_operator']),
                      getCount(txtAST, argsRegEx['unary_plus_operator']),
                      getCount(txtAST, argsRegEx['jumps']),
                      getCount(txtAST, argsRegEx['longlong']),
                      getCount(txtAST, argsRegEx['int8']),
                      getCount(txtAST, argsRegEx['uint8']),
                      getCount(txtAST, argsRegEx['float']),
                      getCount(txtAST, argsRegEx['main']),
                      getCount(txtC, argsRegEx['math64']),
                      getCount(txtAST, argsRegEx['inline_function']),
                      getCount(txtAST, argsRegEx['muls']),
                      getCount(txtC, argsRegEx['safe_math']),
                      getCount(txtC, argsRegEx['packed_struct']),
                      getCount(txtAST, argsRegEx['paranoid']),
                      getCount(txtAST, argsRegEx['pointers']),
                      getCount(txtAST, argsRegEx['structs']),
                      getCount(txtAST, argsRegEx['unions']),
                      getCount(txtAST, argsRegEx['volatiles']),
                      getCount(txtAST, argsRegEx['volatile_pointers']),
                      getCount(txtAST, argsRegEx['const_pointers']),
                      getCount(txtAST, argsRegEx['global_variables']),
                      getCount(txtAST, argsRegEx['builtins'])
                      ]
                     )
        #print("\n")
    
    df = pd.DataFrame(mrows, columns=mcols)
    df.to_csv(pathCSV, encoding='utf-8', index=False, header=True)
    print("df.shape = " , df.shape)

main()
