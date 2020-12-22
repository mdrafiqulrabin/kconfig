from pathlib import Path
import re

"""
Example:
    ++c;

Clang AST:
    |-UnaryOperator 0x7ffd580462c8 <line:13:5, col:7> 'int' prefix '++'
    | `-DeclRefExpr 0x7ffd580462a0 <col:7> 'int' lvalue Var 0x7ffd5802c0f0 'c' 'int'
"""

theRegEx = r".*UnaryOperator.*prefix.*\+\+.*"

class PreIncrOperator:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        return str(len(re.findall(theRegEx, txtAST)))
