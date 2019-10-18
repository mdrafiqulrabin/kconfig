from pathlib import Path
import re

"""
Example:
    u = u * 4;

Clang AST:
    |   |-BinaryOperator 0x7fb3fd065bc0 <line:8:5, col:9> 'int' '='
    |   | |-DeclRefExpr 0x7fb3fd065b10 <col:5> 'int' lvalue Var 0x7fb3fd0658b0 'u' 'int'
    |   | `-BinaryOperator 0x7fb3fd065b98 <col:7, col:9> 'int' '*'
    |   |   |-ImplicitCastExpr 0x7fb3fd065b80 <col:7> 'int' <LValueToRValue>
    |   |   | `-DeclRefExpr 0x7fb3fd065b38 <col:7> 'int' lvalue Var 0x7fb3fd0658b0 'u' 'int'
    |   |   `-IntegerLiteral 0x7fb3fd065b60 <col:9> 'int' 4
"""

theRegEx = r".*BinaryOperator.*'\*'.*"

class Muls:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        return str(len(re.findall(theRegEx, txtAST)))
