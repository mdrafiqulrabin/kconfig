from pathlib import Path
import re

"""
Example:
    struct st0
    {
        int x, y;
    } s1;
    
Clang AST:
    |   |-DeclStmt 0x7ff8ee097198 <line:13:5, line:16:9>
    |   | |-RecordDecl 0x7ff8ee096f60 <line:13:5, line:16:5> line:13:11 union un0 definition
    |   | | |-FieldDecl 0x7ff8ee097028 <line:14:9, col:13> col:13 x 'int'
    |   | | `-FieldDecl 0x7ff8ee097088 <line:15:9, col:13> col:13 y 'int'
    |   | `-VarDecl 0x7ff8ee097120 <line:13:5, line:16:7> col:7 u1 'union un0':'union un0'
    """

theRegEx = r".*RecordDecl.*union.*"

class Unions:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        return str(len(re.findall(theRegEx, txtAST)))
