from pathlib import Path
import re

"""
Example:
    long long ll = 0;

Clang AST:
    |   |-DeclStmt 0x7f7f600b7bd0 <line:35:5, col:21>
    |   | `-VarDecl 0x7f7f600b7b38 <col:5, col:20> col:15 ll 'long long' cinit
"""

theRegEx = r".*VarDecl.*long\slong.*"

class LongLong:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        return str(len(re.findall(theRegEx, txtAST)))
