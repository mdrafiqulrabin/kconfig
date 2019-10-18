from pathlib import Path
import re

"""
Example:
    void user_defined() {}
    int mian() {
        user_defined();
        printf("builtins");
    }

Clang AST:
    |-FunctionDecl 0x7f9c7a041000 <sample.c:2:1, col:22> col:6 used user_defined 'void ()'
    | `-CompoundStmt 0x7f9c7a0410e0 <col:21, col:22>
    |-FunctionDecl 0x7f9c7a041140 <line:4:1, line:7:1> line:4:5 mian 'int ()'
    | `-CompoundStmt 0x7f9c7a041550 <col:12, line:7:1>
    |   |-CallExpr 0x7f9c7a041250 <line:5:5, col:18> 'void'
    |   | `-ImplicitCastExpr 0x7f9c7a041238 <col:5> 'void (*)()' <FunctionToPointerDecay>
    |   |   `-DeclRefExpr 0x7f9c7a0411e0 <col:5> 'void ()' Function 0x7f9c7a041000 'user_defined' 'void ()'
    |   `-CallExpr 0x7f9c7a0414f0 <line:6:5, col:22> 'int'
    |     |-ImplicitCastExpr 0x7f9c7a0414d8 <col:5> 'int (*)(const char *, ...)' <FunctionToPointerDecay>
    |     | `-DeclRefExpr 0x7f9c7a041418 <col:5> 'int (const char *, ...)' Function 0x7f9c7a0412b8 'printf' 'int (const char *, ...)'
    |     `-ImplicitCastExpr 0x7f9c7a041538 <col:12> 'const char *' <BitCast>
    |       `-ImplicitCastExpr 0x7f9c7a041520 <col:12> 'char *' <ArrayToPointerDecay>
    |         `-StringLiteral 0x7f9c7a041478 <col:12> 'char [9]' lvalue "builtins"
    `-FunctionDecl 0x7f9c7a0412b8 <col:5> col:5 implicit used printf 'int (const char *, ...)' extern
    |-ParmVarDecl 0x7f9c7a041358 <<invalid sloc>> <invalid sloc> 'const char *'
    `-FormatAttr 0x7f9c7a0413c0 <col:5> Implicit printf 1 2
"""

theRegEx = r".*FunctionDecl.*implicit.*extern.*"

class Builtins:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        return str(len(re.findall(theRegEx, txtAST)))
