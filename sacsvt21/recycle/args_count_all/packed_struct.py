from pathlib import Path
import re

"""
Example:
    struct pkfoo {
        char a;
    } __attribute__((__packed__));
    
    #pragma pack(push, 1)
    
        //Structure 1
        ......
        
        //Structure 2
        ......
    
    #pragma pack(pop)

Clang AST:
    |   |-DeclStmt 0x7fb3fd065d30 <line:11:5, line:13:34>
    |   | `-RecordDecl 0x7fb3fd065be8 <line:11:5, line:13:5> line:11:12 struct pkfoo definition
    |   |   |-PackedAttr 0x7fb3fd065ce8 <line:13:22>
    |   |   `-FieldDecl 0x7fb3fd065ca0 <line:12:9, col:14> col:14 a 'char'
"""

theRegEx = r".*RecordDecl.*[\r\n]+(.*PackedAttr.*[^\r\n]+)"
theregEx = r"(.*(pragma\s+pack|attribute.*packed).*)"

class PackedStruct:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        return str(len(re.findall(theRegEx, txtAST)))
