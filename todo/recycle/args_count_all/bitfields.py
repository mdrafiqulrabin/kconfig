from pathlib import Path
import re

"""
Example:
    struct bitfs {
        unsigned int a : 1;
    };
    
Clang AST:
    | `-RecordDecl 0x7fc02a0bd208 <line:14:5, line:16:5> line:14:12 struct bitfs definition
    |   `-FieldDecl 0x7fc02a0bd2e8 <line:15:9, col:26> col:22 a 'unsigned int'
    |     `-IntegerLiteral 0x7fc02a0bd2b0 <col:26> 'int' 1
"""

theRegEx = r".*FieldDecl.*[\r\n]+(.*IntegerLiteral.*[^\r\n]+)"

class Bitfields:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        return str(len(re.findall(theRegEx, txtAST)))
