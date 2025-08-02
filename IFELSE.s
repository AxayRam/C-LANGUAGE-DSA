	.file	"IFELSE.c"
	.option pic
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.align	1
	.globl	main
	.type	main, @function
main:
.LFB0:
	.file 1 "IFELSE.c"
	.loc 1 3 12
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	s0,24(sp)
	.cfi_offset 8, -8
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 4 9
	li	a5,10
	sw	a5,-24(s0)
	.loc 1 5 9
	li	a5,2
	sw	a5,-20(s0)
	.loc 1 7 7
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,10
	bne	a4,a5,.L2
	.loc 1 8 10
	lw	a5,-20(s0)
	addiw	a5,a5,10
	sw	a5,-20(s0)
.L2:
	.loc 1 11 12
	li	a5,0
	.loc 1 12 1
	mv	a0,a5
	ld	s0,24(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE0:
	.size	main, .-main
