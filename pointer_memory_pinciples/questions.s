
questions:	file format mach-o arm64

Disassembly of section __TEXT,__text:

0000000100003f0c <_main>:
100003f0c: ff 83 00 d1 	sub	sp, sp, #32
100003f10: fd 7b 01 a9 	stp	x29, x30, [sp, #16]
100003f14: fd 43 00 91 	add	x29, sp, #16
100003f18: 08 00 80 52 	mov	w8, #0
100003f1c: e8 0b 00 b9 	str	w8, [sp, #8]
100003f20: bf c3 1f b8 	stur	wzr, [x29, #-4]
100003f24: 03 00 00 94 	bl	0x100003f30 <_question_one>
100003f28: e0 0b 40 b9 	ldr	w0, [sp, #8]
100003f2c: 18 00 00 94 	bl	0x100003f8c <_printf+0x100003f8c>

0000000100003f30 <_question_one>:
100003f30: ff c3 00 d1 	sub	sp, sp, #48
100003f34: fd 7b 02 a9 	stp	x29, x30, [sp, #32]
100003f38: fd 83 00 91 	add	x29, sp, #32
100003f3c: a8 13 00 d1 	sub	x8, x29, #4
100003f40: e8 0b 00 f9 	str	x8, [sp, #16]
100003f44: 48 01 80 52 	mov	w8, #10
100003f48: a8 c3 1f b8 	stur	w8, [x29, #-4]
100003f4c: a9 c3 5f b8 	ldur	w9, [x29, #-4]
100003f50: e8 03 09 aa 	mov	x8, x9
100003f54: 00 00 00 90 	adrp	x0, 0x100003000 <_question_one+0x24>
100003f58: 00 90 3e 91 	add	x0, x0, #4004
100003f5c: e9 03 00 91 	mov	x9, sp
100003f60: 28 01 00 f9 	str	x8, [x9]
100003f64: 0d 00 00 94 	bl	0x100003f98 <_printf+0x100003f98>
100003f68: e8 0b 40 f9 	ldr	x8, [sp, #16]
100003f6c: 00 00 00 90 	adrp	x0, 0x100003000 <_question_one+0x3c>
100003f70: 00 b0 3e 91 	add	x0, x0, #4012
100003f74: e9 03 00 91 	mov	x9, sp
100003f78: 28 01 00 f9 	str	x8, [x9]
100003f7c: 07 00 00 94 	bl	0x100003f98 <_printf+0x100003f98>
100003f80: fd 7b 42 a9 	ldp	x29, x30, [sp, #32]
100003f84: ff c3 00 91 	add	sp, sp, #48
100003f88: c0 03 5f d6 	ret

Disassembly of section __TEXT,__stubs:

0000000100003f8c <__stubs>:
100003f8c: 10 00 00 b0 	adrp	x16, 0x100004000 <__stubs+0x4>
100003f90: 10 02 40 f9 	ldr	x16, [x16]
100003f94: 00 02 1f d6 	br	x16
100003f98: 10 00 00 b0 	adrp	x16, 0x100004000 <__stubs+0x10>
100003f9c: 10 06 40 f9 	ldr	x16, [x16, #8]
100003fa0: 00 02 1f d6 	br	x16
