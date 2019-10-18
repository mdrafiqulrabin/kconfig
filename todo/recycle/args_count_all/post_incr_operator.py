from pathlib import Path
import re

"""
Example:
    c++;

Clang AST:
    |-UnaryOperator 0x7ffd58046358 <line:15:5, col:6> 'int' postfix '++'
    | `-DeclRefExpr 0x7ffd58046330 <col:5> 'int' lvalue Var 0x7ffd5802c0f0 'c' 'int'
"""

theRegEx = r".*UnaryOperator.*postfix.*\+\+.*"

class PostIncrOperator:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        return str(len(re.findall(theRegEx, txtAST)))
