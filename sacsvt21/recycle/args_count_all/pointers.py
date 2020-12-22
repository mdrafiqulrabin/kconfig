from pathlib import Path
import re

"""
Example:
    int *p;

Clang AST:
    |   |-DeclStmt 0x7f9e7989a5b0 <line:8:5, col:11>
    |   | `-VarDecl 0x7f9e7989a550 <col:5, col:10> col:10 p 'int *'
"""

theRegEx = r".*VarDecl.*\*.*"

class Pointers:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        return str(len(re.findall(theRegEx, txtAST)))
