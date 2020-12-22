from pathlib import Path
import re

"""
Example:
    volatile int v;

Clang AST:
    |   |-DeclStmt 0x7f9e7989a660 <line:9:5, col:24>
    |   | `-VarDecl 0x7f9e7989a5e0 <col:5, col:22> col:18 v 'volatile int' cinit
"""

theRegEx = r".*VarDecl.*volatile.*"

class Volatiles:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        return str(len(re.findall(theRegEx, txtAST)))
