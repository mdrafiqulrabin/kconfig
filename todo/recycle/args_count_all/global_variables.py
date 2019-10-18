from pathlib import Path
import re

"""
Example:
    int g=0;
    int mian() {
        int l=0;
        return 0;
    }

Clang AST:
    
    |-VarDecl 0x7fd87f02c978 <sample.c:1:1, col:7> col:5 g 'int' cinit
    | `-IntegerLiteral 0x7fd87f06d840 <col:7> 'int' 0
    `-FunctionDecl 0x7fd87f06d8b0 <line:2:1, line:5:1> line:2:5 mian 'int ()'
    `-CompoundStmt 0x7fd87f06da38 <col:12, line:5:1>
    |-DeclStmt 0x7fd87f06d9e8 <line:3:5, col:12>
    | `-VarDecl 0x7fd87f06d968 <col:5, col:11> col:9 l 'int' cinit
    |   `-IntegerLiteral 0x7fd87f06d9c8 <col:11> 'int' 0
    `-ReturnStmt 0x7fd87f06da20 <line:4:5, col:12>
    `-IntegerLiteral 0x7fd87f06da00 <col:12> 'int' 0
"""

theRegEx = r"^(?!.*DeclStmt).*[\r\n]+(.*VarDecl.*)$"

class GlobalVariables:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        return str(len(re.findall(theRegEx, txtAST)))
