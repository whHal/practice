	.file	"fav_num.c"
	.intel_syntax noprefix
	.text
	.section	.rodata.str1.8,"aMS",@progbits,1
	.align 8
.LC0:
	.string	"Please enter your favorite number: "
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC1:
	.string	"%d"
.LC2:
	.string	"Your favorite number is: %d"
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
	endbr64
	sub	rsp, 24
	lea	rsi, .LC0[rip]
	mov	edi, 2
	xor	eax, eax
	call	__printf_chk@PLT
	lea	rsi, 12[rsp]
	xor	eax, eax
	lea	rdi, .LC1[rip]
	mov	DWORD PTR 12[rsp], 0
	call	__isoc23_scanf@PLT
	mov	edx, DWORD PTR 12[rsp]
	mov	edi, 2
	xor	eax, eax
	lea	rsi, .LC2[rip]
	call	__printf_chk@PLT
	xor	eax, eax
	add	rsp, 24
	ret
	.size	main, .-main
	.ident	"GCC: (Ubuntu 15.2.0-16ubuntu1) 15.2.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
