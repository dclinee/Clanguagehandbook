
example:	file format mach-o arm64

Disassembly of section __TEXT,__text:

0000000100003f3c <_my_print>:
100003f3c: fd 7b bf a9 	stp	x29, x30, [sp, #-16]!
100003f40: fd 03 00 91 	mov	x29, sp
100003f44: 1f 04 00 71 	cmp	w0, #1
100003f48: 81 00 00 54 	b.ne	0x100003f58 <_my_print+0x1c>
100003f4c: 00 03 00 10 	adr	x0, #96
100003f50: 1f 20 03 d5 	nop
100003f54: 13 00 00 94 	bl	0x100003fa0 <_puts+0x100003fa0>
100003f58: 28 00 00 b0 	adrp	x8, 0x100008000 <_my_print+0x30>
100003f5c: 09 01 40 b9 	ldr	w9, [x8]
100003f60: 29 b5 00 11 	add	w9, w9, #45
100003f64: 09 01 00 b9 	str	w9, [x8]
100003f68: fd 7b c1 a8 	ldp	x29, x30, [sp], #16
100003f6c: c0 03 5f d6 	ret

0000000100003f70 <_main>:
100003f70: fd 7b bf a9 	stp	x29, x30, [sp, #-16]!
100003f74: fd 03 00 91 	mov	x29, sp
100003f78: a0 01 00 10 	adr	x0, #52
100003f7c: 1f 20 03 d5 	nop
100003f80: 08 00 00 94 	bl	0x100003fa0 <_puts+0x100003fa0>
100003f84: 28 00 00 b0 	adrp	x8, 0x100008000 <_main+0x28>
100003f88: 09 01 40 b9 	ldr	w9, [x8]
100003f8c: 29 b5 00 11 	add	w9, w9, #45
100003f90: 09 01 00 b9 	str	w9, [x8]
100003f94: 00 00 80 52 	mov	w0, #0
100003f98: fd 7b c1 a8 	ldp	x29, x30, [sp], #16
100003f9c: c0 03 5f d6 	ret

Disassembly of section __TEXT,__stubs:

0000000100003fa0 <__stubs>:
100003fa0: 10 00 00 b0 	adrp	x16, 0x100004000 <__stubs+0x4>
100003fa4: 10 02 40 f9 	ldr	x16, [x16]
100003fa8: 00 02 1f d6 	br	x16
