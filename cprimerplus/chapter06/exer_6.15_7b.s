
exer_6.15_7b:	file format mach-o arm64

Disassembly of section __TEXT,__text:

0000000100003f10 <_main>:
100003f10: ff c3 00 d1 	sub	sp, sp, #48
100003f14: fd 7b 02 a9 	stp	x29, x30, [sp, #32]
100003f18: fd 83 00 91 	add	x29, sp, #32
100003f1c: bf c3 1f b8 	stur	wzr, [x29, #-4]
100003f20: bf 83 1f b8 	stur	wzr, [x29, #-8]
100003f24: 28 08 80 52 	mov	w8, #65
100003f28: a8 73 1f 38 	sturb	w8, [x29, #-9]
100003f2c: 01 00 00 14 	b	0x100003f30 <_main+0x20>
100003f30: a8 83 5f b8 	ldur	w8, [x29, #-8]
100003f34: 08 11 00 71 	subs	w8, w8, #4
100003f38: 8a 02 00 54 	b.ge	0x100003f88 <_main+0x78>
100003f3c: 01 00 00 14 	b	0x100003f40 <_main+0x30>
100003f40: aa 73 df 38 	ldursb	w10, [x29, #-9]
100003f44: 00 00 00 90 	adrp	x0, 0x100003000 <_main+0x34>
100003f48: 00 c0 3e 91 	add	x0, x0, #4016
100003f4c: e9 03 00 91 	mov	x9, sp
100003f50: e8 03 0a aa 	mov	x8, x10
100003f54: 28 01 00 f9 	str	x8, [x9]
100003f58: 13 00 00 94 	bl	0x100003fa4 <_printf+0x100003fa4>
100003f5c: 01 00 00 14 	b	0x100003f60 <_main+0x50>
100003f60: a8 83 5f b8 	ldur	w8, [x29, #-8]
100003f64: 08 05 00 11 	add	w8, w8, #1
100003f68: a8 83 1f b8 	stur	w8, [x29, #-8]
100003f6c: a9 83 5f b8 	ldur	w9, [x29, #-8]
100003f70: 48 00 80 52 	mov	w8, #2
100003f74: 09 7d 09 1b 	mul	w9, w8, w9
100003f78: a8 73 df 38 	ldursb	w8, [x29, #-9]
100003f7c: 08 01 09 0b 	add	w8, w8, w9
100003f80: a8 73 1f 38 	sturb	w8, [x29, #-9]
100003f84: eb ff ff 17 	b	0x100003f30 <_main+0x20>
100003f88: 00 00 00 90 	adrp	x0, 0x100003000 <_main+0x78>
100003f8c: 00 cc 3e 91 	add	x0, x0, #4019
100003f90: 05 00 00 94 	bl	0x100003fa4 <_printf+0x100003fa4>
100003f94: 00 00 80 52 	mov	w0, #0
100003f98: fd 7b 42 a9 	ldp	x29, x30, [sp, #32]
100003f9c: ff c3 00 91 	add	sp, sp, #48
100003fa0: c0 03 5f d6 	ret

Disassembly of section __TEXT,__stubs:

0000000100003fa4 <__stubs>:
100003fa4: 10 00 00 b0 	adrp	x16, 0x100004000 <__stubs+0x4>
100003fa8: 10 02 40 f9 	ldr	x16, [x16]
100003fac: 00 02 1f d6 	br	x16
