### Compilation Process (System Programmers View)

* hello.c

Compilation

Preprocessor

* gcc -E hello.c 1>hello.i

Compiler

* gcc -S hello.i

Assembler

* gcc -c hello.s

Linker

* gcc hello.o -o dynamicexe -lc
* gcc hello.o -o staticexe -lc --static


