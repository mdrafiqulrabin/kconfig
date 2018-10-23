import sys
from pycparser import c_parser

src_file = sys.argv[1]
if (not src_file.endswith(".c")):
    sys.exit()

text_code = ""
with open(src_file) as rd_file:
    text_code = rd_file.read()

parser = c_parser.CParser()
ast = parser.parse(text_code, filename='<none>')
ast.show()
