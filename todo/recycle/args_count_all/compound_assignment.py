from pathlib import Path
import re

"""
Example:
    c += 0;

Clang AST:
    |-CompoundAssignOperator 0x7fc180052b90 <line:18:2, col:7> 'int' '+=' ComputeLHSTy='int' ComputeResultTy='int'
    | |-DeclRefExpr 0x7fc180052b48 <col:2> 'int' lvalue Var 0x7fc1800384f0 'c' 'int'
    | `-IntegerLiteral 0x7fc180052b70 <col:7> 'int' 0
"""

theRegEx = r".*CompoundAssignOperator.*"

class CompoundAssignment:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        return str(len(re.findall(theRegEx, txtAST)))
