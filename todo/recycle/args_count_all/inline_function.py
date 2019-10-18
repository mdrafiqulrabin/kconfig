from pathlib import Path
import re

"""
Example:
    inline int square(int s)
    {
        return s*s;
    }

Clang AST:
    |-FunctionDecl 0x7ff89f892508 <line:4:1, line:7:1> line:4:12 used square 'int (int)' inline
    ...
"""

theRegEx = r".*FunctionDecl.*inline.*"

class InlineFunction:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        return str(len(re.findall(theRegEx, txtAST)))
