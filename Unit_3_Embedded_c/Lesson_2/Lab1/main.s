
main.o:     file format elf32-littlearm


Disassembly of section .text:

00000000 <main>:
   0:	e92d4800 	push	{fp, lr}
   4:	e28db004 	add	fp, sp, #4
   8:	e59f0004 	ldr	r0, [pc, #4]	; 14 <main+0x14>
   c:	ebfffffe 	bl	0 <UART_SEND_STRING>
  10:	e8bd8800 	pop	{fp, pc}
  14:	00000000 	andeq	r0, r0, r0

Disassembly of section .data:

00000000 <Buffer>:
   0:	7261654c 	rsbvc	r6, r1, #76, 10	; 0x13000000
   4:	6e69206e 	cdpvs	0, 6, cr2, cr9, cr14, {3}
   8:	70654420 	rsbvc	r4, r5, r0, lsr #8
   c:	3c206874 	stccc	8, cr6, [r0], #-464	; 0xfffffe30
  10:	656d6841 	strbvs	r6, [sp, #-2113]!	; 0x841
  14:	61532064 	cmpvs	r3, r4, rrx
  18:	616d616c 	cmnvs	sp, ip, ror #2
  1c:	0000003e 	andeq	r0, r0, lr, lsr r0
	...

Disassembly of section .debug_info:

00000000 <.debug_info>:
   0:	00000068 	andeq	r0, r0, r8, rrx
   4:	00000002 	andeq	r0, r0, r2
   8:	01040000 	mrseq	r0, (UNDEF: 4)
   c:	00000069 	andeq	r0, r0, r9, rrx
  10:	00007501 	andeq	r7, r0, r1, lsl #10
	...
  1c:	00001800 	andeq	r1, r0, r0, lsl #16
  20:	00000000 	andeq	r0, r0, r0
  24:	8a010200 	bhi	40808 <main+0x40808>
  28:	01000000 	mrseq	r0, (UNDEF: 0)
  2c:	0000010f 	andeq	r0, r0, pc, lsl #2
  30:	00180000 	andseq	r0, r8, r0
  34:	00000000 	andeq	r0, r0, r0
  38:	03010000 	movweq	r0, #4096	; 0x1000
  3c:	00000052 	andeq	r0, r0, r2, asr r0
  40:	0000004b 	andeq	r0, r0, fp, asr #32
  44:	00004b04 	andeq	r4, r0, r4, lsl #22
  48:	05006300 	streq	r6, [r0, #-768]	; 0x300
  4c:	00590704 	subseq	r0, r9, r4, lsl #14
  50:	01050000 	mrseq	r0, (UNDEF: 5)
  54:	00007c08 	andeq	r7, r0, r8, lsl #24
  58:	00620600 	rsbeq	r0, r2, r0, lsl #12
  5c:	0d010000 	stceq	0, cr0, [r1, #-0]
  60:	0000003b 	andeq	r0, r0, fp, lsr r0
  64:	00030501 	andeq	r0, r3, r1, lsl #10
  68:	00000000 	andeq	r0, r0, r0

Disassembly of section .debug_abbrev:

00000000 <.debug_abbrev>:
   0:	25011101 	strcs	r1, [r1, #-257]	; 0x101
   4:	030b130e 	movweq	r1, #45838	; 0xb30e
   8:	110e1b0e 	tstne	lr, lr, lsl #22
   c:	10011201 	andne	r1, r1, r1, lsl #4
  10:	02000006 	andeq	r0, r0, #6
  14:	0c3f002e 	ldceq	0, cr0, [pc], #-184	; ffffff64 <main+0xffffff64>
  18:	0b3a0e03 	bleq	e8382c <main+0xe8382c>
  1c:	0c270b3b 	stceq	11, cr0, [r7], #-236	; 0xffffff14
  20:	01120111 	tsteq	r2, r1, lsl r1
  24:	42960640 	addsmi	r0, r6, #64, 12	; 0x4000000
  28:	0300000c 	movweq	r0, #12
  2c:	13490101 	movtne	r0, #37121	; 0x9101
  30:	00001301 	andeq	r1, r0, r1, lsl #6
  34:	49002104 	stmdbmi	r0, {r2, r8, sp}
  38:	000b2f13 	andeq	r2, fp, r3, lsl pc
  3c:	00240500 	eoreq	r0, r4, r0, lsl #10
  40:	0b3e0b0b 	bleq	f82c74 <main+0xf82c74>
  44:	00000e03 	andeq	r0, r0, r3, lsl #28
  48:	03003406 	movweq	r3, #1030	; 0x406
  4c:	3b0b3a0e 	blcc	2ce88c <main+0x2ce88c>
  50:	3f13490b 	svccc	0x0013490b
  54:	000a020c 	andeq	r0, sl, ip, lsl #4
	...

Disassembly of section .debug_loc:

00000000 <.debug_loc>:
   0:	00000000 	andeq	r0, r0, r0
   4:	00000004 	andeq	r0, r0, r4
   8:	007d0002 	rsbseq	r0, sp, r2
   c:	00000004 	andeq	r0, r0, r4
  10:	00000008 	andeq	r0, r0, r8
  14:	087d0002 	ldmdaeq	sp!, {r1}^
  18:	00000008 	andeq	r0, r0, r8
  1c:	00000018 	andeq	r0, r0, r8, lsl r0
  20:	047b0002 	ldrbteq	r0, [fp], #-2
	...

Disassembly of section .debug_aranges:

00000000 <.debug_aranges>:
   0:	0000001c 	andeq	r0, r0, ip, lsl r0
   4:	00000002 	andeq	r0, r0, r2
   8:	00040000 	andeq	r0, r4, r0
	...
  14:	00000018 	andeq	r0, r0, r8, lsl r0
	...

Disassembly of section .debug_line:

00000000 <.debug_line>:
   0:	00000034 	andeq	r0, r0, r4, lsr r0
   4:	001d0002 	andseq	r0, sp, r2
   8:	01020000 	mrseq	r0, (UNDEF: 2)
   c:	000d0efb 	strdeq	r0, [sp], -fp
  10:	01010101 	tsteq	r1, r1, lsl #2
  14:	01000000 	mrseq	r0, (UNDEF: 0)
  18:	00010000 	andeq	r0, r1, r0
  1c:	6e69616d 	powvsez	f6, f1, #5.0
  20:	0000632e 	andeq	r6, r0, lr, lsr #6
  24:	00000000 	andeq	r0, r0, r0
  28:	00000205 	andeq	r0, r0, r5, lsl #4
  2c:	0e030000 	cdpeq	0, 0, cr0, cr3, cr0, {0}
  30:	024b4c01 	subeq	r4, fp, #256	; 0x100
  34:	01010004 	tsteq	r1, r4

Disassembly of section .debug_str:

00000000 <.debug_str>:
   0:	4c5c3a46 	mrrcmi	10, 4, r3, ip, cr6
   4:	6e726165 	rpwvssz	f6, f2, f5
   8:	206e6920 	rsbcs	r6, lr, r0, lsr #18
   c:	74706544 	ldrbtvc	r6, [r0], #-1348	; 0x544
  10:	6f435c68 	svcvs	0x00435c68
  14:	676e6964 	strbvs	r6, [lr, -r4, ror #18]!
  18:	616c5020 	cmnvs	ip, r0, lsr #32
  1c:	655c6563 	ldrbvs	r6, [ip, #-1379]	; 0x563
  20:	6465626d 	strbtvs	r6, [r5], #-621	; 0x26d
  24:	2d646564 	cfstr64cs	mvdx6, [r4, #-400]!	; 0xfffffe70
  28:	74737973 	ldrbtvc	r7, [r3], #-2419	; 0x973
  2c:	6f2d6d65 	svcvs	0x002d6d65
  30:	6e696c6e 	cdpvs	12, 6, cr6, cr9, cr14, {3}
  34:	69642d65 	stmdbvs	r4!, {r0, r2, r5, r6, r8, sl, fp, sp}^
  38:	6d6f6c70 	stclvs	12, cr6, [pc, #-448]!	; fffffe80 <main+0xfffffe80>
  3c:	6e555c65 	cdpvs	12, 5, cr5, cr5, cr5, {3}
  40:	335f7469 	cmpcc	pc, #1761607680	; 0x69000000
  44:	626d455f 	rsbvs	r4, sp, #398458880	; 0x17c00000
  48:	65646465 	strbvs	r6, [r4, #-1125]!	; 0x465
  4c:	5c635f64 	stclpl	15, cr5, [r3], #-400	; 0xfffffe70
  50:	7373654c 	cmnvc	r3, #76, 10	; 0x13000000
  54:	325f6e6f 	subscc	r6, pc, #1776	; 0x6f0
  58:	7a697300 	bvc	1a5cc60 <main+0x1a5cc60>
  5c:	70797465 	rsbsvc	r7, r9, r5, ror #8
  60:	75420065 	strbvc	r0, [r2, #-101]	; 0x65
  64:	72656666 	rsbvc	r6, r5, #106954752	; 0x6600000
  68:	554e4700 	strbpl	r4, [lr, #-1792]	; 0x700
  6c:	34204320 	strtcc	r4, [r0], #-800	; 0x320
  70:	322e372e 	eorcc	r3, lr, #12058624	; 0xb80000
  74:	69616d00 	stmdbvs	r1!, {r8, sl, fp, sp, lr}^
  78:	00632e6e 	rsbeq	r2, r3, lr, ror #28
  7c:	69736e75 	ldmdbvs	r3!, {r0, r2, r4, r5, r6, r9, sl, fp, sp, lr}^
  80:	64656e67 	strbtvs	r6, [r5], #-3687	; 0xe67
  84:	61686320 	cmnvs	r8, r0, lsr #6
  88:	616d0072 	smcvs	53250	; 0xd002
  8c:	Address 0x0000008c is out of bounds.


Disassembly of section .comment:

00000000 <.comment>:
   0:	43434700 	movtmi	r4, #14080	; 0x3700
   4:	4728203a 			; <UNDEFINED> instruction: 0x4728203a
   8:	2029554e 	eorcs	r5, r9, lr, asr #10
   c:	2e372e34 	mrccs	14, 1, r2, cr7, cr4, {1}
  10:	Address 0x00000010 is out of bounds.


Disassembly of section .ARM.attributes:

00000000 <.ARM.attributes>:
   0:	00003141 	andeq	r3, r0, r1, asr #2
   4:	61656100 	cmnvs	r5, r0, lsl #2
   8:	01006962 	tsteq	r0, r2, ror #18
   c:	00000027 	andeq	r0, r0, r7, lsr #32
  10:	4d524105 	ldfmie	f4, [r2, #-20]	; 0xffffffec
  14:	45363239 	ldrmi	r3, [r6, #-569]!	; 0x239
  18:	00532d4a 	subseq	r2, r3, sl, asr #26
  1c:	01080506 	tsteq	r8, r6, lsl #10
  20:	04120109 	ldreq	r0, [r2], #-265	; 0x109
  24:	01150114 	tsteq	r5, r4, lsl r1
  28:	01180317 	tsteq	r8, r7, lsl r3
  2c:	011a0119 	tsteq	sl, r9, lsl r1
  30:	Address 0x00000030 is out of bounds.


Disassembly of section .debug_frame:

00000000 <.debug_frame>:
   0:	0000000c 	andeq	r0, r0, ip
   4:	ffffffff 			; <UNDEFINED> instruction: 0xffffffff
   8:	7c020001 	stcvc	0, cr0, [r2], {1}
   c:	000d0c0e 	andeq	r0, sp, lr, lsl #24
  10:	00000018 	andeq	r0, r0, r8, lsl r0
	...
  1c:	00000018 	andeq	r0, r0, r8, lsl r0
  20:	8b080e42 	blhi	203930 <main+0x203930>
  24:	42018e02 	andmi	r8, r1, #2, 28
  28:	00040b0c 	andeq	r0, r4, ip, lsl #22
