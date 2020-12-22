from pathlib import Path
import re

"""
Example:
    const char *cpch;

Clang AST:
    |   |-DeclStmt 0x7f9e7989a7b0 <line:11:5, col:21>
    |   | `-VarDecl 0x7f9e7989a750 <col:5, col:17> col:17 cpch 'const char *'
"""

theRegEx = r".*VarDecl.*const.*\*.*"

class ConstPointers:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        return str(len(re.findall(theRegEx, txtAST)))
