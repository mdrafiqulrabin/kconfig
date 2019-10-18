from pathlib import Path
import re

"""
Example:
    int num=13;
    if (num % 2 == 0)
        goto even; //jump
    else
        goto odd; //jump

    even:
        num=1;
    odd:
        num=0;

    for(int i=0; i<10;i++) {
        if (i==5) break; //jump
        else continue; //jump
    }

Clang AST:
    |   |-DeclStmt 0x7faa7b89b3a8 <line:7:5, col:15>
    |   | `-VarDecl 0x7faa7b89b328 <col:5, col:13> col:9 used num 'int' cinit
    |   |   `-IntegerLiteral 0x7faa7b89b388 <col:13> 'int' 13
    |   |-IfStmt 0x7faa7b89b550 <line:8:5, line:11:10>
    |   | |-<<<NULL>>>
    |   | |-<<<NULL>>>
    |   | |-BinaryOperator 0x7faa7b89b468 <line:8:9, col:20> 'int' '=='
    |   | | |-BinaryOperator 0x7faa7b89b420 <col:9, col:15> 'int' '%'
    |   | | | |-ImplicitCastExpr 0x7faa7b89b408 <col:9> 'int' <LValueToRValue>
    |   | | | | `-DeclRefExpr 0x7faa7b89b3c0 <col:9> 'int' lvalue Var 0x7faa7b89b328 'num' 'int'
    |   | | | `-IntegerLiteral 0x7faa7b89b3e8 <col:15> 'int' 2
    |   | | `-IntegerLiteral 0x7faa7b89b448 <col:20> 'int' 0
    |   | |-GotoStmt 0x7faa7b89b4d8 <line:9:5, col:10> 'even' 0x7faa7b89b490
    |   | `-GotoStmt 0x7faa7b89b538 <line:11:5, col:10> 'odd' 0x7faa7b89b4f0
    |   |-LabelStmt 0x7faa7b89b5f8 <line:13:5, line:14:13> 'even'
    |   | `-BinaryOperator 0x7faa7b89b5d0 <col:9, col:13> 'int' '='
    |   |   |-DeclRefExpr 0x7faa7b89b588 <col:9> 'int' lvalue Var 0x7faa7b89b328 'num' 'int'
    |   |   `-IntegerLiteral 0x7faa7b89b5b0 <col:13> 'int' 1
    |   |-LabelStmt 0x7faa7b89b680 <line:15:5, line:16:13> 'odd'
    |   | `-BinaryOperator 0x7faa7b89b658 <col:9, col:13> 'int' '='
    |   |   |-DeclRefExpr 0x7faa7b89b610 <col:9> 'int' lvalue Var 0x7faa7b89b328 'num' 'int'
    |   |   `-IntegerLiteral 0x7faa7b89b638 <col:13> 'int' 0
    |   |-ForStmt 0x7faa7b89b900 <line:18:5, line:21:5>
    |   | |-DeclStmt 0x7faa7b89b730 <line:18:9, col:16>
    |   | | `-VarDecl 0x7faa7b89b6b0 <col:9, col:15> col:13 used i 'int' cinit
    |   | |   `-IntegerLiteral 0x7faa7b89b710 <col:15> 'int' 0
    |   | |-<<<NULL>>>
    |   | |-BinaryOperator 0x7faa7b89b7a8 <col:18, col:20> 'int' '<'
    |   | | |-ImplicitCastExpr 0x7faa7b89b790 <col:18> 'int' <LValueToRValue>
    |   | | | `-DeclRefExpr 0x7faa7b89b748 <col:18> 'int' lvalue Var 0x7faa7b89b6b0 'i' 'int'
    |   | | `-IntegerLiteral 0x7faa7b89b770 <col:20> 'int' 10
    |   | |-UnaryOperator 0x7faa7b89b7f8 <col:23, col:24> 'int' postfix '++'
    |   | | `-DeclRefExpr 0x7faa7b89b7d0 <col:23> 'int' lvalue Var 0x7faa7b89b6b0 'i' 'int'
    |   | `-CompoundStmt 0x7faa7b89b8e8 <col:28, line:21:5>
    |   |   `-IfStmt 0x7faa7b89b8b0 <line:19:9, line:20:14>
    |   |     |-<<<NULL>>>
    |   |     |-<<<NULL>>>
    |   |     |-BinaryOperator 0x7faa7b89b878 <line:19:13, col:16> 'int' '=='
    |   |     | |-ImplicitCastExpr 0x7faa7b89b860 <col:13> 'int' <LValueToRValue>
    |   |     | | `-DeclRefExpr 0x7faa7b89b818 <col:13> 'int' lvalue Var 0x7faa7b89b6b0 'i' 'int'
    |   |     | `-IntegerLiteral 0x7faa7b89b840 <col:16> 'int' 5
    |   |     |-BreakStmt 0x7faa7b89b8a0 <col:19>
    |   |     `-ContinueStmt 0x7faa7b89b8a8 <line:20:14>
"""

theRegEx = r"(.*GotoStmt.*|.*BreakStmt.*|.*ContinueStmt.*)"

class Jumps:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        return str(len(re.findall(theRegEx, txtAST)))
