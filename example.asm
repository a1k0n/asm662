				; this is a comment - the semicolon and the rest of the line 
; following it is ignored.
				org 0000h           ; org <number> - sets the origin
									; address for the code
				dw      int_start   ; dw - inserts a list of 16-bit words
				db      0ffh,0ffh   ; db - inserts a list of bytes

				org 0038h
int_start:      l       a, #(stuff&0xf0f0)  ; we can use any expression for
				l       a, #(stuff^0xffff)  ; the immediate value here.
				l       a, table
				MoV     x1, A  ; this assembler is case-insensitive
				st      a, stuff&0xff[x1]   ; or for the index here.
				sj      $  ; as explained above, this is an infinite loop

; equates have the form <symbol> equ <value expression>
stuff           equ     ((1<<4)|(0xfff>>2))*113
; due to a quirk of multipass assemblers, you can do things like
npasses         equ     npasses+1

; labels of the form <labelname>: are equivalent to <labelname> equ $
table:          dw      stuff, npasses

