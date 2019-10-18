from pathlib import Path
import re

"""
Example:
    int u = +4;

Clang AST:
    |   |-DeclStmt 0x7fa83b8b0618 <line:11:5, col:17>
    |   | `-VarDecl 0x7fa83b8b0598 <col:5, col:13> col:11 f 'float' cinit
"""

theRegEx = r".*VarDecl.*float.*"

class Float:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        return str(len(re.findall(theRegEx, txtAST)))
