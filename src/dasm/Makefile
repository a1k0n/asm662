CXX     = c++
CC      = cc
PERL    = perl
LDFLAGS = -g
CFLAGS  = -g

OBJS    = dasm.o dasmout.o op.o

dasm662: $(OBJS)
	$(CXX) $(LDFLAGS) -o dasm662 $(OBJS)

.cpp.o:
	$(CXX) $(CFLAGS) -c $<

op.o: op.c
	$(CC) $(CFLAGS) -c -o op.o op.c

op.c: ../66207.op opcode.pl
	$(PERL) opcode.pl >op.c

clean: op.c
	rm -f dasm662 $(OBJS)

dasm.o: ../66207_regs.h
