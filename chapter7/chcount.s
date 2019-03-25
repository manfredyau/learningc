	.file	"chcount.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 8
.LC0:
	.ascii "There are %d non-quote characters.\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	movl	$0, -4(%rbp)
	jmp	.L2
.L3:
	cmpb	$34, -5(%rbp)
	je	.L2
	cmpb	$39, -5(%rbp)
	je	.L2
	addl	$1, -4(%rbp)
.L2:
	call	getchar
	movb	%al, -5(%rbp)
	cmpb	$46, -5(%rbp)
	jne	.L3
	movl	-4(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC0(%rip), %rcx
	call	printf
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (GNU) 7.4.0"
	.def	getchar;	.scl	2;	.type	32;	.endef
	.def	printf;	.scl	2;	.type	32;	.endef
