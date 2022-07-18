
bubble_sort:	file format mach-o arm64

Disassembly of section __TEXT,__text:

0000000100003d60 <_main>:
100003d60: ff 83 00 d1 	sub	sp, sp, #32
100003d64: fd 7b 01 a9 	stp	x29, x30, [sp, #16]
100003d68: fd 43 00 91 	add	x29, sp, #16
100003d6c: 08 00 80 52 	mov	w8, #0
100003d70: e8 0b 00 b9 	str	w8, [sp, #8]
100003d74: bf c3 1f b8 	stur	wzr, [x29, #-4]
100003d78: 03 00 00 94 	bl	0x100003d84 <_bubble_sort>
100003d7c: e0 0b 40 b9 	ldr	w0, [sp, #8]
100003d80: 79 00 00 94 	bl	0x100003f64 <_printf+0x100003f64>

0000000100003d84 <_bubble_sort>:
100003d84: ff 83 01 d1 	sub	sp, sp, #96
100003d88: fd 7b 05 a9 	stp	x29, x30, [sp, #80]
100003d8c: fd 43 01 91 	add	x29, sp, #80
100003d90: 08 00 00 b0 	adrp	x8, 0x100004000 <_bubble_sort+0x10>
100003d94: 08 05 40 f9 	ldr	x8, [x8, #8]
100003d98: 08 01 40 f9 	ldr	x8, [x8]
100003d9c: a8 83 1f f8 	stur	x8, [x29, #-8]
100003da0: e0 83 00 91 	add	x0, sp, #32
100003da4: 01 00 00 90 	adrp	x1, 0x100003000 <_bubble_sort+0x20>
100003da8: 21 20 3e 91 	add	x1, x1, #3976
100003dac: 02 05 80 d2 	mov	x2, #40
100003db0: 70 00 00 94 	bl	0x100003f70 <_printf+0x100003f70>
100003db4: ff 1f 00 b9 	str	wzr, [sp, #28]
100003db8: 01 00 00 14 	b	0x100003dbc <_bubble_sort+0x38>
100003dbc: e8 1f 40 b9 	ldr	w8, [sp, #28]
100003dc0: 08 29 00 71 	subs	w8, w8, #10
100003dc4: 0a 02 00 54 	b.ge	0x100003e04 <_bubble_sort+0x80>
100003dc8: 01 00 00 14 	b	0x100003dcc <_bubble_sort+0x48>
100003dcc: e9 1f 80 b9 	ldrsw	x9, [sp, #28]
100003dd0: e8 83 00 91 	add	x8, sp, #32
100003dd4: 09 79 69 b8 	ldr	w9, [x8, x9, lsl #2]
100003dd8: e8 03 09 aa 	mov	x8, x9
100003ddc: 00 00 00 90 	adrp	x0, 0x100003000 <_bubble_sort+0x58>
100003de0: 00 c0 3e 91 	add	x0, x0, #4016
100003de4: e9 03 00 91 	mov	x9, sp
100003de8: 28 01 00 f9 	str	x8, [x9]
100003dec: 64 00 00 94 	bl	0x100003f7c <_printf+0x100003f7c>
100003df0: 01 00 00 14 	b	0x100003df4 <_bubble_sort+0x70>
100003df4: e8 1f 40 b9 	ldr	w8, [sp, #28]
100003df8: 08 05 00 11 	add	w8, w8, #1
100003dfc: e8 1f 00 b9 	str	w8, [sp, #28]
100003e00: ef ff ff 17 	b	0x100003dbc <_bubble_sort+0x38>
100003e04: 00 00 00 90 	adrp	x0, 0x100003000 <_bubble_sort+0x80>
100003e08: 00 d0 3e 91 	add	x0, x0, #4020
100003e0c: 5c 00 00 94 	bl	0x100003f7c <_printf+0x100003f7c>
100003e10: ff 1f 00 b9 	str	wzr, [sp, #28]
100003e14: 01 00 00 14 	b	0x100003e18 <_bubble_sort+0x94>
100003e18: e8 1f 40 b9 	ldr	w8, [sp, #28]
100003e1c: 08 25 00 71 	subs	w8, w8, #9
100003e20: 8a 05 00 54 	b.ge	0x100003ed0 <_bubble_sort+0x14c>
100003e24: 01 00 00 14 	b	0x100003e28 <_bubble_sort+0xa4>
100003e28: ff 1b 00 b9 	str	wzr, [sp, #24]
100003e2c: 01 00 00 14 	b	0x100003e30 <_bubble_sort+0xac>
100003e30: e8 1b 40 b9 	ldr	w8, [sp, #24]
100003e34: ea 1f 40 b9 	ldr	w10, [sp, #28]
100003e38: 29 01 80 52 	mov	w9, #9
100003e3c: 29 01 0a 6b 	subs	w9, w9, w10
100003e40: 08 01 09 6b 	subs	w8, w8, w9
100003e44: ca 03 00 54 	b.ge	0x100003ebc <_bubble_sort+0x138>
100003e48: 01 00 00 14 	b	0x100003e4c <_bubble_sort+0xc8>
100003e4c: e8 1b 80 b9 	ldrsw	x8, [sp, #24]
100003e50: e9 83 00 91 	add	x9, sp, #32
100003e54: 28 79 68 b8 	ldr	w8, [x9, x8, lsl #2]
100003e58: ea 1b 40 b9 	ldr	w10, [sp, #24]
100003e5c: 4a 05 00 11 	add	w10, w10, #1
100003e60: 29 d9 6a b8 	ldr	w9, [x9, w10, sxtw #2]
100003e64: 08 01 09 6b 	subs	w8, w8, w9
100003e68: 0d 02 00 54 	b.le	0x100003ea8 <_bubble_sort+0x124>
100003e6c: 01 00 00 14 	b	0x100003e70 <_bubble_sort+0xec>
100003e70: e8 1b 80 b9 	ldrsw	x8, [sp, #24]
100003e74: e9 83 00 91 	add	x9, sp, #32
100003e78: 28 79 68 b8 	ldr	w8, [x9, x8, lsl #2]
100003e7c: e8 17 00 b9 	str	w8, [sp, #20]
100003e80: e8 1b 40 b9 	ldr	w8, [sp, #24]
100003e84: 08 05 00 11 	add	w8, w8, #1
100003e88: 28 d9 68 b8 	ldr	w8, [x9, w8, sxtw #2]
100003e8c: ea 1b 80 b9 	ldrsw	x10, [sp, #24]
100003e90: 28 79 2a b8 	str	w8, [x9, x10, lsl #2]
100003e94: e8 17 40 b9 	ldr	w8, [sp, #20]
100003e98: ea 1b 40 b9 	ldr	w10, [sp, #24]
100003e9c: 4a 05 00 11 	add	w10, w10, #1
100003ea0: 28 d9 2a b8 	str	w8, [x9, w10, sxtw #2]
100003ea4: 01 00 00 14 	b	0x100003ea8 <_bubble_sort+0x124>
100003ea8: 01 00 00 14 	b	0x100003eac <_bubble_sort+0x128>
100003eac: e8 1b 40 b9 	ldr	w8, [sp, #24]
100003eb0: 08 05 00 11 	add	w8, w8, #1
100003eb4: e8 1b 00 b9 	str	w8, [sp, #24]
100003eb8: de ff ff 17 	b	0x100003e30 <_bubble_sort+0xac>
100003ebc: 01 00 00 14 	b	0x100003ec0 <_bubble_sort+0x13c>
100003ec0: e8 1f 40 b9 	ldr	w8, [sp, #28]
100003ec4: 08 05 00 11 	add	w8, w8, #1
100003ec8: e8 1f 00 b9 	str	w8, [sp, #28]
100003ecc: d3 ff ff 17 	b	0x100003e18 <_bubble_sort+0x94>
100003ed0: ff 1f 00 b9 	str	wzr, [sp, #28]
100003ed4: 01 00 00 14 	b	0x100003ed8 <_bubble_sort+0x154>
100003ed8: e8 1f 40 b9 	ldr	w8, [sp, #28]
100003edc: 08 29 00 71 	subs	w8, w8, #10
100003ee0: 0a 02 00 54 	b.ge	0x100003f20 <_bubble_sort+0x19c>
100003ee4: 01 00 00 14 	b	0x100003ee8 <_bubble_sort+0x164>
100003ee8: e9 1f 80 b9 	ldrsw	x9, [sp, #28]
100003eec: e8 83 00 91 	add	x8, sp, #32
100003ef0: 09 79 69 b8 	ldr	w9, [x8, x9, lsl #2]
100003ef4: e8 03 09 aa 	mov	x8, x9
100003ef8: 00 00 00 90 	adrp	x0, 0x100003000 <_bubble_sort+0x174>
100003efc: 00 c0 3e 91 	add	x0, x0, #4016
100003f00: e9 03 00 91 	mov	x9, sp
100003f04: 28 01 00 f9 	str	x8, [x9]
100003f08: 1d 00 00 94 	bl	0x100003f7c <_printf+0x100003f7c>
100003f0c: 01 00 00 14 	b	0x100003f10 <_bubble_sort+0x18c>
100003f10: e8 1f 40 b9 	ldr	w8, [sp, #28]
100003f14: 08 05 00 11 	add	w8, w8, #1
100003f18: e8 1f 00 b9 	str	w8, [sp, #28]
100003f1c: ef ff ff 17 	b	0x100003ed8 <_bubble_sort+0x154>
100003f20: 00 00 00 90 	adrp	x0, 0x100003000 <_bubble_sort+0x19c>
100003f24: 00 d0 3e 91 	add	x0, x0, #4020
100003f28: 15 00 00 94 	bl	0x100003f7c <_printf+0x100003f7c>
100003f2c: 08 00 00 b0 	adrp	x8, 0x100004000 <_bubble_sort+0x1ac>
100003f30: 08 05 40 f9 	ldr	x8, [x8, #8]
100003f34: 08 01 40 f9 	ldr	x8, [x8]
100003f38: a9 83 5f f8 	ldur	x9, [x29, #-8]
100003f3c: 08 01 09 eb 	subs	x8, x8, x9
100003f40: a1 00 00 54 	b.ne	0x100003f54 <_bubble_sort+0x1d0>
100003f44: 01 00 00 14 	b	0x100003f48 <_bubble_sort+0x1c4>
100003f48: fd 7b 45 a9 	ldp	x29, x30, [sp, #80]
100003f4c: ff 83 01 91 	add	sp, sp, #96
100003f50: c0 03 5f d6 	ret
100003f54: 01 00 00 94 	bl	0x100003f58 <_printf+0x100003f58>

Disassembly of section __TEXT,__stubs:

0000000100003f58 <__stubs>:
100003f58: 10 00 00 b0 	adrp	x16, 0x100004000 <__stubs+0x4>
100003f5c: 10 02 40 f9 	ldr	x16, [x16]
100003f60: 00 02 1f d6 	br	x16
100003f64: 10 00 00 b0 	adrp	x16, 0x100004000 <__stubs+0x10>
100003f68: 10 0a 40 f9 	ldr	x16, [x16, #16]
100003f6c: 00 02 1f d6 	br	x16
100003f70: 10 00 00 b0 	adrp	x16, 0x100004000 <__stubs+0x1c>
100003f74: 10 0e 40 f9 	ldr	x16, [x16, #24]
100003f78: 00 02 1f d6 	br	x16
100003f7c: 10 00 00 b0 	adrp	x16, 0x100004000 <__stubs+0x28>
100003f80: 10 12 40 f9 	ldr	x16, [x16, #32]
100003f84: 00 02 1f d6 	br	x16
