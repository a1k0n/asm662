SOURCES = ssa.mli ssa.ml arch.mli arch.ml opcode.mli opcode.ml decomp.ml
RESULT  = decomp

all: opcode.ml debug-code

opcode.ml: op.ml opcode.pl 66207.op
	perl opcode.pl

-include OCamlMakefile

