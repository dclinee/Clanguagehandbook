	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 12, 0	sdk_version 12, 3
	.globl	__Z11normSquared4Vec2           ; -- Begin function _Z11normSquared4Vec2
	.p2align	2
__Z11normSquared4Vec2:                  ; @_Z11normSquared4Vec2
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	x0, [sp]
	str	x1, [sp, #8]
	ldr	x8, [sp]
	ldr	x9, [sp]
	mul	x8, x8, x9
	ldr	x9, [sp, #8]
	ldr	x10, [sp, #8]
	mul	x9, x9, x10
	add	x0, x8, x9
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
.subsections_via_symbols
