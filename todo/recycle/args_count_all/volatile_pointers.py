from pathlib import Path
import re

"""
Example:
    volatile char *vpch;

Clang AST:
    |   |-DeclStmt 0x7f9e7989a720 <line:10:5, col:24>
    |   | `-VarDecl 0x7f9e7989a6c0 <col:5, col:20> col:20 vpch 'volatile char *'
"""

theRegEx = r".*VarDecl.*volatile.*\*.*"

class VolatilePointers:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        return str(len(re.findall(theRegEx, txtAST)))
