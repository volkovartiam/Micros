	.file	"main.c"
	.text
	.globl	int_to_binary
	.def	int_to_binary;	.scl	2;	.type	32;	.endef
	.seh_proc	int_to_binary
int_to_binary:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	$0, -12(%rbp)
	movb	$0, -4(%rbp)
	movl	$0, -16(%rbp)
	movb	$0, -2(%rbp)
	jmp	.L2
.L5:
	movzbl	-2(%rbp), %eax
	sall	$3, %eax
	movl	16(%rbp), %edx
	movl	%eax, %ecx
	sarl	%cl, %edx
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L3
	cmpb	$0, -2(%rbp)
	jne	.L12
.L3:
	movzbl	-2(%rbp), %eax
	sall	$3, %eax
	movl	16(%rbp), %edx
	movl	%eax, %ecx
	sarl	%cl, %edx
	movzbl	-2(%rbp), %eax
	cltq
	movb	%dl, -16(%rbp,%rax)
	movzbl	-2(%rbp), %eax
	addl	$1, %eax
	movb	%al, -2(%rbp)
.L2:
	cmpb	$3, -2(%rbp)
	jbe	.L5
	jmp	.L4
.L12:
	nop
.L4:
	movq	24(%rbp), %rax
	movw	$25136, (%rax)
	movb	$0, 2(%rax)
	movb	$0, -3(%rbp)
	jmp	.L6
.L11:
	movb	$0, -1(%rbp)
	jmp	.L7
.L10:
	movzbl	-2(%rbp), %edx
	movzbl	-3(%rbp), %eax
	subl	%eax, %edx
	leal	-1(%rdx), %eax
	cltq
	movzbl	-16(%rbp,%rax), %eax
	movzbl	%al, %edx
	movzbl	-1(%rbp), %eax
	movl	%eax, %ecx
	sarl	%cl, %edx
	movl	%edx, %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L8
	cmpl	$1, %eax
	jne	.L9
	movzbl	-1(%rbp), %eax
	movl	$7, %edx
	subl	%eax, %edx
	movslq	%edx, %rax
	movb	$49, -12(%rbp,%rax)
	jmp	.L9
.L8:
	movzbl	-1(%rbp), %eax
	movl	$7, %edx
	subl	%eax, %edx
	movslq	%edx, %rax
	movb	$48, -12(%rbp,%rax)
	nop
.L9:
	movzbl	-1(%rbp), %eax
	addl	$1, %eax
	movb	%al, -1(%rbp)
.L7:
	cmpb	$7, -1(%rbp)
	jbe	.L10
	leaq	-12(%rbp), %rax
	movq	24(%rbp), %rcx
	movq	%rax, %rdx
	call	strcat
	movzbl	-3(%rbp), %eax
	addl	$1, %eax
	movb	%al, -3(%rbp)
.L6:
	movzbl	-3(%rbp), %eax
	cmpb	-2(%rbp), %al
	jb	.L11
	nop
	nop
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC0:
	.ascii "%s\15\12\0"
.LC1:
	.ascii "bit6 and bit1 RESET\15\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$80, %rsp
	.seh_stackalloc	80
	.seh_endprologue
	call	__main
	movq	$0, -48(%rbp)
	movq	$0, -40(%rbp)
	movq	$0, -32(%rbp)
	movq	$0, -24(%rbp)
	movl	$0, -17(%rbp)
	movb	$-61, -1(%rbp)
	movzbl	-1(%rbp), %eax
	leaq	-48(%rbp), %rdx
	movl	%eax, %ecx
	call	int_to_binary
	leaq	-48(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	printf
	andb	$-67, -1(%rbp)
	leaq	.LC1(%rip), %rax
	movq	%rax, %rcx
	call	puts
	movzbl	-1(%rbp), %eax
	leaq	-48(%rbp), %rdx
	movl	%eax, %ecx
	call	int_to_binary
	leaq	-48(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$0, %eax
	addq	$80, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (x86_64-win32-seh-rev2, Built by MinGW-Builds project) 14.2.0"
	.def	strcat;	.scl	2;	.type	32;	.endef
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	puts;	.scl	2;	.type	32;	.endef
