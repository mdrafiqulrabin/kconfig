// Save all files name to a file:
$ ls > allcfiles.txt

// Dump ast using clang
$ clang -Xclang -ast-dump -fsyntax-only "in.c" &> "out.c.ast"

// Run shell script
$ chmod +x dump_ast.sh
$ ./dump_ast.sh
