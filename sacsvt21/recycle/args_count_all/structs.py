from pathlib import Path
import re

"""
Example:
    struct st0
    {
        int x, y;
    } s1;

Clang AST:
    |   |-DeclStmt 0x7ff8ee096f48 <line:9:5, line:12:9>
    |   | |-RecordDecl 0x7ff8ee096d10 <line:9:5, line:12:5> line:9:12 struct st0 definition
    |   | | |-FieldDecl 0x7ff8ee096dd8 <line:11:9, col:13> col:13 x 'int'
    |   | | `-FieldDecl 0x7ff8ee096e38 <col:9, col:16> col:16 y 'int'
    |   | `-VarDecl 0x7ff8ee096ed0 <line:9:5, line:12:7> col:7 s1 'struct st0':'struct st0'
"""

theRegEx = r".*RecordDecl.*struct.*"

class Structs:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        return str(len(re.findall(theRegEx, txtAST)))
