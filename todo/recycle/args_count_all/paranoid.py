from pathlib import Path
import re

"""
Example:
    int *p;
    assert (p != 0);

Clang AST:
    |   |-CallExpr 0x7f89a58415b0 <line:10:5, col:19> 'int'
    |   | |-ImplicitCastExpr 0x7f89a5841598 <col:5> 'int (*)()' <FunctionToPointerDecay>
    |   | | `-DeclRefExpr 0x7f89a58414a0 <col:5> 'int ()' Function 0x7f89a58413f0 'assert' 'int ()'
    |   | `-BinaryOperator 0x7f89a5841540 <col:13, col:18> 'int' '!='
    |   |   |-ImplicitCastExpr 0x7f89a5841510 <col:13> 'int *' <LValueToRValue>
    |   |   | `-DeclRefExpr 0x7f89a58414c8 <col:13> 'int *' lvalue Var 0x7f89a5841350 'p' 'int *'
    |   |   `-ImplicitCastExpr 0x7f89a5841528 <col:18> 'int *' <NullToPointer>
    |   |     `-IntegerLiteral 0x7f89a58414f0 <col:18> 'int' 0
"""

theRegEx = r"(.*DeclRefExpr.*Function.*assert.*[\r\n]+)(.*[\r\n])*(.*DeclRefExpr.*Var.*\*.*[^\r\n]+)"

class Paranoid:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        return str(len(re.findall(theRegEx, txtAST)))
