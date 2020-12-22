from pathlib import Path
import re

"""
Example:
    int u = +4;

Clang AST:
    |   |-DeclStmt 0x7f7f600b0ca8 <line:15:5, col:15>
    |   | `-VarDecl 0x7f7f600b0c08 <col:5, col:14> col:9 used u 'int' cinit
    |   |   `-UnaryOperator 0x7f7f600b0c88 <col:13, col:14> 'int' prefix '+'
    |   |     `-IntegerLiteral 0x7f7f600b0c68 <col:14> 'int' 4
"""

theRegEx = r"(?!.*prefix.*\+\+).*UnaryOperator.*prefix.*\+.*"

class UnaryPlusOperator:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        return str(len(re.findall(theRegEx, txtAST)))
