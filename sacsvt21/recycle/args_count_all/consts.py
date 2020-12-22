from pathlib import Path
import re

"""
Example:
    const int q = 10;

Clang AST:
    |-DeclStmt 0x7fc180052ce0 <line:20:5, col:19>
    | `-VarDecl 0x7fc180052c60 <col:5, col:17> col:15 q 'const int' cinit
    |   `-IntegerLiteral 0x7fc180052cc0 <col:17> 'int' 10
"""

theRegEx = r".*VarDecl.*const.*"

class Consts:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        return str(len(re.findall(theRegEx, txtAST)))
