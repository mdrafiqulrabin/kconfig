import glob
from pathlib import Path

from argc import Argc
from arrays import Arrays
from bitfields import Bitfields
from compound_assignment import CompoundAssignment
from consts import Consts
from divs import Divs
from pre_incr_operator import PreIncrOperator
from pre_decr_operator import PreDecrOperator
from post_incr_operator import PostIncrOperator
from post_decr_operator import PostDecrOperator
from unary_plus_operator import UnaryPlusOperator
from jumps import Jumps
from longlong import LongLong
from int8 import Int8
from uint8 import Uint8
from float import Float
from inline_function import InlineFunction
from muls import Muls
from packed_struct import PackedStruct
from paranoid import Paranoid
from pointers import Pointers
from structs import Structs
from unions import Unions
from volatiles import Volatiles
from volatile_pointers import VolatilePointers
from const_pointers import ConstPointers
from global_variables import GlobalVariables
from builtins import Builtins


pathAST = "../Data/Sample/*csmith.ast"
rootAST = "TranslationUnitDecl"

for file in glob.glob(pathAST):
    print("argc = ", Argc(file).getCount())
    print("arrays = ", Arrays(file).getCount())
    print("bitfields = ", Bitfields(file).getCount())
    print("compound-assignment = ", CompoundAssignment(file).getCount())
    print("consts [*] = ", Consts(file).getCount())
    print("divs = ", Divs(file).getCount())
    print("pre_incr_operator = ", PreIncrOperator(file).getCount())
    print("pre_decr_operator = ", PreDecrOperator(file).getCount())
    print("post_incr_operator = ", PostIncrOperator(file).getCount())
    print("post_decr_operator = ", PostDecrOperator(file).getCount())
    print("unary_plus_operator = ", UnaryPlusOperator(file).getCount())
    print("jumps = ", Jumps(file).getCount())
    print("longlong = ", LongLong(file).getCount())
    print("int8 = ", Int8(file).getCount())
    print("uint8 = ", Uint8(file).getCount())
    print("float = ", Float(file).getCount())
    print("inline_function = ", InlineFunction(file).getCount())
    print("muls = ", Muls(file).getCount())
    print("packed_struct = ", PackedStruct(file).getCount())
    print("paranoid = ", Paranoid(file).getCount())
    print("pointers [*] = ", Pointers(file).getCount())
    print("structs = ", Structs(file).getCount())
    print("unions = ", Unions(file).getCount())
    print("volatiles = ", Volatiles(file).getCount())
    print("volatile_pointers = ", VolatilePointers(file).getCount())
    print("const_pointers [*] = ", ConstPointers(file).getCount())
    print("builtins [*] = ", Builtins(file).getCount())
