from pathlib import Path
import re

"""
Example:
    c = c / 10;

Clang AST:
    | `-BinaryOperator 0x7fdbf50d7b80 <col:9, col:13> 'int' '/'
    |   |-ImplicitCastExpr 0x7fdbf50d7b68 <col:9> 'int' <LValueToRValue>
    |   | `-DeclRefExpr 0x7fdbf50d7b20 <col:9> 'int' lvalue Var 0x7fdbf48274f0 'c' 'int'
    |   `-IntegerLiteral 0x7fdbf50d7b48 <col:13> 'int' 10
"""

theRegEx = r".*BinaryOperator.*'\/'.*"

class Divs:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        return str(len(re.findall(theRegEx, txtAST)))
