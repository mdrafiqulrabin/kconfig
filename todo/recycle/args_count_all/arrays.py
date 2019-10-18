from pathlib import Path
import re

"""
Example:
    int arr[2];
    
Clang AST:
    |-DeclStmt 0x7fc1800529f0 <line:13:5, col:23>
    | `-VarDecl 0x7fc180052900 <col:5, col:22> col:9 arr 'int [2]' cinit
"""

theRegEx = r".*VarDecl.*\[\d\].*"

class Arrays:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        return str(len(re.findall(theRegEx, txtAST)))
