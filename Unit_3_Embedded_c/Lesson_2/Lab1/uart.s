
uart.o:     file format elf32-littlearm


Disassembly of section .text:

00000000 <UART_SEND_STRING>:
   0:	e52db004 	push	{fp}		; (str fp, [sp, #-4]!)
   4:	e28db000 	add	fp, sp, #0
   8:	e24dd00c 	sub	sp, sp, #12
   c:	e50b0008 	str	r0, [fp, #-8]
  10:	ea000006 	b	30 <UART_SEND_STRING+0x30>
  14:	e59f3030 	ldr	r3, [pc, #48]	; 4c <UART_SEND_STRING+0x4c>
  18:	e51b2008 	ldr	r2, [fp, #-8]
  1c:	e5d22000 	ldrb	r2, [r2]
  20:	e5832000 	str	r2, [r3]
  24:	e51b3008 	ldr	r3, [fp, #-8]
  28:	e2833001 	add	r3, r3, #1
  2c:	e50b3008 	str	r3, [fp, #-8]
  30:	e51b3008 	ldr	r3, [fp, #-8]
  34:	e5d33000 	ldrb	r3, [r3]
  38:	e3530000 	cmp	r3, #0
  3c:	1afffff4 	bne	14 <UART_SEND_STRING+0x14>
  40:	e28bd000 	add	sp, fp, #0
  44:	e8bd0800 	ldmfd	sp!, {fp}
  48:	e12fff1e 	bx	lr
  4c:	101f1000 	andsne	r1, pc, r0

Disassembly of section .debug_info:

00000000 <.debug_info>:
   0:	0000005d 	andeq	r0, r0, sp, asr r0
   4:	00000002 	andeq	r0, r0, r2
   8:	01040000 	mrseq	r0, (UNDEF: 4)
   c:	00000073 	andeq	r0, r0, r3, ror r0
  10:	00007f01 	andeq	r7, r0, r1, lsl #30
  14:	00001100 	andeq	r1, r0, r0, lsl #2
  18:	00000000 	andeq	r0, r0, r0
  1c:	00005000 	andeq	r5, r0, r0
  20:	00000000 	andeq	r0, r0, r0
  24:	00010200 	andeq	r0, r1, r0, lsl #4
  28:	01000000 	mrseq	r0, (UNDEF: 0)
  2c:	0000010d 	andeq	r0, r0, sp, lsl #2
  30:	00500000 	subseq	r0, r0, r0
  34:	00000000 	andeq	r0, r0, r0
  38:	4e010000 	cdpmi	0, 0, cr0, cr1, cr0, {0}
  3c:	03000000 	movweq	r0, #0
  40:	0000006a 	andeq	r0, r0, sl, rrx
  44:	004e0d01 	subeq	r0, lr, r1, lsl #26
  48:	91020000 	mrsls	r0, (UNDEF: 2)
  4c:	04040074 	streq	r0, [r4], #-116	; 0x74
  50:	00000054 	andeq	r0, r0, r4, asr r0
  54:	00005905 	andeq	r5, r0, r5, lsl #18
  58:	08010600 	stmdaeq	r1, {r9, sl}
  5c:	00000086 	andeq	r0, r0, r6, lsl #1
	...

Disassembly of section .debug_abbrev:

00000000 <.debug_abbrev>:
   0:	25011101 	strcs	r1, [r1, #-257]	; 0x101
   4:	030b130e 	movweq	r1, #45838	; 0xb30e
   8:	110e1b0e 	tstne	lr, lr, lsl #22
   c:	10011201 	andne	r1, r1, r1, lsl #4
  10:	02000006 	andeq	r0, r0, #6
  14:	0c3f012e 	ldfeqs	f0, [pc], #-184	; ffffff64 <UART_SEND_STRING+0xffffff64>
  18:	0b3a0e03 	bleq	e8382c <UART_SEND_STRING+0xe8382c>
  1c:	0c270b3b 	stceq	11, cr0, [r7], #-236	; 0xffffff14
  20:	01120111 	tsteq	r2, r1, lsl r1
  24:	42970640 	addsmi	r0, r7, #64, 12	; 0x4000000
  28:	0013010c 	andseq	r0, r3, ip, lsl #2
  2c:	00050300 	andeq	r0, r5, r0, lsl #6
  30:	0b3a0e03 	bleq	e83844 <UART_SEND_STRING+0xe83844>
  34:	13490b3b 	movtne	r0, #39739	; 0x9b3b
  38:	00000a02 	andeq	r0, r0, r2, lsl #20
  3c:	0b000f04 	bleq	3c54 <UART_SEND_STRING+0x3c54>
  40:	0013490b 	andseq	r4, r3, fp, lsl #18
  44:	00260500 	eoreq	r0, r6, r0, lsl #10
  48:	00001349 	andeq	r1, r0, r9, asr #6
  4c:	0b002406 	bleq	906c <UART_SEND_STRING+0x906c>
  50:	030b3e0b 	movweq	r3, #48651	; 0xbe0b
  54:	0000000e 	andeq	r0, r0, lr

Disassembly of section .debug_loc:

00000000 <.debug_loc>:
   0:	00000000 	andeq	r0, r0, r0
   4:	00000004 	andeq	r0, r0, r4
   8:	007d0002 	rsbseq	r0, sp, r2
   c:	00000004 	andeq	r0, r0, r4
  10:	00000008 	andeq	r0, r0, r8
  14:	047d0002 	ldrbteq	r0, [sp], #-2
  18:	00000008 	andeq	r0, r0, r8
  1c:	00000050 	andeq	r0, r0, r0, asr r0
  20:	047b0002 	ldrbteq	r0, [fp], #-2
	...

Disassembly of section .debug_aranges:

00000000 <.debug_aranges>:
   0:	0000001c 	andeq	r0, r0, ip, lsl r0
   4:	00000002 	andeq	r0, r0, r2
   8:	00040000 	andeq	r0, r4, r0
	...
  14:	00000050 	andeq	r0, r0, r0, asr r0
	...

Disassembly of section .debug_line:

00000000 <.debug_line>:
   0:	0000003b 	andeq	r0, r0, fp, lsr r0
   4:	001d0002 	andseq	r0, sp, r2
   8:	01020000 	mrseq	r0, (UNDEF: 2)
   c:	000d0efb 	strdeq	r0, [sp], -fp
  10:	01010101 	tsteq	r1, r1, lsl #2
  14:	01000000 	mrseq	r0, (UNDEF: 0)
  18:	00010000 	andeq	r0, r1, r0
  1c:	74726175 	ldrbtvc	r6, [r2], #-373	; 0x175
  20:	0000632e 	andeq	r6, r0, lr, lsr #6
  24:	00000000 	andeq	r0, r0, r0
  28:	00000205 	andeq	r0, r0, r5, lsl #4
  2c:	0c030000 	stceq	0, cr0, [r3], {-0}
  30:	842f8401 	strthi	r8, [pc], #-1025	; 38 <.debug_line+0x38>
  34:	01040200 	mrseq	r0, R12_usr
  38:	08028763 	stmdaeq	r2, {r0, r1, r5, r6, r8, r9, sl, pc}
  3c:	Address 0x0000003c is out of bounds.


Disassembly of section .debug_str:

00000000 <.debug_str>:
   0:	54524155 	ldrbpl	r4, [r2], #-341	; 0x155
   4:	4e45535f 	mcrmi	3, 2, r5, cr5, cr15, {2}
   8:	54535f44 	ldrbpl	r5, [r3], #-3908	; 0xf44
   c:	474e4952 	smlsldmi	r4, lr, r2, r9
  10:	5c3a4600 	ldcpl	6, cr4, [sl], #-0
  14:	7261654c 	rsbvc	r6, r1, #76, 10	; 0x13000000
  18:	6e69206e 	cdpvs	0, 6, cr2, cr9, cr14, {3}
  1c:	70654420 	rsbvc	r4, r5, r0, lsr #8
  20:	435c6874 	cmpmi	ip, #116, 16	; 0x740000
  24:	6e69646f 	cdpvs	4, 6, cr6, cr9, cr15, {3}
  28:	6c502067 	mrrcvs	0, 6, r2, r0, cr7
  2c:	5c656361 	stclpl	3, cr6, [r5], #-388	; 0xfffffe7c
  30:	65626d65 	strbvs	r6, [r2, #-3429]!	; 0xd65
  34:	64656464 	strbtvs	r6, [r5], #-1124	; 0x464
  38:	7379732d 	cmnvc	r9, #-1275068416	; 0xb4000000
  3c:	2d6d6574 	cfstr64cs	mvdx6, [sp, #-464]!	; 0xfffffe30
  40:	696c6e6f 	stmdbvs	ip!, {r0, r1, r2, r3, r5, r6, r9, sl, fp, sp, lr}^
  44:	642d656e 	strtvs	r6, [sp], #-1390	; 0x56e
  48:	6f6c7069 	svcvs	0x006c7069
  4c:	555c656d 	ldrbpl	r6, [ip, #-1389]	; 0x56d
  50:	5f74696e 	svcpl	0x0074696e
  54:	6d455f33 	stclvs	15, cr5, [r5, #-204]	; 0xffffff34
  58:	64646562 	strbtvs	r6, [r4], #-1378	; 0x562
  5c:	635f6465 	cmpvs	pc, #1694498816	; 0x65000000
  60:	73654c5c 	cmnvc	r5, #92, 24	; 0x5c00
  64:	5f6e6f73 	svcpl	0x006e6f73
  68:	5f500032 	svcpl	0x00500032
  6c:	69727453 	ldmdbvs	r2!, {r0, r1, r4, r6, sl, ip, sp, lr}^
  70:	4700676e 	strmi	r6, [r0, -lr, ror #14]
  74:	4320554e 	teqmi	r0, #327155712	; 0x13800000
  78:	372e3420 	strcc	r3, [lr, -r0, lsr #8]!
  7c:	7500322e 	strvc	r3, [r0, #-558]	; 0x22e
  80:	2e747261 	cdpcs	2, 7, cr7, cr4, cr1, {3}
  84:	68630063 	stmdavs	r3!, {r0, r1, r5, r6}^
  88:	Address 0x00000088 is out of bounds.


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
  10:	00000014 	andeq	r0, r0, r4, lsl r0
	...
  1c:	00000050 	andeq	r0, r0, r0, asr r0
  20:	8b040e42 	blhi	103930 <UART_SEND_STRING+0x103930>
  24:	0b0d4201 	bleq	350830 <UART_SEND_STRING+0x350830>
