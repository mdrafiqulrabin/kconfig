from pathlib import Path
import re

"""
Example:
    uint8_t *y8 = "Hello, World!\n";
    
Clang AST:
    |   |-DeclStmt 0x7fadfb837b10 <line:13:5, col:36>
    |   | `-VarDecl 0x7fadfb837a48 <col:5, col:19> col:14 y8 'uint8_t *' cinit
    ...
"""

theRegEx = r".*VarDecl.*uint8_t.*"

class Uint8:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        return str(len(re.findall(theRegEx, txtAST)))
