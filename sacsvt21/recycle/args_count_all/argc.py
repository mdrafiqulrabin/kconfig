from pathlib import Path
import re

"""
Example:
    int main(int argc, char* argv[])

Clang AST:
    `-FunctionDecl 0x7fa85880a1c8 <line:11:1, line:83:1> line:11:5 main 'int (int, char **)'
        |-ParmVarDecl 0x7fa858809fc8 <col:10, col:14> col:14 argc 'int'
        ...
"""

theRegEx = r"(.*FunctionDecl.*main.*[\r\n]+)(.*ParmVarDecl.*[^\r\n]+)"

class Argc:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        if len(re.findall(theRegEx, txtAST)) > 0:
            return str("1")
        else:
            return str("0")
