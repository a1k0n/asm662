CC   = cc
CXX  = c++
LEX  = flex
YACC = yacc
PERL = perl

CFLAGS  = -g -O2 -Wall
LDFLAGS = -g

all: asm/asm662 dasm/dasm662

asm/asm662::
	cd asm; $(MAKE)

dasm/dasm662::
	cd dasm; $(MAKE)

clean::
	cd asm; $(MAKE) clean; cd ../dasm; $(MAKE) clean
