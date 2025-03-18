	.file	"main.c"
	.text
	.section .rdata,"dr"
.LC0:
	.ascii "Please enter an integer \0"
.LC1:
	.ascii "%d\0"
	.align 8
.LC2:
	.ascii "You have entered a number less than 10\15\0"
	.align 8
.LC3:
	.ascii "You entered a number greater than or equal to 10\15\0"
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
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	-4(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC1(%rip), %rax
	movq	%rax, %rcx
	call	scanf
	movl	-4(%rbp), %eax
	cmpl	$9, %eax
	jg	.L2
	leaq	.LC2(%rip), %rax
	movq	%rax, %rcx
	call	puts
	jmp	.L3
.L2:
	leaq	.LC3(%rip), %rax
	movq	%rax, %rcx
	call	puts
.L3:
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (x86_64-win32-seh-rev2, Built by MinGW-Builds project) 14.2.0"
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	scanf;	.scl	2;	.type	32;	.endef
	.def	puts;	.scl	2;	.type	32;	.endef
