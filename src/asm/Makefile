CC   = cc
CXX  = c++
LEX  = flex
YACC = yacc
OBJS = main.o lex.yy.o y.tab.o sym.o
CFLAGS = -g -O2 -Wall
LDFLAGS = -g

asm662: $(OBJS)
	$(CXX) $(LDFLAGS) -o asm662 $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

.cpp.o:
	$(CXX) $(CFLAGS) -o $@ -c $<

asm662.l: asm662_top.l opcode.l asm662_bot.l
	cat asm662_top.l opcode.l asm662_bot.l >asm662.l

asm662.y: asm662_1.y tokens.y asm662_2.y instrs.y
	cat asm662_1.y tokens.y asm662_2.y instrs.y >asm662.y

opcode.l: gen_opcode.pl ../66207.op
	perl gen_opcode.pl

lex.yy.c: asm662.l y.tab.c
	$(LEX) -i asm662.l

y.tab.c: asm662.y
	$(YACC) -d asm662.y

clean:
	rm -f asm662 $(OBJS) opcode.l tokens.y instrs.y asm662.l asm662.y
