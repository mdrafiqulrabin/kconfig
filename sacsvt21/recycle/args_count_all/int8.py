from pathlib import Path
import re

"""
Example:
    int8_t *x8 = "Hello, World!\n";

Clang AST:
    |   |-DeclStmt 0x7fadfb8379c0 <line:12:5, col:35>
    |   | `-VarDecl 0x7fadfb8378b8 <col:5, col:18> col:13 x8 'int8_t *' cinit
    ...
"""

theRegEx = r"(?!.*uint8_t).*VarDecl.*int8_t.*"

class Int8:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        return str(len(re.findall(theRegEx, txtAST)))
