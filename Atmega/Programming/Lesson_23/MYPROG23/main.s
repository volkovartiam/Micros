	.file	"main.c"
	.intel_syntax noprefix
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "D:/MGU/Micros/Micros/Atmega/Programming/Lesson_23/MYPROG23" "src/main.c"
	.globl	res
	.bss
	.align 4
res:
	.space 4
	.globl	str1
	.align 16
str1:
	.space 30
	.globl	yf
	.align 4
yf:
	.space 4
	.globl	zf
	.align 4
zf:
	.space 4
	.section .rdata,"dr"
.LC0:
	.ascii "i=%d\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB129:
	.file 1 "src/main.c"
	.loc 1 13 1
	.cfi_startproc
	push	rbp
	.seh_pushreg	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	push	rbx
	.seh_pushreg	rbx
	.cfi_def_cfa_offset 24
	.cfi_offset 3, -24
	sub	rsp, 40
	.seh_stackalloc	40
	.cfi_def_cfa_offset 64
	lea	rbp, 32[rsp]
	.seh_setframe	rbp, 32
	.cfi_def_cfa 6, 32
	.seh_endprologue
	.loc 1 13 1
	call	__main
	.loc 1 14 16
	mov	ebx, 0
	.loc 1 15 10
	jmp	.L2
.L3:
	.loc 1 17 8
	add	ebx, 1
	.loc 1 18 7
	mov	edx, ebx
	lea	rax, .LC0[rip]
	mov	rcx, rax
	call	printf
.L2:
	.loc 1 15 12
	cmp	ebx, 9
	jle	.L3
	.loc 1 109 10
	mov	eax, 0
	.loc 1 110 1
	add	rsp, 40
	pop	rbx
	.cfi_restore 3
	pop	rbp
	.cfi_restore 6
	.cfi_def_cfa 7, -24
	ret
	.cfi_endproc
.LFE129:
	.seh_endproc
	.section .rdata,"dr"
.LC1:
	.ascii "%s %.5f\12\0"
	.text
	.globl	print_res
	.def	print_res;	.scl	2;	.type	32;	.endef
	.seh_proc	print_res
print_res:
.LFB130:
	.loc 1 113 1
	.cfi_startproc
	push	rbp
	.seh_pushreg	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	.cfi_def_cfa_register 6
	sub	rsp, 32
	.seh_stackalloc	32
	.seh_endprologue
	mov	QWORD PTR 16[rbp], rcx
	.loc 1 114 3
	mov	edx, DWORD PTR res[rip]
	mov	rax, QWORD PTR 16[rbp]
	mov	r8d, edx
	mov	rdx, rax
	lea	rax, .LC1[rip]
	mov	rcx, rax
	call	printf
	.loc 1 115 1
	nop
	add	rsp, 32
	pop	rbp
	.cfi_restore 6
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE130:
	.seh_endproc
	.globl	my_counter
	.def	my_counter;	.scl	2;	.type	32;	.endef
	.seh_proc	my_counter
my_counter:
.LFB131:
	.loc 1 119 1
	.cfi_startproc
	push	rbp
	.seh_pushreg	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	.cfi_def_cfa_register 6
	sub	rsp, 32
	.seh_stackalloc	32
	.seh_endprologue
	.loc 1 121 3
	mov	eax, DWORD PTR i.0[rip]
	mov	edx, eax
	lea	rax, .LC0[rip]
	mov	rcx, rax
	call	printf
	.loc 1 122 4
	mov	eax, DWORD PTR i.0[rip]
	add	eax, 1
	mov	DWORD PTR i.0[rip], eax
	.loc 1 123 1
	nop
	add	rsp, 32
	pop	rbp
	.cfi_restore 6
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE131:
	.seh_endproc
.lcomm i.0,4,4
.Letext0:
	.file 2 "D:/mingw64/x86_64-w64-mingw32/include/stdio.h"
	.section	.debug_info,"dr"
.Ldebug_info0:
	.long	0x225
	.word	0x5
	.byte	0x1
	.byte	0x8
	.secrel32	.Ldebug_abbrev0
	.uleb128 0x6
	.ascii "GNU C17 14.2.0 -masm=intel -mtune=core2 -march=nocona -g3\0"
	.byte	0x1d
	.secrel32	.LASF0
	.secrel32	.LASF1
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.secrel32	.Ldebug_line0
	.secrel32	.Ldebug_macro0
	.uleb128 0x1
	.byte	0x1
	.byte	0x6
	.ascii "char\0"
	.uleb128 0x7
	.long	0x68
	.uleb128 0x1
	.byte	0x8
	.byte	0x7
	.ascii "long long unsigned int\0"
	.uleb128 0x1
	.byte	0x8
	.byte	0x5
	.ascii "long long int\0"
	.uleb128 0x1
	.byte	0x2
	.byte	0x7
	.ascii "short unsigned int\0"
	.uleb128 0x1
	.byte	0x4
	.byte	0x5
	.ascii "int\0"
	.uleb128 0x1
	.byte	0x4
	.byte	0x5
	.ascii "long int\0"
	.uleb128 0x1
	.byte	0x4
	.byte	0x7
	.ascii "unsigned int\0"
	.uleb128 0x1
	.byte	0x1
	.byte	0x8
	.ascii "unsigned char\0"
	.uleb128 0x1
	.byte	0x8
	.byte	0x4
	.ascii "double\0"
	.uleb128 0x1
	.byte	0x4
	.byte	0x4
	.ascii "float\0"
	.uleb128 0x1
	.byte	0x10
	.byte	0x4
	.ascii "long double\0"
	.uleb128 0x2
	.ascii "res\0"
	.byte	0x5
	.byte	0x5
	.long	0xb6
	.uleb128 0x9
	.byte	0x3
	.quad	res
	.uleb128 0x8
	.long	0x68
	.long	0x131
	.uleb128 0x9
	.long	0x75
	.byte	0x1d
	.byte	0
	.uleb128 0x2
	.ascii "str1\0"
	.byte	0x6
	.byte	0x6
	.long	0x121
	.uleb128 0x9
	.byte	0x3
	.quad	str1
	.uleb128 0x2
	.ascii "yf\0"
	.byte	0x7
	.byte	0x7
	.long	0xf4
	.uleb128 0x9
	.byte	0x3
	.quad	yf
	.uleb128 0x2
	.ascii "zf\0"
	.byte	0x7
	.byte	0xb
	.long	0xf4
	.uleb128 0x9
	.byte	0x3
	.quad	zf
	.uleb128 0xa
	.ascii "printf\0"
	.byte	0x2
	.word	0x201
	.byte	0xf
	.long	0xb6
	.long	0x18a
	.uleb128 0xb
	.long	0x18a
	.uleb128 0xc
	.byte	0
	.uleb128 0x3
	.long	0x70
	.uleb128 0x4
	.ascii "my_counter\0"
	.byte	0x76
	.quad	.LFB131
	.quad	.LFE131-.LFB131
	.uleb128 0x1
	.byte	0x9c
	.long	0x1c6
	.uleb128 0x5
	.ascii "i\0"
	.byte	0x78
	.byte	0xe
	.long	0xb6
	.uleb128 0x9
	.byte	0x3
	.quad	i.0
	.byte	0
	.uleb128 0x4
	.ascii "print_res\0"
	.byte	0x70
	.quad	.LFB130
	.quad	.LFE130-.LFB130
	.uleb128 0x1
	.byte	0x9c
	.long	0x1f8
	.uleb128 0xd
	.ascii "str\0"
	.byte	0x1
	.byte	0x70
	.byte	0x15
	.long	0x1f8
	.uleb128 0x2
	.byte	0x91
	.sleb128 0
	.byte	0
	.uleb128 0x3
	.long	0x68
	.uleb128 0xe
	.ascii "main\0"
	.byte	0x1
	.byte	0xc
	.byte	0x5
	.long	0xb6
	.quad	.LFB129
	.quad	.LFE129-.LFB129
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x5
	.ascii "i\0"
	.byte	0xe
	.byte	0x10
	.long	0xb6
	.uleb128 0x1
	.byte	0x53
	.byte	0
	.byte	0
	.section	.debug_abbrev,"dr"
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 6
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0x8
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x1f
	.uleb128 0x1b
	.uleb128 0x1f
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x10
	.uleb128 0x17
	.uleb128 0x79
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x5
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0xe
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7c
	.uleb128 0x19
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"dr"
	.long	0x2c
	.word	0x2
	.secrel32	.Ldebug_info0
	.byte	0x8
	.byte	0
	.word	0
	.word	0
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.quad	0
	.quad	0
	.section	.debug_macro,"dr"
.Ldebug_macro0:
	.word	0x5
	.byte	0x2
	.secrel32	.Ldebug_line0
	.byte	0x1
	.uleb128 0
	.ascii "__STDC__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__STDC_VERSION__ 201710L\0"
	.byte	0x1
	.uleb128 0
	.ascii "__STDC_UTF_16__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__STDC_UTF_32__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__STDC_HOSTED__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GNUC__ 14\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GNUC_MINOR__ 2\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GNUC_PATCHLEVEL__ 0\0"
	.byte	0x1
	.uleb128 0
	.ascii "__VERSION__ \"14.2.0\"\0"
	.byte	0x1
	.uleb128 0
	.ascii "__ATOMIC_RELAXED 0\0"
	.byte	0x1
	.uleb128 0
	.ascii "__ATOMIC_SEQ_CST 5\0"
	.byte	0x1
	.uleb128 0
	.ascii "__ATOMIC_ACQUIRE 2\0"
	.byte	0x1
	.uleb128 0
	.ascii "__ATOMIC_RELEASE 3\0"
	.byte	0x1
	.uleb128 0
	.ascii "__ATOMIC_ACQ_REL 4\0"
	.byte	0x1
	.uleb128 0
	.ascii "__ATOMIC_CONSUME 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__pic__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__PIC__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FINITE_MATH_ONLY__ 0\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SIZEOF_INT__ 4\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SIZEOF_LONG__ 4\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SIZEOF_LONG_LONG__ 8\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SIZEOF_SHORT__ 2\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SIZEOF_FLOAT__ 4\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SIZEOF_DOUBLE__ 8\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SIZEOF_LONG_DOUBLE__ 16\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SIZEOF_SIZE_T__ 8\0"
	.byte	0x1
	.uleb128 0
	.ascii "__CHAR_BIT__ 8\0"
	.byte	0x1
	.uleb128 0
	.ascii "__BIGGEST_ALIGNMENT__ 16\0"
	.byte	0x1
	.uleb128 0
	.ascii "__ORDER_LITTLE_ENDIAN__ 1234\0"
	.byte	0x1
	.uleb128 0
	.ascii "__ORDER_BIG_ENDIAN__ 4321\0"
	.byte	0x1
	.uleb128 0
	.ascii "__ORDER_PDP_ENDIAN__ 3412\0"
	.byte	0x1
	.uleb128 0
	.ascii "__BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SIZEOF_POINTER__ 8\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GNUC_EXECUTION_CHARSET_NAME \"UTF-8\"\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GNUC_WIDE_EXECUTION_CHARSET_NAME \"UTF-16LE\"\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SIZE_TYPE__ long long unsigned int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__PTRDIFF_TYPE__ long long int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__WCHAR_TYPE__ short unsigned int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__WINT_TYPE__ short unsigned int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INTMAX_TYPE__ long long int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINTMAX_TYPE__ long long unsigned int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__CHAR16_TYPE__ short unsigned int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__CHAR32_TYPE__ unsigned int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SIG_ATOMIC_TYPE__ int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT8_TYPE__ signed char\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT16_TYPE__ short int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT32_TYPE__ int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT64_TYPE__ long long int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT8_TYPE__ unsigned char\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT16_TYPE__ short unsigned int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT32_TYPE__ unsigned int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT64_TYPE__ long long unsigned int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT_LEAST8_TYPE__ signed char\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT_LEAST16_TYPE__ short int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT_LEAST32_TYPE__ int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT_LEAST64_TYPE__ long long int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT_LEAST8_TYPE__ unsigned char\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT_LEAST16_TYPE__ short unsigned int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT_LEAST32_TYPE__ unsigned int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT_LEAST64_TYPE__ long long unsigned int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT_FAST8_TYPE__ signed char\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT_FAST16_TYPE__ short int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT_FAST32_TYPE__ int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT_FAST64_TYPE__ long long int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT_FAST8_TYPE__ unsigned char\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT_FAST16_TYPE__ short unsigned int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT_FAST32_TYPE__ unsigned int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT_FAST64_TYPE__ long long unsigned int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INTPTR_TYPE__ long long int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINTPTR_TYPE__ long long unsigned int\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GXX_ABI_VERSION 1019\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SCHAR_MAX__ 0x7f\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SHRT_MAX__ 0x7fff\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT_MAX__ 0x7fffffff\0"
	.byte	0x1
	.uleb128 0
	.ascii "__LONG_MAX__ 0x7fffffffL\0"
	.byte	0x1
	.uleb128 0
	.ascii "__LONG_LONG_MAX__ 0x7fffffffffffffffLL\0"
	.byte	0x1
	.uleb128 0
	.ascii "__WCHAR_MAX__ 0xffff\0"
	.byte	0x1
	.uleb128 0
	.ascii "__WCHAR_MIN__ 0\0"
	.byte	0x1
	.uleb128 0
	.ascii "__WINT_MAX__ 0xffff\0"
	.byte	0x1
	.uleb128 0
	.ascii "__WINT_MIN__ 0\0"
	.byte	0x1
	.uleb128 0
	.ascii "__PTRDIFF_MAX__ 0x7fffffffffffffffLL\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SIZE_MAX__ 0xffffffffffffffffULL\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SCHAR_WIDTH__ 8\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SHRT_WIDTH__ 16\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT_WIDTH__ 32\0"
	.byte	0x1
	.uleb128 0
	.ascii "__LONG_WIDTH__ 32\0"
	.byte	0x1
	.uleb128 0
	.ascii "__LONG_LONG_WIDTH__ 64\0"
	.byte	0x1
	.uleb128 0
	.ascii "__WCHAR_WIDTH__ 16\0"
	.byte	0x1
	.uleb128 0
	.ascii "__WINT_WIDTH__ 16\0"
	.byte	0x1
	.uleb128 0
	.ascii "__PTRDIFF_WIDTH__ 64\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SIZE_WIDTH__ 64\0"
	.byte	0x1
	.uleb128 0
	.ascii "__BITINT_MAXWIDTH__ 65535\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INTMAX_MAX__ 0x7fffffffffffffffLL\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INTMAX_C(c) c ## LL\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINTMAX_MAX__ 0xffffffffffffffffULL\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINTMAX_C(c) c ## ULL\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INTMAX_WIDTH__ 64\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SIG_ATOMIC_MAX__ 0x7fffffff\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SIG_ATOMIC_WIDTH__ 32\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT8_MAX__ 0x7f\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT16_MAX__ 0x7fff\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT32_MAX__ 0x7fffffff\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT64_MAX__ 0x7fffffffffffffffLL\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT8_MAX__ 0xff\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT16_MAX__ 0xffff\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT32_MAX__ 0xffffffffU\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT64_MAX__ 0xffffffffffffffffULL\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT_LEAST8_MAX__ 0x7f\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT8_C(c) c\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT_LEAST8_WIDTH__ 8\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT_LEAST16_MAX__ 0x7fff\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT16_C(c) c\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT_LEAST16_WIDTH__ 16\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT_LEAST32_MAX__ 0x7fffffff\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT32_C(c) c\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT_LEAST32_WIDTH__ 32\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT_LEAST64_MAX__ 0x7fffffffffffffffLL\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT64_C(c) c ## LL\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT_LEAST64_WIDTH__ 64\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT_LEAST8_MAX__ 0xff\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT8_C(c) c\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT_LEAST16_MAX__ 0xffff\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT16_C(c) c\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT_LEAST32_MAX__ 0xffffffffU\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT32_C(c) c ## U\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT_LEAST64_MAX__ 0xffffffffffffffffULL\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT64_C(c) c ## ULL\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT_FAST8_MAX__ 0x7f\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT_FAST8_WIDTH__ 8\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT_FAST16_MAX__ 0x7fff\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT_FAST16_WIDTH__ 16\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT_FAST32_MAX__ 0x7fffffff\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT_FAST32_WIDTH__ 32\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT_FAST64_MAX__ 0x7fffffffffffffffLL\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INT_FAST64_WIDTH__ 64\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT_FAST8_MAX__ 0xff\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT_FAST16_MAX__ 0xffff\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT_FAST32_MAX__ 0xffffffffU\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINT_FAST64_MAX__ 0xffffffffffffffffULL\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INTPTR_MAX__ 0x7fffffffffffffffLL\0"
	.byte	0x1
	.uleb128 0
	.ascii "__INTPTR_WIDTH__ 64\0"
	.byte	0x1
	.uleb128 0
	.ascii "__UINTPTR_MAX__ 0xffffffffffffffffULL\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GCC_IEC_559 2\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GCC_IEC_559_COMPLEX 2\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT_EVAL_METHOD__ 0\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT_EVAL_METHOD_TS_18661_3__ 0\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DEC_EVAL_METHOD__ 2\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT_RADIX__ 2\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT_MANT_DIG__ 24\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT_DIG__ 6\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT_MIN_EXP__ (-125)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT_MIN_10_EXP__ (-37)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT_MAX_EXP__ 128\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT_MAX_10_EXP__ 38\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT_DECIMAL_DIG__ 9\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT_MAX__ 3.40282346638528859811704183484516925e+38F\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT_MIN__ 1.17549435082228750796873653722224568e-38F\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT_HAS_DENORM__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT_HAS_INFINITY__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT_HAS_QUIET_NAN__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT_IS_IEC_60559__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DBL_MANT_DIG__ 53\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DBL_DIG__ 15\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DBL_MIN_EXP__ (-1021)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DBL_MIN_10_EXP__ (-307)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DBL_MAX_EXP__ 1024\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DBL_MAX_10_EXP__ 308\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DBL_DECIMAL_DIG__ 17\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DBL_HAS_DENORM__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DBL_HAS_INFINITY__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DBL_HAS_QUIET_NAN__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DBL_IS_IEC_60559__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__LDBL_MANT_DIG__ 64\0"
	.byte	0x1
	.uleb128 0
	.ascii "__LDBL_DIG__ 18\0"
	.byte	0x1
	.uleb128 0
	.ascii "__LDBL_MIN_EXP__ (-16381)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__LDBL_MIN_10_EXP__ (-4931)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__LDBL_MAX_EXP__ 16384\0"
	.byte	0x1
	.uleb128 0
	.ascii "__LDBL_MAX_10_EXP__ 4932\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DECIMAL_DIG__ 21\0"
	.byte	0x1
	.uleb128 0
	.ascii "__LDBL_DECIMAL_DIG__ 21\0"
	.byte	0x1
	.uleb128 0
	.ascii "__LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L\0"
	.byte	0x1
	.uleb128 0
	.ascii "__LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L\0"
	.byte	0x1
	.uleb128 0
	.ascii "__LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L\0"
	.byte	0x1
	.uleb128 0
	.ascii "__LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L\0"
	.byte	0x1
	.uleb128 0
	.ascii "__LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L\0"
	.byte	0x1
	.uleb128 0
	.ascii "__LDBL_HAS_DENORM__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__LDBL_HAS_INFINITY__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__LDBL_HAS_QUIET_NAN__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__LDBL_IS_IEC_60559__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT16_MANT_DIG__ 11\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT16_DIG__ 3\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT16_MIN_EXP__ (-13)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT16_MIN_10_EXP__ (-4)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT16_MAX_EXP__ 16\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT16_MAX_10_EXP__ 4\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT16_DECIMAL_DIG__ 5\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT16_MAX__ 6.55040000000000000000000000000000000e+4F16\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT16_NORM_MAX__ 6.55040000000000000000000000000000000e+4F16\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT16_MIN__ 6.10351562500000000000000000000000000e-5F16\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT16_EPSILON__ 9.76562500000000000000000000000000000e-4F16\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT16_DENORM_MIN__ 5.96046447753906250000000000000000000e-8F16\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT16_HAS_DENORM__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT16_HAS_INFINITY__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT16_HAS_QUIET_NAN__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT16_IS_IEC_60559__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32_MANT_DIG__ 24\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32_DIG__ 6\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32_MIN_EXP__ (-125)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32_MIN_10_EXP__ (-37)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32_MAX_EXP__ 128\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32_MAX_10_EXP__ 38\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32_DECIMAL_DIG__ 9\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32_HAS_DENORM__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32_HAS_INFINITY__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32_HAS_QUIET_NAN__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32_IS_IEC_60559__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64_MANT_DIG__ 53\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64_DIG__ 15\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64_MIN_EXP__ (-1021)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64_MIN_10_EXP__ (-307)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64_MAX_EXP__ 1024\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64_MAX_10_EXP__ 308\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64_DECIMAL_DIG__ 17\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64_HAS_DENORM__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64_HAS_INFINITY__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64_HAS_QUIET_NAN__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64_IS_IEC_60559__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT128_MANT_DIG__ 113\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT128_DIG__ 33\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT128_MIN_EXP__ (-16381)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT128_MIN_10_EXP__ (-4931)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT128_MAX_EXP__ 16384\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT128_MAX_10_EXP__ 4932\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT128_DECIMAL_DIG__ 36\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT128_HAS_DENORM__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT128_HAS_INFINITY__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT128_HAS_QUIET_NAN__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT128_IS_IEC_60559__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32X_MANT_DIG__ 53\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32X_DIG__ 15\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32X_MIN_EXP__ (-1021)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32X_MIN_10_EXP__ (-307)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32X_MAX_EXP__ 1024\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32X_MAX_10_EXP__ 308\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32X_DECIMAL_DIG__ 17\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32X_HAS_DENORM__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32X_HAS_INFINITY__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32X_HAS_QUIET_NAN__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT32X_IS_IEC_60559__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64X_MANT_DIG__ 64\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64X_DIG__ 18\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64X_MIN_EXP__ (-16381)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64X_MIN_10_EXP__ (-4931)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64X_MAX_EXP__ 16384\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64X_MAX_10_EXP__ 4932\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64X_DECIMAL_DIG__ 21\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64X_HAS_DENORM__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64X_HAS_INFINITY__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64X_HAS_QUIET_NAN__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FLT64X_IS_IEC_60559__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__BFLT16_MANT_DIG__ 8\0"
	.byte	0x1
	.uleb128 0
	.ascii "__BFLT16_DIG__ 2\0"
	.byte	0x1
	.uleb128 0
	.ascii "__BFLT16_MIN_EXP__ (-125)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__BFLT16_MIN_10_EXP__ (-37)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__BFLT16_MAX_EXP__ 128\0"
	.byte	0x1
	.uleb128 0
	.ascii "__BFLT16_MAX_10_EXP__ 38\0"
	.byte	0x1
	.uleb128 0
	.ascii "__BFLT16_DECIMAL_DIG__ 4\0"
	.byte	0x1
	.uleb128 0
	.ascii "__BFLT16_MAX__ 3.38953138925153547590470800371487867e+38BF16\0"
	.byte	0x1
	.uleb128 0
	.ascii "__BFLT16_NORM_MAX__ 3.38953138925153547590470800371487867e+38BF16\0"
	.byte	0x1
	.uleb128 0
	.ascii "__BFLT16_MIN__ 1.17549435082228750796873653722224568e-38BF16\0"
	.byte	0x1
	.uleb128 0
	.ascii "__BFLT16_EPSILON__ 7.81250000000000000000000000000000000e-3BF16\0"
	.byte	0x1
	.uleb128 0
	.ascii "__BFLT16_DENORM_MIN__ 9.18354961579912115600575419704879436e-41BF16\0"
	.byte	0x1
	.uleb128 0
	.ascii "__BFLT16_HAS_DENORM__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__BFLT16_HAS_INFINITY__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__BFLT16_HAS_QUIET_NAN__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__BFLT16_IS_IEC_60559__ 0\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DEC32_MANT_DIG__ 7\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DEC32_MIN_EXP__ (-94)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DEC32_MAX_EXP__ 97\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DEC32_MIN__ 1E-95DF\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DEC32_MAX__ 9.999999E96DF\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DEC32_EPSILON__ 1E-6DF\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DEC32_SUBNORMAL_MIN__ 0.000001E-95DF\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DEC64_MANT_DIG__ 16\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DEC64_MIN_EXP__ (-382)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DEC64_MAX_EXP__ 385\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DEC64_MIN__ 1E-383DD\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DEC64_MAX__ 9.999999999999999E384DD\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DEC64_EPSILON__ 1E-15DD\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DEC64_SUBNORMAL_MIN__ 0.000000000000001E-383DD\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DEC128_MANT_DIG__ 34\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DEC128_MIN_EXP__ (-6142)\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DEC128_MAX_EXP__ 6145\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DEC128_MIN__ 1E-6143DL\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DEC128_MAX__ 9.999999999999999999999999999999999E6144DL\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DEC128_EPSILON__ 1E-33DL\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DEC128_SUBNORMAL_MIN__ 0.000000000000000000000000000000001E-6143DL\0"
	.byte	0x1
	.uleb128 0
	.ascii "__REGISTER_PREFIX__ \0"
	.byte	0x1
	.uleb128 0
	.ascii "__USER_LABEL_PREFIX__ \0"
	.byte	0x1
	.uleb128 0
	.ascii "__GNUC_STDC_INLINE__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__NO_INLINE__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_16 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GCC_ATOMIC_BOOL_LOCK_FREE 2\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GCC_ATOMIC_CHAR_LOCK_FREE 2\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GCC_ATOMIC_CHAR16_T_LOCK_FREE 2\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GCC_ATOMIC_CHAR32_T_LOCK_FREE 2\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GCC_ATOMIC_WCHAR_T_LOCK_FREE 2\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GCC_ATOMIC_SHORT_LOCK_FREE 2\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GCC_ATOMIC_INT_LOCK_FREE 2\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GCC_ATOMIC_LONG_LOCK_FREE 2\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GCC_ATOMIC_LLONG_LOCK_FREE 2\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GCC_DESTRUCTIVE_SIZE 64\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GCC_CONSTRUCTIVE_SIZE 64\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GCC_ATOMIC_POINTER_LOCK_FREE 2\0"
	.byte	0x1
	.uleb128 0
	.ascii "__HAVE_SPECULATION_SAFE_VALUE 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GCC_HAVE_DWARF2_CFI_ASM 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__PRAGMA_REDEFINE_EXTNAME 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SIZEOF_INT128__ 16\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SIZEOF_WCHAR_T__ 2\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SIZEOF_WINT_T__ 2\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SIZEOF_PTRDIFF_T__ 8\0"
	.byte	0x1
	.uleb128 0
	.ascii "__amd64 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__amd64__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__x86_64 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__x86_64__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SIZEOF_FLOAT80__ 16\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SIZEOF_FLOAT128__ 16\0"
	.byte	0x1
	.uleb128 0
	.ascii "__ATOMIC_HLE_ACQUIRE 65536\0"
	.byte	0x1
	.uleb128 0
	.ascii "__ATOMIC_HLE_RELEASE 131072\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GCC_ASM_FLAG_OUTPUTS__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__nocona 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__nocona__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__tune_core2__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__code_model_medium__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__MMX__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SSE__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SSE2__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SSE3__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__FXSR__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SSE_MATH__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SSE2_MATH__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__MMX_WITH_SSE__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SEG_FS 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SEG_GS 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__SEH__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__stdcall __attribute__((__stdcall__))\0"
	.byte	0x1
	.uleb128 0
	.ascii "__fastcall __attribute__((__fastcall__))\0"
	.byte	0x1
	.uleb128 0
	.ascii "__thiscall __attribute__((__thiscall__))\0"
	.byte	0x1
	.uleb128 0
	.ascii "__cdecl __attribute__((__cdecl__))\0"
	.byte	0x1
	.uleb128 0
	.ascii "_stdcall __attribute__((__stdcall__))\0"
	.byte	0x1
	.uleb128 0
	.ascii "_fastcall __attribute__((__fastcall__))\0"
	.byte	0x1
	.uleb128 0
	.ascii "_thiscall __attribute__((__thiscall__))\0"
	.byte	0x1
	.uleb128 0
	.ascii "_cdecl __attribute__((__cdecl__))\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GXX_MERGED_TYPEINFO_NAMES 0\0"
	.byte	0x1
	.uleb128 0
	.ascii "__GXX_TYPEINFO_EQUALITY_INLINE 0\0"
	.byte	0x1
	.uleb128 0
	.ascii "__MSVCRT__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__MINGW32__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "_WIN32 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__WIN32 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__WIN32__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "WIN32 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__WINNT 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__WINNT__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "WINNT 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "_INTEGRAL_MAX_BITS 64\0"
	.byte	0x1
	.uleb128 0
	.ascii "__MINGW64__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__WIN64 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__WIN64__ 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "WIN64 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "_WIN64 1\0"
	.byte	0x1
	.uleb128 0
	.ascii "__declspec(x) __attribute__((x))\0"
	.byte	0x1
	.uleb128 0
	.ascii "__DECIMAL_BID_FORMAT__ 1\0"
	.byte	0x2
	.uleb128 0
	.ascii "_REENTRANT\0"
	.byte	0x3
	.uleb128 0
	.uleb128 0x1
	.file 3 "inc/main.h"
	.byte	0x3
	.uleb128 0x1
	.uleb128 0x3
	.byte	0x1
	.uleb128 0x2
	.ascii "MAIN_H_ \0"
	.byte	0x3
	.uleb128 0x4
	.uleb128 0x2
	.byte	0x1
	.uleb128 0x7
	.ascii "_INC_STDIO \0"
	.file 4 "D:/mingw64/x86_64-w64-mingw32/include/corecrt_stdio_config.h"
	.byte	0x3
	.uleb128 0x9
	.uleb128 0x4
	.byte	0x1
	.uleb128 0x8
	.ascii "_STDIO_CONFIG_DEFINED \0"
	.file 5 "D:/mingw64/x86_64-w64-mingw32/include/corecrt.h"
	.byte	0x3
	.uleb128 0xa
	.uleb128 0x5
	.byte	0x1
	.uleb128 0x8
	.ascii "_INC_CORECRT \0"
	.file 6 "D:/mingw64/x86_64-w64-mingw32/include/_mingw.h"
	.byte	0x3
	.uleb128 0xa
	.uleb128 0x6
	.byte	0x1
	.uleb128 0x8
	.ascii "_INC__MINGW_H \0"
	.file 7 "D:/mingw64/x86_64-w64-mingw32/include/_mingw_mac.h"
	.byte	0x3
	.uleb128 0xa
	.uleb128 0x7
	.byte	0x1
	.uleb128 0x8
	.ascii "_INC_CRTDEFS_MACRO \0"
	.byte	0x1
	.uleb128 0xa
	.ascii "__STRINGIFY(x) #x\0"
	.byte	0x1
	.uleb128 0xb
	.ascii "__MINGW64_STRINGIFY(x) __STRINGIFY(x)\0"
	.byte	0x1
	.uleb128 0xe
	.ascii "__MINGW64_VERSION_MAJOR 12\0"
	.byte	0x1
	.uleb128 0xf
	.ascii "__MINGW64_VERSION_MINOR 0\0"
	.byte	0x1
	.uleb128 0x10
	.ascii "__MINGW64_VERSION_BUGFIX 0\0"
	.byte	0x1
	.uleb128 0x18
	.ascii "__MINGW64_VERSION_RC 0\0"
	.byte	0x1
	.uleb128 0x1a
	.ascii "__MINGW64_VERSION_STR __MINGW64_STRINGIFY(__MINGW64_VERSION_MAJOR) \".\" __MINGW64_STRINGIFY(__MINGW64_VERSION_MINOR) \".\" __MINGW64_STRINGIFY(__MINGW64_VERSION_BUGFIX)\0"
	.byte	0x1
	.uleb128 0x21
	.ascii "__MINGW64_VERSION_STATE \"alpha\"\0"
	.byte	0x1
	.uleb128 0x27
	.ascii "__MINGW32_MAJOR_VERSION 3\0"
	.byte	0x1
	.uleb128 0x28
	.ascii "__MINGW32_MINOR_VERSION 11\0"
	.byte	0x1
	.uleb128 0x3e
	.ascii "_M_AMD64 100\0"
	.byte	0x1
	.uleb128 0x3f
	.ascii "_M_X64 100\0"
	.byte	0x2
	.uleb128 0x63
	.ascii "_\0"
	.byte	0x1
	.uleb128 0x64
	.ascii "_ 1\0"
	.byte	0x1
	.uleb128 0x68
	.ascii "__MINGW_USE_UNDERSCORE_PREFIX 0\0"
	.byte	0x2
	.uleb128 0x6a
	.ascii "_\0"
	.byte	0x1
	.uleb128 0x77
	.ascii "__MINGW_IMP_SYMBOL(sym) __imp_ ##sym\0"
	.byte	0x1
	.uleb128 0x78
	.ascii "__MINGW_IMP_LSYMBOL(sym) __imp_ ##sym\0"
	.byte	0x1
	.uleb128 0x79
	.ascii "__MINGW_USYMBOL(sym) sym\0"
	.byte	0x1
	.uleb128 0x7a
	.ascii "__MINGW_LSYMBOL(sym) _ ##sym\0"
	.byte	0x1
	.uleb128 0x82
	.ascii "__MINGW_ASM_CALL(func) __asm__(__MINGW64_STRINGIFY(__MINGW_USYMBOL(func)))\0"
	.byte	0x1
	.uleb128 0x83
	.ascii "__MINGW_ASM_CRT_CALL(func) __asm__(__STRINGIFY(func))\0"
	.byte	0x2
	.uleb128 0x9d
	.ascii "__MINGW_EXTENSION\0"
	.byte	0x1
	.uleb128 0xa3
	.ascii "__MINGW_EXTENSION __extension__\0"
	.byte	0x1
	.uleb128 0xab
	.ascii "__C89_NAMELESS __MINGW_EXTENSION\0"
	.byte	0x1
	.uleb128 0xac
	.ascii "__C89_NAMELESSSTRUCTNAME \0"
	.byte	0x1
	.uleb128 0xad
	.ascii "__C89_NAMELESSSTRUCTNAME1 \0"
	.byte	0x1
	.uleb128 0xae
	.ascii "__C89_NAMELESSSTRUCTNAME2 \0"
	.byte	0x1
	.uleb128 0xaf
	.ascii "__C89_NAMELESSSTRUCTNAME3 \0"
	.byte	0x1
	.uleb128 0xb0
	.ascii "__C89_NAMELESSSTRUCTNAME4 \0"
	.byte	0x1
	.uleb128 0xb1
	.ascii "__C89_NAMELESSSTRUCTNAME5 \0"
	.byte	0x1
	.uleb128 0xb2
	.ascii "__C89_NAMELESSUNIONNAME \0"
	.byte	0x1
	.uleb128 0xb3
	.ascii "__C89_NAMELESSUNIONNAME1 \0"
	.byte	0x1
	.uleb128 0xb4
	.ascii "__C89_NAMELESSUNIONNAME2 \0"
	.byte	0x1
	.uleb128 0xb5
	.ascii "__C89_NAMELESSUNIONNAME3 \0"
	.byte	0x1
	.uleb128 0xb6
	.ascii "__C89_NAMELESSUNIONNAME4 \0"
	.byte	0x1
	.uleb128 0xb7
	.ascii "__C89_NAMELESSUNIONNAME5 \0"
	.byte	0x1
	.uleb128 0xb8
	.ascii "__C89_NAMELESSUNIONNAME6 \0"
	.byte	0x1
	.uleb128 0xb9
	.ascii "__C89_NAMELESSUNIONNAME7 \0"
	.byte	0x1
	.uleb128 0xba
	.ascii "__C89_NAMELESSUNIONNAME8 \0"
	.byte	0x1
	.uleb128 0xbe
	.ascii "__GNU_EXTENSION __MINGW_EXTENSION\0"
	.byte	0x1
	.uleb128 0xc3
	.ascii "__MINGW_HAVE_ANSI_C99_PRINTF 1\0"
	.byte	0x1
	.uleb128 0xc4
	.ascii "__MINGW_HAVE_WIDE_C99_PRINTF 1\0"
	.byte	0x1
	.uleb128 0xc5
	.ascii "__MINGW_HAVE_ANSI_C99_SCANF 1\0"
	.byte	0x1
	.uleb128 0xc6
	.ascii "__MINGW_HAVE_WIDE_C99_SCANF 1\0"
	.byte	0x1
	.uleb128 0xcb
	.ascii "__MINGW_POISON_NAME(__IFACE) __IFACE ##_layout_has_not_been_verified_and_its_declaration_is_most_likely_incorrect\0"
	.byte	0x1
	.uleb128 0xd1
	.ascii "__MSABI_LONG(x) x ## l\0"
	.byte	0x1
	.uleb128 0xd8
	.ascii "__MINGW_GCC_VERSION (__GNUC__ * 10000 + __GNUC_MINOR__ * 100 + __GNUC_PATCHLEVEL__)\0"
	.byte	0x1
	.uleb128 0xe0
	.ascii "__MINGW_GNUC_PREREQ(major,minor) (__GNUC__ > (major) || (__GNUC__ == (major) && __GNUC_MINOR__ >= (minor)))\0"
	.byte	0x1
	.uleb128 0xeb
	.ascii "__MINGW_MSC_PREREQ(major,minor) 0\0"
	.byte	0x1
	.uleb128 0xf7
	.ascii "__MINGW_ATTRIB_DEPRECATED_STR(X) \0"
	.byte	0x1
	.uleb128 0xfa
	.ascii "__MINGW_SEC_WARN_STR \"This function or variable may be unsafe, use _CRT_SECURE_NO_WARNINGS to disable deprecation\"\0"
	.byte	0x1
	.uleb128 0xfd
	.ascii "__MINGW_MSVC2005_DEPREC_STR \"This POSIX function is deprecated beginning in Visual C++ 2005, use _CRT_NONSTDC_NO_DEPRECATE to disable deprecation\"\0"
	.byte	0x1
	.uleb128 0x101
	.ascii "__MINGW_ATTRIB_DEPRECATED_MSVC2005 __MINGW_ATTRIB_DEPRECATED_STR(__MINGW_MSVC2005_DEPREC_STR)\0"
	.byte	0x1
	.uleb128 0x108
	.ascii "__MINGW_ATTRIB_DEPRECATED_SEC_WARN __MINGW_ATTRIB_DEPRECATED_STR(__MINGW_SEC_WARN_STR)\0"
	.byte	0x1
	.uleb128 0x11b
	.ascii "__MINGW_MS_PRINTF(__format,__args) __attribute__((__format__(__ms_printf__, __format,__args)))\0"
	.byte	0x1
	.uleb128 0x11e
	.ascii "__MINGW_MS_SCANF(__format,__args) __attribute__((__format__(__ms_scanf__, __format,__args)))\0"
	.byte	0x1
	.uleb128 0x121
	.ascii "__MINGW_GNU_PRINTF(__format,__args) __attribute__((__format__(__gnu_printf__,__format,__args)))\0"
	.byte	0x1
	.uleb128 0x124
	.ascii "__MINGW_GNU_SCANF(__format,__args) __attribute__((__format__(__gnu_scanf__, __format,__args)))\0"
	.byte	0x2
	.uleb128 0x128
	.ascii "__mingw_ovr\0"
	.byte	0x1
	.uleb128 0x12d
	.ascii "__mingw_ovr static __attribute__ ((__unused__)) __inline__ __cdecl\0"
	.byte	0x1
	.uleb128 0x134
	.ascii "__mingw_attribute_artificial __attribute__((__artificial__))\0"
	.byte	0x1
	.uleb128 0x13a
	.ascii "__MINGW_SELECTANY __attribute__((__selectany__))\0"
	.byte	0x1
	.uleb128 0x153
	.ascii "__MINGW_FORTIFY_LEVEL 0\0"
	.byte	0x1
	.uleb128 0x17b
	.ascii "__mingw_bos_ovr __mingw_ovr\0"
	.byte	0x1
	.uleb128 0x188
	.ascii "__MINGW_FORTIFY_VA_ARG 0\0"
	.byte	0x2
	.uleb128 0x18b
	.ascii "__has_builtin\0"
	.byte	0x4
	.file 8 "D:/mingw64/x86_64-w64-mingw32/include/_mingw_secapi.h"
	.byte	0x3
	.uleb128 0xb
	.uleb128 0x8
	.byte	0x1
	.uleb128 0x8
	.ascii "_INC_MINGW_SECAPI \0"
	.byte	0x2
	.uleb128 0x1d
	.ascii "_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES\0"
	.byte	0x2
	.uleb128 0x1e
	.ascii "_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES_MEMORY\0"
	.byte	0x2
	.uleb128 0x1f
	.ascii "_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES\0"
	.byte	0x2
	.uleb128 0x20
	.ascii "_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT\0"
	.byte	0x2
	.uleb128 0x21
	.ascii "_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_MEMORY\0"
	.byte	0x1
	.uleb128 0x22
	.ascii "_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES 0\0"
	.byte	0x1
	.uleb128 0x23
	.ascii "_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES_MEMORY 0\0"
	.byte	0x1
	.uleb128 0x24
	.ascii "_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 0\0"
	.byte	0x1
	.uleb128 0x25
	.ascii "_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT 0\0"
	.byte	0x1
	.uleb128 0x26
	.ascii "_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_MEMORY 0\0"
	.byte	0x1
	.uleb128 0x29
	.ascii "__MINGW_CRT_NAME_CONCAT2(sym) ::sym ##_s\0"
	.byte	0x1
	.uleb128 0x45
	.ascii "__CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_MEMORY_0_3_(__ret,__func,__type1,__attrib1,__arg1,__type2,__attrib2,__arg2,__type3,__attrib3,__arg3) _CRTIMP __ret __cdecl __func(__type1 * __attrib1 __arg1, __type2 __attrib2 __arg2, __type3 __attrib3 __arg3) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;\0"
	.byte	0x4
	.byte	0x1
	.uleb128 0x18
	.ascii "__LONG32 long\0"
	.byte	0x1
	.uleb128 0x2c
	.ascii "__MINGW_IMPORT extern __attribute__ ((__dllimport__))\0"
	.byte	0x2
	.uleb128 0x2f
	.ascii "__USE_CRTIMP\0"
	.byte	0x1
	.uleb128 0x31
	.ascii "__USE_CRTIMP 1\0"
	.byte	0x1
	.uleb128 0x34
	.ascii "_CRTIMP __attribute__ ((__dllimport__))\0"
	.byte	0x1
	.uleb128 0x39
	.ascii "__DECLSPEC_SUPPORTED \0"
	.byte	0x1
	.uleb128 0x46
	.ascii "USE___UUIDOF 0\0"
	.byte	0x1
	.uleb128 0x4a
	.ascii "_inline __inline\0"
	.byte	0x1
	.uleb128 0x53
	.ascii "__CRT_INLINE extern inline __attribute__((__gnu_inline__))\0"
	.byte	0x1
	.uleb128 0x5a
	.ascii "__MINGW_INTRIN_INLINE extern __inline__ __attribute__((__always_inline__,__gnu_inline__))\0"
	.byte	0x2
	.uleb128 0x5f
	.ascii "__CRT__NO_INLINE\0"
	.byte	0x1
	.uleb128 0x60
	.ascii "__CRT__NO_INLINE 1\0"
	.byte	0x1
	.uleb128 0x68
	.ascii "__UNUSED_PARAM(x) x __attribute__ ((__unused__))\0"
	.byte	0x1
	.uleb128 0x77
	.ascii "__restrict_arr __restrict\0"
	.byte	0x1
	.uleb128 0x87
	.ascii "__MINGW_ATTRIB_NORETURN __attribute__ ((__noreturn__))\0"
	.byte	0x1
	.uleb128 0x88
	.ascii "__MINGW_ATTRIB_CONST __attribute__ ((__const__))\0"
	.byte	0x1
	.uleb128 0x92
	.ascii "__MINGW_ATTRIB_MALLOC __attribute__ ((__malloc__))\0"
	.byte	0x1
	.uleb128 0x93
	.ascii "__MINGW_ATTRIB_PURE __attribute__ ((__pure__))\0"
	.byte	0x1
	.uleb128 0xa0
	.ascii "__MINGW_ATTRIB_NONNULL(arg) __attribute__ ((__nonnull__ (arg)))\0"
	.byte	0x1
	.uleb128 0xa6
	.ascii "__MINGW_ATTRIB_UNUSED __attribute__ ((__unused__))\0"
	.byte	0x1
	.uleb128 0xac
	.ascii "__MINGW_ATTRIB_USED __attribute__ ((__used__))\0"
	.byte	0x1
	.uleb128 0xad
	.ascii "__MINGW_ATTRIB_DEPRECATED __attribute__ ((__deprecated__))\0"
	.byte	0x1
	.uleb128 0xaf
	.ascii "__MINGW_ATTRIB_DEPRECATED_MSG(x) __attribute__ ((__deprecated__(x)))\0"
	.byte	0x1
	.uleb128 0xbe
	.ascii "__MINGW_NOTHROW __attribute__ ((__nothrow__))\0"
	.byte	0x1
	.uleb128 0xc6
	.ascii "__MINGW_ATTRIB_NO_OPTIMIZE __attribute__((__optimize__ (\"0\")))\0"
	.byte	0x1
	.uleb128 0xcc
	.ascii "__MINGW_PRAGMA_PARAM(x) _Pragma (#x)\0"
	.byte	0x1
	.uleb128 0xd3
	.ascii "__MINGW_BROKEN_INTERFACE(x) __MINGW_PRAGMA_PARAM(message (\"Interface \" _CRT_STRINGIZE(x) \" has unverified layout.\"))\0"
	.byte	0x1
	.uleb128 0xde
	.ascii "__MSVCRT_VERSION__ 0xE00\0"
	.byte	0x1
	.uleb128 0xe4
	.ascii "_UCRT \0"
	.byte	0x1
	.uleb128 0xe8
	.ascii "_WIN32_WINNT 0xa00\0"
	.byte	0x1
	.uleb128 0xec
	.ascii "_INT128_DEFINED \0"
	.byte	0x1
	.uleb128 0xee
	.ascii "__int8 char\0"
	.byte	0x1
	.uleb128 0xef
	.ascii "__int16 short\0"
	.byte	0x1
	.uleb128 0xf0
	.ascii "__int32 int\0"
	.byte	0x1
	.uleb128 0xf1
	.ascii "__int64 long long\0"
	.byte	0x1
	.uleb128 0xff
	.ascii "__ptr32 \0"
	.byte	0x1
	.uleb128 0x100
	.ascii "__ptr64 \0"
	.byte	0x1
	.uleb128 0x102
	.ascii "__unaligned \0"
	.byte	0x1
	.uleb128 0x105
	.ascii "__w64 \0"
	.byte	0x1
	.uleb128 0x10a
	.ascii "__forceinline extern __inline__ __attribute__((__always_inline__,__gnu_inline__))\0"
	.byte	0x1
	.uleb128 0x116
	.ascii "__nothrow \0"
	.file 9 "D:/mingw64/x86_64-w64-mingw32/include/vadefs.h"
	.byte	0x3
	.uleb128 0x11a
	.uleb128 0x9
	.byte	0x1
	.uleb128 0x7
	.ascii "_INC_VADEFS \0"
	.byte	0x3
	.uleb128 0x9
	.uleb128 0x6
	.byte	0x1
	.uleb128 0x28a
	.ascii "MINGW_SDK_INIT \0"
	.byte	0x1
	.uleb128 0x28e
	.ascii "MINGW_HAS_SECURE_API 1\0"
	.byte	0x1
	.uleb128 0x291
	.ascii "__STDC_SECURE_LIB__ 200411L\0"
	.byte	0x1
	.uleb128 0x292
	.ascii "__GOT_SECURE_LIB__ __STDC_SECURE_LIB__\0"
	.file 10 "D:/mingw64/x86_64-w64-mingw32/include/sdks/_mingw_ddk.h"
	.byte	0x3
	.uleb128 0x295
	.uleb128 0xa
	.byte	0x1
	.uleb128 0x2
	.ascii "MINGW_DDK_H \0"
	.byte	0x1
	.uleb128 0x4
	.ascii "MINGW_HAS_DDK_H 1\0"
	.byte	0x4
	.byte	0x4
	.byte	0x2
	.uleb128 0xc
	.ascii "_CRT_PACKING\0"
	.byte	0x1
	.uleb128 0xd
	.ascii "_CRT_PACKING 8\0"
	.byte	0x1
	.uleb128 0x17
	.ascii "__GNUC_VA_LIST \0"
	.byte	0x1
	.uleb128 0x1d
	.ascii "_VA_LIST_DEFINED \0"
	.byte	0x1
	.uleb128 0x2a
	.ascii "_ADDRESSOF(v) (&(v))\0"
	.byte	0x1
	.uleb128 0x30
	.ascii "_crt_va_start(v,l) __builtin_va_start(v,l)\0"
	.byte	0x1
	.uleb128 0x31
	.ascii "_crt_va_arg(v,l) __builtin_va_arg(v,l)\0"
	.byte	0x1
	.uleb128 0x32
	.ascii "_crt_va_end(v) __builtin_va_end(v)\0"
	.byte	0x1
	.uleb128 0x33
	.ascii "_crt_va_copy(d,s) __builtin_va_copy(d,s)\0"
	.byte	0x4
	.byte	0x1
	.uleb128 0x11d
	.ascii "__CRT_STRINGIZE(_Value) #_Value\0"
	.byte	0x1
	.uleb128 0x11e
	.ascii "_CRT_STRINGIZE(_Value) __CRT_STRINGIZE(_Value)\0"
	.byte	0x1
	.uleb128 0x122
	.ascii "__CRT_WIDE(_String) L ## _String\0"
	.byte	0x1
	.uleb128 0x123
	.ascii "_CRT_WIDE(_String) __CRT_WIDE(_String)\0"
	.byte	0x1
	.uleb128 0x127
	.ascii "_W64 \0"
	.byte	0x1
	.uleb128 0x12e
	.ascii "_CRTIMP_NOIA64 _CRTIMP\0"
	.byte	0x1
	.uleb128 0x133
	.ascii "_CRTIMP2 _CRTIMP\0"
	.byte	0x1
	.uleb128 0x137
	.ascii "_CRTIMP_ALTERNATIVE _CRTIMP\0"
	.byte	0x1
	.uleb128 0x138
	.ascii "_CRT_ALTERNATIVE_IMPORTED \0"
	.byte	0x1
	.uleb128 0x13c
	.ascii "_MRTIMP2 _CRTIMP\0"
	.byte	0x1
	.uleb128 0x145
	.ascii "_DLL \0"
	.byte	0x1
	.uleb128 0x149
	.ascii "_MT \0"
	.byte	0x1
	.uleb128 0x14d
	.ascii "_MCRTIMP _CRTIMP\0"
	.byte	0x1
	.uleb128 0x151
	.ascii "_CRTIMP_PURE _CRTIMP\0"
	.byte	0x1
	.uleb128 0x155
	.ascii "_PGLOBAL \0"
	.byte	0x1
	.uleb128 0x159
	.ascii "_AGLOBAL \0"
	.byte	0x1
	.uleb128 0x15c
	.ascii "_SECURECRT_FILL_BUFFER_PATTERN 0xFD\0"
	.byte	0x1
	.uleb128 0x15d
	.ascii "_CRT_DEPRECATE_TEXT(_Text) __declspec(deprecated)\0"
	.byte	0x1
	.uleb128 0x160
	.ascii "_CRT_INSECURE_DEPRECATE_MEMORY(_Replacement) \0"
	.byte	0x1
	.uleb128 0x164
	.ascii "_CRT_INSECURE_DEPRECATE_GLOBALS(_Replacement) \0"
	.byte	0x1
	.uleb128 0x168
	.ascii "_CRT_MANAGED_HEAP_DEPRECATE \0"
	.byte	0x1
	.uleb128 0x16c
	.ascii "_CRT_OBSOLETE(_NewItem) \0"
	.byte	0x1
	.uleb128 0x178
	.ascii "_CONST_RETURN \0"
	.byte	0x1
	.uleb128 0x17d
	.ascii "UNALIGNED __unaligned\0"
	.byte	0x1
	.uleb128 0x187
	.ascii "_CRT_ALIGN(x) __attribute__ ((__aligned__ (x)))\0"
	.byte	0x1
	.uleb128 0x18e
	.ascii "__CRTDECL __cdecl\0"
	.byte	0x1
	.uleb128 0x191
	.ascii "_ARGMAX 100\0"
	.byte	0x1
	.uleb128 0x194
	.ascii "_TRUNCATE ((size_t)-1)\0"
	.byte	0x1
	.uleb128 0x198
	.ascii "_CRT_UNUSED(x) (void)x\0"
	.byte	0x1
	.uleb128 0x1b2
	.ascii "__USE_MINGW_ANSI_STDIO 0\0"
	.byte	0x2
	.uleb128 0x1c6
	.ascii "_CRT_glob\0"
	.byte	0x1
	.uleb128 0x1c7
	.ascii "_CRT_glob _dowildcard\0"
	.byte	0x1
	.uleb128 0x1d7
	.ascii "__ANONYMOUS_DEFINED \0"
	.byte	0x1
	.uleb128 0x1d8
	.ascii "_ANONYMOUS_UNION __MINGW_EXTENSION\0"
	.byte	0x1
	.uleb128 0x1d9
	.ascii "_ANONYMOUS_STRUCT __MINGW_EXTENSION\0"
	.byte	0x1
	.uleb128 0x1db
	.ascii "_UNION_NAME(x) \0"
	.byte	0x1
	.uleb128 0x1dc
	.ascii "_STRUCT_NAME(x) \0"
	.byte	0x1
	.uleb128 0x1f0
	.ascii "DUMMYUNIONNAME \0"
	.byte	0x1
	.uleb128 0x1f1
	.ascii "DUMMYUNIONNAME1 \0"
	.byte	0x1
	.uleb128 0x1f2
	.ascii "DUMMYUNIONNAME2 \0"
	.byte	0x1
	.uleb128 0x1f3
	.ascii "DUMMYUNIONNAME3 \0"
	.byte	0x1
	.uleb128 0x1f4
	.ascii "DUMMYUNIONNAME4 \0"
	.byte	0x1
	.uleb128 0x1f5
	.ascii "DUMMYUNIONNAME5 \0"
	.byte	0x1
	.uleb128 0x1f6
	.ascii "DUMMYUNIONNAME6 \0"
	.byte	0x1
	.uleb128 0x1f7
	.ascii "DUMMYUNIONNAME7 \0"
	.byte	0x1
	.uleb128 0x1f8
	.ascii "DUMMYUNIONNAME8 \0"
	.byte	0x1
	.uleb128 0x1f9
	.ascii "DUMMYUNIONNAME9 \0"
	.byte	0x1
	.uleb128 0x206
	.ascii "DUMMYSTRUCTNAME \0"
	.byte	0x1
	.uleb128 0x207
	.ascii "DUMMYSTRUCTNAME1 \0"
	.byte	0x1
	.uleb128 0x208
	.ascii "DUMMYSTRUCTNAME2 \0"
	.byte	0x1
	.uleb128 0x209
	.ascii "DUMMYSTRUCTNAME3 \0"
	.byte	0x1
	.uleb128 0x20a
	.ascii "DUMMYSTRUCTNAME4 \0"
	.byte	0x1
	.uleb128 0x20b
	.ascii "DUMMYSTRUCTNAME5 \0"
	.byte	0x1
	.uleb128 0x233
	.ascii "__CRT_UUID_DECL(type,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \0"
	.byte	0x1
	.uleb128 0x23f
	.ascii "__MINGW_DEBUGBREAK_IMPL !__has_builtin(__debugbreak)\0"
	.byte	0x1
	.uleb128 0x254
	.ascii "__MINGW_FASTFAIL_IMPL !__has_builtin(__fastfail)\0"
	.byte	0x1
	.uleb128 0x26c
	.ascii "__MINGW_PREFETCH_IMPL !__has_builtin(__prefetch)\0"
	.byte	0x4
	.byte	0x2
	.uleb128 0xd
	.ascii "_CRT_PACKING\0"
	.byte	0x1
	.uleb128 0xe
	.ascii "_CRT_PACKING 8\0"
	.byte	0x1
	.uleb128 0x18
	.ascii "_CRTNOALIAS \0"
	.byte	0x1
	.uleb128 0x1c
	.ascii "_CRTRESTRICT \0"
	.byte	0x1
	.uleb128 0x20
	.ascii "_SIZE_T_DEFINED \0"
	.byte	0x2
	.uleb128 0x21
	.ascii "size_t\0"
	.byte	0x1
	.uleb128 0x2a
	.ascii "_SSIZE_T_DEFINED \0"
	.byte	0x2
	.uleb128 0x2b
	.ascii "ssize_t\0"
	.byte	0x1
	.uleb128 0x35
	.ascii "_RSIZE_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x39
	.ascii "_INTPTR_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x3b
	.ascii "__intptr_t_defined \0"
	.byte	0x2
	.uleb128 0x3c
	.ascii "intptr_t\0"
	.byte	0x1
	.uleb128 0x46
	.ascii "_UINTPTR_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x48
	.ascii "__uintptr_t_defined \0"
	.byte	0x2
	.uleb128 0x49
	.ascii "uintptr_t\0"
	.byte	0x1
	.uleb128 0x53
	.ascii "_PTRDIFF_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x55
	.ascii "_PTRDIFF_T_ \0"
	.byte	0x2
	.uleb128 0x56
	.ascii "ptrdiff_t\0"
	.byte	0x1
	.uleb128 0x60
	.ascii "_WCHAR_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x67
	.ascii "_WCTYPE_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x69
	.ascii "_WINT_T \0"
	.byte	0x1
	.uleb128 0x70
	.ascii "_ERRCODE_DEFINED \0"
	.byte	0x1
	.uleb128 0x75
	.ascii "_TIME32_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x7a
	.ascii "_TIME64_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x86
	.ascii "_TIME_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x8f
	.ascii "_CRT_SECURE_CPP_NOTHROW throw()\0"
	.byte	0x1
	.uleb128 0x106
	.ascii "__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(__ret,__func,__dsttype,__dst) \0"
	.byte	0x1
	.uleb128 0x107
	.ascii "__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(__ret,__func,__dsttype,__dst,__type1,__arg1) \0"
	.byte	0x1
	.uleb128 0x108
	.ascii "__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(__ret,__func,__dsttype,__dst,__type1,__arg1,__type2,__arg2) \0"
	.byte	0x1
	.uleb128 0x109
	.ascii "__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_3(__ret,__func,__dsttype,__dst,__type1,__arg1,__type2,__arg2,__type3,__arg3) \0"
	.byte	0x1
	.uleb128 0x10a
	.ascii "__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(__ret,__func,__dsttype,__dst,__type1,__arg1,__type2,__arg2,__type3,__arg3,__type4,__arg4) \0"
	.byte	0x1
	.uleb128 0x10b
	.ascii "__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(__ret,__func,__type0,__arg0,__dsttype,__dst,__type1,__arg1) \0"
	.byte	0x1
	.uleb128 0x10c
	.ascii "__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_2(__ret,__func,__type0,__arg0,__dsttype,__dst,__type1,__arg1,__type2,__arg2) \0"
	.byte	0x1
	.uleb128 0x10d
	.ascii "__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_3(__ret,__func,__type0,__arg0,__dsttype,__dst,__type1,__arg1,__type2,__arg2,__type3,__arg3) \0"
	.byte	0x1
	.uleb128 0x10e
	.ascii "__DEFINE_CPP_OVERLOAD_SECURE_FUNC_2_0(__ret,__func,__type1,__arg1,__type2,__arg2,__dsttype,__dst) \0"
	.byte	0x1
	.uleb128 0x10f
	.ascii "__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1_ARGLIST(__ret,__func,__vfunc,__dsttype,__dst,__type1,__arg1) \0"
	.byte	0x1
	.uleb128 0x110
	.ascii "__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2_ARGLIST(__ret,__func,__vfunc,__dsttype,__dst,__type1,__arg1,__type2,__arg2) \0"
	.byte	0x1
	.uleb128 0x111
	.ascii "__DEFINE_CPP_OVERLOAD_SECURE_FUNC_SPLITPATH(__ret,__func,__dsttype,__src) \0"
	.byte	0x1
	.uleb128 0x115
	.ascii "__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(__ret_type,__ret_policy,__decl_spec,__name,__dst_attr,__dst_type,__dst) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX(__ret_type, __ret_policy, __decl_spec, __func_name, __func_name ##_s, __dst_attr, __dst_type, __dst)\0"
	.byte	0x1
	.uleb128 0x117
	.ascii "__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1(__ret_type,__ret_policy,__decl_spec,__name,__dst_attr,__dst_type,__dst,__arg1_type,__arg1) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(__ret_type, __ret_policy, __decl_spec, __func_name, __func_name ##_s, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2)\0"
	.byte	0x1
	.uleb128 0x119
	.ascii "__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2(__ret_type,__ret_policy,__decl_spec,__name,__dst_attr,__dst_type,__dst,__arg1_type,__arg1,__arg2_type,__arg2) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(__ret_type, __ret_policy, __decl_spec, __func_name, __func_name ##_s, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2)\0"
	.byte	0x1
	.uleb128 0x11b
	.ascii "__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3(__ret_type,__ret_policy,__decl_spec,__name,__dst_attr,__dst_type,__dst,__arg1_type,__arg1,__arg2_type,__arg2,__arg3_type,__arg3) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX(__ret_type, __ret_policy, __decl_spec, __func_name, __func_name ##_s, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2, __arg3_type, __arg3)\0"
	.byte	0x1
	.uleb128 0x11d
	.ascii "__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4(__ret_type,__ret_policy,__decl_spec,__name,__dst_attr,__dst_type,__dst,__arg1_type,__arg1,__arg2_type,__arg2,__arg3_type,__arg3,__arg4_type,__arg4) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX(__ret_type, __ret_policy, __decl_spec, __func_name, __func_name ##_s, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2, __arg3_type, __arg3, __arg4_type, __arg4)\0"
	.byte	0x1
	.uleb128 0x1a6
	.ascii "__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX(__ret_type,__ret_policy,__decl_spec,__name,__sec_name,__dst_attr,__dst_type,__dst) \0"
	.byte	0x1
	.uleb128 0x1a7
	.ascii "__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_EX(__ret_type,__ret_policy,__decl_spec,__name,__sec_name,__dst_attr,__dst_type,__dst,__arg1_type,__arg1) \0"
	.byte	0x1
	.uleb128 0x1a8
	.ascii "__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(__ret_type,__ret_policy,__decl_spec,__name,__sec_name,__dst_attr,__dst_type,__dst,__arg1_type,__arg1,__arg2_type,__arg2) \0"
	.byte	0x1
	.uleb128 0x1a9
	.ascii "__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX(__ret_type,__ret_policy,__decl_spec,__name,__sec_name,__dst_attr,__dst_type,__dst,__arg1_type,__arg1,__arg2_type,__arg2,__arg3_type,__arg3) \0"
	.byte	0x1
	.uleb128 0x1aa
	.ascii "__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX(__ret_type,__ret_policy,__decl_spec,__name,__sec_name,__dst_attr,__dst_type,__dst,__arg1_type,__arg1,__arg2_type,__arg2,__arg3_type,__arg3,__arg4_type,__arg4) \0"
	.byte	0x1
	.uleb128 0x1ba
	.ascii "_TAGLC_ID_DEFINED \0"
	.byte	0x1
	.uleb128 0x1c3
	.ascii "_THREADLOCALEINFO \0"
	.byte	0x1
	.uleb128 0x1e6
	.ascii "__crt_typefix(ctype) \0"
	.byte	0x1
	.uleb128 0x1f0
	.ascii "_CRT_USE_WINAPI_FAMILY_DESKTOP_APP \0"
	.byte	0x4
	.byte	0x1
	.uleb128 0xc
	.ascii "_CRT_INTERNAL_PRINTF_LEGACY_VSPRINTF_NULL_TERMINATION 0x0001ULL\0"
	.byte	0x1
	.uleb128 0xd
	.ascii "_CRT_INTERNAL_PRINTF_STANDARD_SNPRINTF_BEHAVIOR 0x0002ULL\0"
	.byte	0x1
	.uleb128 0xe
	.ascii "_CRT_INTERNAL_PRINTF_LEGACY_WIDE_SPECIFIERS 0x0004ULL\0"
	.byte	0x1
	.uleb128 0xf
	.ascii "_CRT_INTERNAL_PRINTF_LEGACY_MSVCRT_COMPATIBILITY 0x0008ULL\0"
	.byte	0x1
	.uleb128 0x10
	.ascii "_CRT_INTERNAL_PRINTF_LEGACY_THREE_DIGIT_EXPONENTS 0x0010ULL\0"
	.byte	0x1
	.uleb128 0x12
	.ascii "_CRT_INTERNAL_SCANF_SECURECRT 0x0001ULL\0"
	.byte	0x1
	.uleb128 0x13
	.ascii "_CRT_INTERNAL_SCANF_LEGACY_WIDE_SPECIFIERS 0x0002ULL\0"
	.byte	0x1
	.uleb128 0x14
	.ascii "_CRT_INTERNAL_SCANF_LEGACY_MSVCRT_COMPATIBILITY 0x0004ULL\0"
	.byte	0x1
	.uleb128 0x17
	.ascii "_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS _CRT_INTERNAL_PRINTF_LEGACY_WIDE_SPECIFIERS\0"
	.byte	0x1
	.uleb128 0x1b
	.ascii "_CRT_INTERNAL_LOCAL_SCANF_OPTIONS _CRT_INTERNAL_SCANF_LEGACY_WIDE_SPECIFIERS\0"
	.byte	0x4
	.byte	0x2
	.uleb128 0xe
	.ascii "snprintf\0"
	.byte	0x2
	.uleb128 0x10
	.ascii "vsnprintf\0"
	.byte	0x2
	.uleb128 0x12
	.ascii "snwprintf\0"
	.byte	0x2
	.uleb128 0x14
	.ascii "vsnwprintf\0"
	.byte	0x1
	.uleb128 0x1a
	.ascii "BUFSIZ 512\0"
	.byte	0x1
	.uleb128 0x1b
	.ascii "_NFILE _NSTREAM_\0"
	.byte	0x1
	.uleb128 0x1c
	.ascii "_NSTREAM_ 512\0"
	.byte	0x1
	.uleb128 0x1d
	.ascii "_IOB_ENTRIES 20\0"
	.byte	0x1
	.uleb128 0x1e
	.ascii "EOF (-1)\0"
	.byte	0x1
	.uleb128 0x30
	.ascii "_FILE_DEFINED \0"
	.byte	0x1
	.uleb128 0x37
	.ascii "_P_tmpdir \"\\\\\"\0"
	.byte	0x1
	.uleb128 0x38
	.ascii "_wP_tmpdir L\"\\\\\"\0"
	.byte	0x1
	.uleb128 0x3c
	.ascii "L_tmpnam 260\0"
	.byte	0x1
	.uleb128 0x46
	.ascii "SEEK_CUR 1\0"
	.byte	0x1
	.uleb128 0x47
	.ascii "SEEK_END 2\0"
	.byte	0x1
	.uleb128 0x48
	.ascii "SEEK_SET 0\0"
	.byte	0x1
	.uleb128 0x4a
	.ascii "STDIN_FILENO 0\0"
	.byte	0x1
	.uleb128 0x4b
	.ascii "STDOUT_FILENO 1\0"
	.byte	0x1
	.uleb128 0x4c
	.ascii "STDERR_FILENO 2\0"
	.byte	0x1
	.uleb128 0x4e
	.ascii "FILENAME_MAX 260\0"
	.byte	0x1
	.uleb128 0x4f
	.ascii "FOPEN_MAX 20\0"
	.byte	0x1
	.uleb128 0x50
	.ascii "_SYS_OPEN 20\0"
	.byte	0x1
	.uleb128 0x52
	.ascii "TMP_MAX 2147483647\0"
	.byte	0x1
	.uleb128 0x5f
	.ascii "NULL ((void *)0)\0"
	.file 11 "D:/mingw64/x86_64-w64-mingw32/include/_mingw_off_t.h"
	.byte	0x3
	.uleb128 0x63
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x2
	.ascii "_OFF_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x4
	.ascii "_OFF_T_ \0"
	.byte	0x1
	.uleb128 0xc
	.ascii "_OFF64_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x15
	.ascii "_FILE_OFFSET_BITS_SET_OFFT \0"
	.byte	0x4
	.byte	0x1
	.uleb128 0x69
	.ascii "_iob __iob_func()\0"
	.byte	0x1
	.uleb128 0x77
	.ascii "_FPOS_T_DEFINED \0"
	.byte	0x2
	.uleb128 0x78
	.ascii "_FPOSOFF\0"
	.byte	0x1
	.uleb128 0x7c
	.ascii "_FPOSOFF(fp) ((long)(fp))\0"
	.byte	0x1
	.uleb128 0x85
	.ascii "_STDSTREAM_DEFINED \0"
	.byte	0x1
	.uleb128 0x87
	.ascii "stdin (__acrt_iob_func(0))\0"
	.byte	0x1
	.uleb128 0x88
	.ascii "stdout (__acrt_iob_func(1))\0"
	.byte	0x1
	.uleb128 0x89
	.ascii "stderr (__acrt_iob_func(2))\0"
	.byte	0x1
	.uleb128 0x8c
	.ascii "_IOFBF 0x0000\0"
	.byte	0x1
	.uleb128 0x8d
	.ascii "_IOLBF 0x0040\0"
	.byte	0x1
	.uleb128 0x8e
	.ascii "_IONBF 0x0004\0"
	.byte	0x2
	.uleb128 0xfe
	.ascii "__MINGW_PRINTF_FORMAT\0"
	.byte	0x2
	.uleb128 0xff
	.ascii "__MINGW_SCANF_FORMAT\0"
	.byte	0x1
	.uleb128 0x105
	.ascii "__MINGW_PRINTF_FORMAT __gnu_printf__\0"
	.byte	0x1
	.uleb128 0x106
	.ascii "__MINGW_SCANF_FORMAT __gnu_scanf__\0"
	.byte	0x2
	.uleb128 0x1f3
	.ascii "__builtin_vsnprintf\0"
	.byte	0x2
	.uleb128 0x1f4
	.ascii "__builtin_vsprintf\0"
	.byte	0x1
	.uleb128 0x2ad
	.ascii "_FILE_OFFSET_BITS_SET_FSEEKO \0"
	.byte	0x1
	.uleb128 0x2b4
	.ascii "_FILE_OFFSET_BITS_SET_FTELLO \0"
	.byte	0x1
	.uleb128 0x2c2
	.ascii "_CRT_PERROR_DEFINED \0"
	.byte	0x1
	.uleb128 0x2c9
	.ascii "popen _popen\0"
	.byte	0x1
	.uleb128 0x2ca
	.ascii "pclose _pclose\0"
	.byte	0x1
	.uleb128 0x2d2
	.ascii "_CRT_DIRECTORY_DEFINED \0"
	.byte	0x1
	.uleb128 0x3e0
	.ascii "_WSTDIO_DEFINED \0"
	.byte	0x1
	.uleb128 0x518
	.ascii "WEOF (wint_t)(0xFFFF)\0"
	.file 12 "D:/mingw64/x86_64-w64-mingw32/include/swprintf.inl"
	.byte	0x3
	.uleb128 0x58a
	.uleb128 0xc
	.byte	0x1
	.uleb128 0x8
	.ascii "_INC_SWPRINTF_INL \0"
	.byte	0x4
	.byte	0x1
	.uleb128 0x59b
	.ascii "_CRT_WPERROR_DEFINED \0"
	.byte	0x1
	.uleb128 0x5a0
	.ascii "wpopen _wpopen\0"
	.byte	0x2
	.uleb128 0x5ab
	.ascii "_CRT_GETPUTWCHAR_NOINLINE\0"
	.byte	0x1
	.uleb128 0x5ae
	.ascii "getwchar() fgetwc(stdin)\0"
	.byte	0x1
	.uleb128 0x5af
	.ascii "putwchar(_c) fputwc((_c),stdout)\0"
	.byte	0x1
	.uleb128 0x5b5
	.ascii "getwc(_stm) fgetwc(_stm)\0"
	.byte	0x1
	.uleb128 0x5b6
	.ascii "putwc(_c,_stm) fputwc(_c,_stm)\0"
	.byte	0x1
	.uleb128 0x5b8
	.ascii "_putwc_nolock(_c,_stm) _fputwc_nolock(_c,_stm)\0"
	.byte	0x1
	.uleb128 0x5b9
	.ascii "_getwc_nolock(_c) _fgetwc_nolock(_c)\0"
	.byte	0x1
	.uleb128 0x5bd
	.ascii "_STDIO_DEFINED \0"
	.byte	0x1
	.uleb128 0x5cb
	.ascii "_getchar_nolock() _getc_nolock(stdin)\0"
	.byte	0x1
	.uleb128 0x5cc
	.ascii "_putchar_nolock(_c) _putc_nolock((_c),stdout)\0"
	.byte	0x1
	.uleb128 0x5cd
	.ascii "_getwchar_nolock() _getwc_nolock(stdin)\0"
	.byte	0x1
	.uleb128 0x5ce
	.ascii "_putwchar_nolock(_c) _putwc_nolock((_c),stdout)\0"
	.byte	0x1
	.uleb128 0x5df
	.ascii "P_tmpdir _P_tmpdir\0"
	.byte	0x1
	.uleb128 0x5e0
	.ascii "SYS_OPEN _SYS_OPEN\0"
	.byte	0x1
	.uleb128 0x5ef
	.ascii "__MINGW_MBWC_CONVERT_DEFINED \0"
	.byte	0x1
	.uleb128 0x619
	.ascii "_WSPAWN_DEFINED \0"
	.byte	0x1
	.uleb128 0x625
	.ascii "_P_WAIT 0\0"
	.byte	0x1
	.uleb128 0x626
	.ascii "_P_NOWAIT 1\0"
	.byte	0x1
	.uleb128 0x627
	.ascii "_OLD_P_OVERLAY 2\0"
	.byte	0x1
	.uleb128 0x628
	.ascii "_P_NOWAITO 3\0"
	.byte	0x1
	.uleb128 0x629
	.ascii "_P_DETACH 4\0"
	.byte	0x1
	.uleb128 0x62a
	.ascii "_P_OVERLAY 2\0"
	.byte	0x1
	.uleb128 0x62c
	.ascii "_WAIT_CHILD 0\0"
	.byte	0x1
	.uleb128 0x62d
	.ascii "_WAIT_GRANDCHILD 1\0"
	.byte	0x1
	.uleb128 0x631
	.ascii "_SPAWNV_DEFINED \0"
	.file 13 "D:/mingw64/x86_64-w64-mingw32/include/sec_api/stdio_s.h"
	.byte	0x3
	.uleb128 0x644
	.uleb128 0xd
	.byte	0x1
	.uleb128 0x7
	.ascii "_INC_STDIO_S \0"
	.byte	0x3
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x4
	.byte	0x1
	.uleb128 0x10
	.ascii "_SECIMP __declspec(dllimport)\0"
	.byte	0x1
	.uleb128 0x19
	.ascii "_STDIO_S_DEFINED \0"
	.byte	0x1
	.uleb128 0x1a
	.ascii "L_tmpnam_s L_tmpnam\0"
	.byte	0x1
	.uleb128 0x1b
	.ascii "TMP_MAX_S TMP_MAX\0"
	.byte	0x1
	.uleb128 0x25a
	.ascii "_WSTDIO_S_DEFINED \0"
	.byte	0x4
	.byte	0x4
	.file 14 "D:/mingw64/x86_64-w64-mingw32/include/string.h"
	.byte	0x3
	.uleb128 0x5
	.uleb128 0xe
	.byte	0x1
	.uleb128 0x7
	.ascii "_INC_STRING \0"
	.file 15 "D:/mingw64/x86_64-w64-mingw32/include/crtdefs.h"
	.byte	0x3
	.uleb128 0x9
	.uleb128 0xf
	.byte	0x1
	.uleb128 0x8
	.ascii "_INC_CRTDEFS \0"
	.byte	0x4
	.byte	0x1
	.uleb128 0x19
	.ascii "_NLSCMP_DEFINED \0"
	.byte	0x1
	.uleb128 0x1a
	.ascii "_NLSCMPERROR 2147483647\0"
	.byte	0x1
	.uleb128 0x29
	.ascii "_WConst_return _CONST_RETURN\0"
	.byte	0x1
	.uleb128 0x2c
	.ascii "_CRT_MEMORY_DEFINED \0"
	.byte	0x2
	.uleb128 0x63
	.ascii "strtok_r\0"
	.byte	0x1
	.uleb128 0x77
	.ascii "strncasecmp _strnicmp\0"
	.byte	0x1
	.uleb128 0x78
	.ascii "strcasecmp _stricmp\0"
	.byte	0x1
	.uleb128 0x81
	.ascii "_WSTRING_DEFINED \0"
	.byte	0x1
	.uleb128 0xb2
	.ascii "wcswcs wcsstr\0"
	.file 16 "D:/mingw64/x86_64-w64-mingw32/include/sec_api/string_s.h"
	.byte	0x3
	.uleb128 0xc2
	.uleb128 0x10
	.byte	0x1
	.uleb128 0x7
	.ascii "_INC_STRING_S \0"
	.byte	0x3
	.uleb128 0x9
	.uleb128 0xe
	.byte	0x4
	.byte	0x1
	.uleb128 0x3e
	.ascii "_WSTRING_S_DEFINED \0"
	.byte	0x4
	.byte	0x4
	.file 17 "D:/mingw64/x86_64-w64-mingw32/include/stdlib.h"
	.byte	0x3
	.uleb128 0x6
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x7
	.ascii "_INC_STDLIB \0"
	.file 18 "D:/mingw64/x86_64-w64-mingw32/include/corecrt_wstdlib.h"
	.byte	0x3
	.uleb128 0xa
	.uleb128 0x12
	.byte	0x1
	.uleb128 0x7
	.ascii "_INC_CORECRT_WSTDLIB \0"
	.byte	0x4
	.file 19 "D:/mingw64/lib/gcc/x86_64-w64-mingw32/14.2.0/include/limits.h"
	.byte	0x3
	.uleb128 0xb
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x1e
	.ascii "_GCC_LIMITS_H_ \0"
	.file 20 "D:/mingw64/lib/gcc/x86_64-w64-mingw32/14.2.0/include/syslimits.h"
	.byte	0x3
	.uleb128 0x22
	.uleb128 0x14
	.byte	0x1
	.uleb128 0x6
	.ascii "_GCC_NEXT_LIMITS_H \0"
	.byte	0x3
	.uleb128 0x7
	.uleb128 0x13
	.file 21 "D:/mingw64/x86_64-w64-mingw32/include/limits.h"
	.byte	0x3
	.uleb128 0xd2
	.uleb128 0x15
	.byte	0x1
	.uleb128 0x9
	.ascii "_INC_LIMITS \0"
	.byte	0x1
	.uleb128 0x14
	.ascii "PATH_MAX 260\0"
	.byte	0x1
	.uleb128 0x16
	.ascii "CHAR_BIT 8\0"
	.byte	0x1
	.uleb128 0x17
	.ascii "SCHAR_MIN (-128)\0"
	.byte	0x1
	.uleb128 0x18
	.ascii "SCHAR_MAX 127\0"
	.byte	0x1
	.uleb128 0x19
	.ascii "UCHAR_MAX 0xff\0"
	.byte	0x1
	.uleb128 0x1f
	.ascii "CHAR_MIN SCHAR_MIN\0"
	.byte	0x1
	.uleb128 0x20
	.ascii "CHAR_MAX SCHAR_MAX\0"
	.byte	0x1
	.uleb128 0x23
	.ascii "MB_LEN_MAX 5\0"
	.byte	0x1
	.uleb128 0x24
	.ascii "SHRT_MIN (-32768)\0"
	.byte	0x1
	.uleb128 0x25
	.ascii "SHRT_MAX 32767\0"
	.byte	0x1
	.uleb128 0x26
	.ascii "USHRT_MAX 0xffffU\0"
	.byte	0x1
	.uleb128 0x27
	.ascii "INT_MIN (-2147483647 - 1)\0"
	.byte	0x1
	.uleb128 0x28
	.ascii "INT_MAX 2147483647\0"
	.byte	0x1
	.uleb128 0x29
	.ascii "UINT_MAX 0xffffffffU\0"
	.byte	0x1
	.uleb128 0x2a
	.ascii "LONG_MIN (-2147483647L - 1)\0"
	.byte	0x1
	.uleb128 0x2b
	.ascii "LONG_MAX 2147483647L\0"
	.byte	0x1
	.uleb128 0x2c
	.ascii "ULONG_MAX 0xffffffffUL\0"
	.byte	0x1
	.uleb128 0x2d
	.ascii "LLONG_MAX 9223372036854775807ll\0"
	.byte	0x1
	.uleb128 0x2e
	.ascii "LLONG_MIN (-9223372036854775807ll - 1)\0"
	.byte	0x1
	.uleb128 0x2f
	.ascii "ULLONG_MAX 0xffffffffffffffffull\0"
	.byte	0x1
	.uleb128 0x31
	.ascii "_I8_MIN (-127 - 1)\0"
	.byte	0x1
	.uleb128 0x32
	.ascii "_I8_MAX 127\0"
	.byte	0x1
	.uleb128 0x33
	.ascii "_UI8_MAX 0xffu\0"
	.byte	0x1
	.uleb128 0x35
	.ascii "_I16_MIN (-32767 - 1)\0"
	.byte	0x1
	.uleb128 0x36
	.ascii "_I16_MAX 32767\0"
	.byte	0x1
	.uleb128 0x37
	.ascii "_UI16_MAX 0xffffu\0"
	.byte	0x1
	.uleb128 0x39
	.ascii "_I32_MIN (-2147483647 - 1)\0"
	.byte	0x1
	.uleb128 0x3a
	.ascii "_I32_MAX 2147483647\0"
	.byte	0x1
	.uleb128 0x3b
	.ascii "_UI32_MAX 0xffffffffu\0"
	.byte	0x2
	.uleb128 0x3e
	.ascii "LONG_LONG_MAX\0"
	.byte	0x1
	.uleb128 0x3f
	.ascii "LONG_LONG_MAX 9223372036854775807ll\0"
	.byte	0x2
	.uleb128 0x40
	.ascii "LONG_LONG_MIN\0"
	.byte	0x1
	.uleb128 0x41
	.ascii "LONG_LONG_MIN (-LONG_LONG_MAX-1)\0"
	.byte	0x2
	.uleb128 0x42
	.ascii "ULONG_LONG_MAX\0"
	.byte	0x1
	.uleb128 0x43
	.ascii "ULONG_LONG_MAX (2ull * LONG_LONG_MAX + 1ull)\0"
	.byte	0x1
	.uleb128 0x46
	.ascii "_I64_MIN (-9223372036854775807ll - 1)\0"
	.byte	0x1
	.uleb128 0x47
	.ascii "_I64_MAX 9223372036854775807ll\0"
	.byte	0x1
	.uleb128 0x48
	.ascii "_UI64_MAX 0xffffffffffffffffull\0"
	.byte	0x1
	.uleb128 0x4c
	.ascii "SIZE_MAX _UI64_MAX\0"
	.byte	0x1
	.uleb128 0x54
	.ascii "SSIZE_MAX _I64_MAX\0"
	.byte	0x4
	.byte	0x4
	.byte	0x2
	.uleb128 0x8
	.ascii "_GCC_NEXT_LIMITS_H\0"
	.byte	0x4
	.byte	0x1
	.uleb128 0x3c
	.ascii "_LIMITS_H___ \0"
	.byte	0x2
	.uleb128 0x3f
	.ascii "CHAR_BIT\0"
	.byte	0x1
	.uleb128 0x40
	.ascii "CHAR_BIT __CHAR_BIT__\0"
	.byte	0x2
	.uleb128 0x48
	.ascii "SCHAR_MIN\0"
	.byte	0x1
	.uleb128 0x49
	.ascii "SCHAR_MIN (-SCHAR_MAX - 1)\0"
	.byte	0x2
	.uleb128 0x4a
	.ascii "SCHAR_MAX\0"
	.byte	0x1
	.uleb128 0x4b
	.ascii "SCHAR_MAX __SCHAR_MAX__\0"
	.byte	0x2
	.uleb128 0x4e
	.ascii "UCHAR_MAX\0"
	.byte	0x1
	.uleb128 0x52
	.ascii "UCHAR_MAX (SCHAR_MAX * 2 + 1)\0"
	.byte	0x2
	.uleb128 0x60
	.ascii "CHAR_MIN\0"
	.byte	0x1
	.uleb128 0x61
	.ascii "CHAR_MIN SCHAR_MIN\0"
	.byte	0x2
	.uleb128 0x62
	.ascii "CHAR_MAX\0"
	.byte	0x1
	.uleb128 0x63
	.ascii "CHAR_MAX SCHAR_MAX\0"
	.byte	0x2
	.uleb128 0x67
	.ascii "SHRT_MIN\0"
	.byte	0x1
	.uleb128 0x68
	.ascii "SHRT_MIN (-SHRT_MAX - 1)\0"
	.byte	0x2
	.uleb128 0x69
	.ascii "SHRT_MAX\0"
	.byte	0x1
	.uleb128 0x6a
	.ascii "SHRT_MAX __SHRT_MAX__\0"
	.byte	0x2
	.uleb128 0x6d
	.ascii "USHRT_MAX\0"
	.byte	0x1
	.uleb128 0x71
	.ascii "USHRT_MAX (SHRT_MAX * 2 + 1)\0"
	.byte	0x2
	.uleb128 0x75
	.ascii "INT_MIN\0"
	.byte	0x1
	.uleb128 0x76
	.ascii "INT_MIN (-INT_MAX - 1)\0"
	.byte	0x2
	.uleb128 0x77
	.ascii "INT_MAX\0"
	.byte	0x1
	.uleb128 0x78
	.ascii "INT_MAX __INT_MAX__\0"
	.byte	0x2
	.uleb128 0x7b
	.ascii "UINT_MAX\0"
	.byte	0x1
	.uleb128 0x7c
	.ascii "UINT_MAX (INT_MAX * 2U + 1U)\0"
	.byte	0x2
	.uleb128 0x80
	.ascii "LONG_MIN\0"
	.byte	0x1
	.uleb128 0x81
	.ascii "LONG_MIN (-LONG_MAX - 1L)\0"
	.byte	0x2
	.uleb128 0x82
	.ascii "LONG_MAX\0"
	.byte	0x1
	.uleb128 0x83
	.ascii "LONG_MAX __LONG_MAX__\0"
	.byte	0x2
	.uleb128 0x86
	.ascii "ULONG_MAX\0"
	.byte	0x1
	.uleb128 0x87
	.ascii "ULONG_MAX (LONG_MAX * 2UL + 1UL)\0"
	.byte	0x2
	.uleb128 0x8b
	.ascii "LLONG_MIN\0"
	.byte	0x1
	.uleb128 0x8c
	.ascii "LLONG_MIN (-LLONG_MAX - 1LL)\0"
	.byte	0x2
	.uleb128 0x8d
	.ascii "LLONG_MAX\0"
	.byte	0x1
	.uleb128 0x8e
	.ascii "LLONG_MAX __LONG_LONG_MAX__\0"
	.byte	0x2
	.uleb128 0x91
	.ascii "ULLONG_MAX\0"
	.byte	0x1
	.uleb128 0x92
	.ascii "ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)\0"
	.byte	0x2
	.uleb128 0x97
	.ascii "LONG_LONG_MIN\0"
	.byte	0x1
	.uleb128 0x98
	.ascii "LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)\0"
	.byte	0x2
	.uleb128 0x99
	.ascii "LONG_LONG_MAX\0"
	.byte	0x1
	.uleb128 0x9a
	.ascii "LONG_LONG_MAX __LONG_LONG_MAX__\0"
	.byte	0x2
	.uleb128 0x9d
	.ascii "ULONG_LONG_MAX\0"
	.byte	0x1
	.uleb128 0x9e
	.ascii "ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)\0"
	.byte	0x4
	.byte	0x1
	.uleb128 0x2c
	.ascii "EXIT_SUCCESS 0\0"
	.byte	0x1
	.uleb128 0x2d
	.ascii "EXIT_FAILURE 1\0"
	.byte	0x1
	.uleb128 0x30
	.ascii "_ONEXIT_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x35
	.ascii "onexit_t _onexit_t\0"
	.byte	0x1
	.uleb128 0x3a
	.ascii "_DIV_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x48
	.ascii "_CRT_DOUBLE_DEC \0"
	.byte	0x1
	.uleb128 0x50
	.ascii "_PTR_LD(x) ((unsigned char *)(&(x)->ld))\0"
	.byte	0x2
	.uleb128 0x5b
	.ascii "long\0"
	.byte	0x1
	.uleb128 0x6a
	.ascii "RAND_MAX 0x7fff\0"
	.byte	0x1
	.uleb128 0x6d
	.ascii "MB_CUR_MAX ___mb_cur_max_func()\0"
	.byte	0x1
	.uleb128 0x76
	.ascii "__mb_cur_max (___mb_cur_max_func())\0"
	.byte	0x1
	.uleb128 0x7c
	.ascii "__max(a,b) (((a) > (b)) ? (a) : (b))\0"
	.byte	0x1
	.uleb128 0x7d
	.ascii "__min(a,b) (((a) < (b)) ? (a) : (b))\0"
	.byte	0x1
	.uleb128 0x7f
	.ascii "_MAX_PATH 260\0"
	.byte	0x1
	.uleb128 0x80
	.ascii "_MAX_DRIVE 3\0"
	.byte	0x1
	.uleb128 0x81
	.ascii "_MAX_DIR 256\0"
	.byte	0x1
	.uleb128 0x82
	.ascii "_MAX_FNAME 256\0"
	.byte	0x1
	.uleb128 0x83
	.ascii "_MAX_EXT 256\0"
	.byte	0x1
	.uleb128 0x85
	.ascii "_OUT_TO_DEFAULT 0\0"
	.byte	0x1
	.uleb128 0x86
	.ascii "_OUT_TO_STDERR 1\0"
	.byte	0x1
	.uleb128 0x87
	.ascii "_OUT_TO_MSGBOX 2\0"
	.byte	0x1
	.uleb128 0x88
	.ascii "_REPORT_ERRMODE 3\0"
	.byte	0x1
	.uleb128 0x8a
	.ascii "_WRITE_ABORT_MSG 0x1\0"
	.byte	0x1
	.uleb128 0x8b
	.ascii "_CALL_REPORTFAULT 0x2\0"
	.byte	0x1
	.uleb128 0x8d
	.ascii "_MAX_ENV 32767\0"
	.byte	0x1
	.uleb128 0x99
	.ascii "_CRT_ERRNO_DEFINED \0"
	.byte	0x1
	.uleb128 0x9b
	.ascii "errno (*_errno())\0"
	.byte	0x1
	.uleb128 0xa0
	.ascii "_doserrno (*__doserrno())\0"
	.byte	0x1
	.uleb128 0xaa
	.ascii "_sys_nerr (*__sys_nerr())\0"
	.byte	0x1
	.uleb128 0xab
	.ascii "_sys_errlist (__sys_errlist())\0"
	.byte	0x1
	.uleb128 0xc5
	.ascii "_fmode (* __p__fmode())\0"
	.byte	0x1
	.uleb128 0xfc
	.ascii "__argc (* __p___argc())\0"
	.byte	0x1
	.uleb128 0xff
	.ascii "__argv (* __p___argv())\0"
	.byte	0x1
	.uleb128 0x102
	.ascii "__wargv (* __p___wargv())\0"
	.byte	0x1
	.uleb128 0x107
	.ascii "_environ (* __p__environ())\0"
	.byte	0x1
	.uleb128 0x10b
	.ascii "_wenviron (* __p__wenviron())\0"
	.byte	0x1
	.uleb128 0x110
	.ascii "_pgmptr (* __p__pgmptr())\0"
	.byte	0x1
	.uleb128 0x114
	.ascii "_wpgmptr (* __p__wpgmptr())\0"
	.byte	0x1
	.uleb128 0x179
	.ascii "_countof(_Array) (sizeof(_Array) / sizeof(_Array[0]))\0"
	.byte	0x1
	.uleb128 0x183
	.ascii "_CRT_TERMINATE_DEFINED \0"
	.byte	0x2
	.uleb128 0x194
	.ascii "abort\0"
	.byte	0x1
	.uleb128 0x19d
	.ascii "_CRT_ABS_DEFINED \0"
	.byte	0x1
	.uleb128 0x1ae
	.ascii "_CRT_ATOF_DEFINED \0"
	.byte	0x1
	.uleb128 0x1b7
	.ascii "_CRT_ALGO_DEFINED \0"
	.byte	0x1
	.uleb128 0x20d
	.ascii "_CRT_SYSTEM_DEFINED \0"
	.byte	0x1
	.uleb128 0x217
	.ascii "_CRT_ALLOCATION_DEFINED \0"
	.byte	0x1
	.uleb128 0x22a
	.ascii "_WSTDLIB_DEFINED \0"
	.byte	0x1
	.uleb128 0x24d
	.ascii "_CRT_WSYSTEM_DEFINED \0"
	.byte	0x1
	.uleb128 0x265
	.ascii "_CVTBUFSIZE (309+40)\0"
	.byte	0x2
	.uleb128 0x27b
	.ascii "_lrotr\0"
	.byte	0x2
	.uleb128 0x27c
	.ascii "_lrotl\0"
	.byte	0x2
	.uleb128 0x28f
	.ascii "_rotl64\0"
	.byte	0x2
	.uleb128 0x290
	.ascii "_rotr64\0"
	.byte	0x2
	.uleb128 0x297
	.ascii "_rotr\0"
	.byte	0x2
	.uleb128 0x298
	.ascii "_rotl\0"
	.byte	0x1
	.uleb128 0x2a3
	.ascii "_WSTDLIBP_DEFINED \0"
	.byte	0x1
	.uleb128 0x2c3
	.ascii "sys_errlist _sys_errlist\0"
	.byte	0x1
	.uleb128 0x2c4
	.ascii "sys_nerr _sys_nerr\0"
	.byte	0x1
	.uleb128 0x2c5
	.ascii "environ _environ\0"
	.byte	0x1
	.uleb128 0x2ce
	.ascii "_CRT_SWAB_DEFINED \0"
	.file 22 "D:/mingw64/x86_64-w64-mingw32/include/sec_api/stdlib_s.h"
	.byte	0x3
	.uleb128 0x301
	.uleb128 0x16
	.byte	0x1
	.uleb128 0x7
	.ascii "_INC_STDLIB_S \0"
	.byte	0x3
	.uleb128 0x9
	.uleb128 0x11
	.byte	0x4
	.byte	0x1
	.uleb128 0x33
	.ascii "_QSORT_S_DEFINED \0"
	.byte	0x4
	.file 23 "D:/mingw64/x86_64-w64-mingw32/include/malloc.h"
	.byte	0x3
	.uleb128 0x302
	.uleb128 0x17
	.byte	0x1
	.uleb128 0x7
	.ascii "_MALLOC_H_ \0"
	.byte	0x1
	.uleb128 0x12
	.ascii "_HEAP_MAXREQ 0xFFFFFFFFFFFFFFE0\0"
	.byte	0x1
	.uleb128 0x1b
	.ascii "_STATIC_ASSERT(expr) extern void __static_assert_t(int [(expr)?1:-1])\0"
	.byte	0x1
	.uleb128 0x20
	.ascii "_HEAPEMPTY (-1)\0"
	.byte	0x1
	.uleb128 0x21
	.ascii "_HEAPOK (-2)\0"
	.byte	0x1
	.uleb128 0x22
	.ascii "_HEAPBADBEGIN (-3)\0"
	.byte	0x1
	.uleb128 0x23
	.ascii "_HEAPBADNODE (-4)\0"
	.byte	0x1
	.uleb128 0x24
	.ascii "_HEAPEND (-5)\0"
	.byte	0x1
	.uleb128 0x25
	.ascii "_HEAPBADPTR (-6)\0"
	.byte	0x1
	.uleb128 0x28
	.ascii "_FREEENTRY 0\0"
	.byte	0x1
	.uleb128 0x29
	.ascii "_USEDENTRY 1\0"
	.byte	0x1
	.uleb128 0x2c
	.ascii "_HEAPINFO_DEFINED \0"
	.file 24 "D:/mingw64/lib/gcc/x86_64-w64-mingw32/14.2.0/include/mm_malloc.h"
	.byte	0x3
	.uleb128 0x54
	.uleb128 0x18
	.byte	0x1
	.uleb128 0x19
	.ascii "_MM_MALLOC_H_INCLUDED \0"
	.file 25 "D:/mingw64/x86_64-w64-mingw32/include/errno.h"
	.byte	0x3
	.uleb128 0x1d
	.uleb128 0x19
	.byte	0x1
	.uleb128 0x7
	.ascii "_INC_ERRNO \0"
	.byte	0x1
	.uleb128 0x18
	.ascii "EPERM 1\0"
	.byte	0x1
	.uleb128 0x19
	.ascii "ENOENT 2\0"
	.byte	0x1
	.uleb128 0x1a
	.ascii "ENOFILE ENOENT\0"
	.byte	0x1
	.uleb128 0x1b
	.ascii "ESRCH 3\0"
	.byte	0x1
	.uleb128 0x1c
	.ascii "EINTR 4\0"
	.byte	0x1
	.uleb128 0x1d
	.ascii "EIO 5\0"
	.byte	0x1
	.uleb128 0x1e
	.ascii "ENXIO 6\0"
	.byte	0x1
	.uleb128 0x1f
	.ascii "E2BIG 7\0"
	.byte	0x1
	.uleb128 0x20
	.ascii "ENOEXEC 8\0"
	.byte	0x1
	.uleb128 0x21
	.ascii "EBADF 9\0"
	.byte	0x1
	.uleb128 0x22
	.ascii "ECHILD 10\0"
	.byte	0x1
	.uleb128 0x23
	.ascii "EAGAIN 11\0"
	.byte	0x1
	.uleb128 0x24
	.ascii "ENOMEM 12\0"
	.byte	0x1
	.uleb128 0x25
	.ascii "EACCES 13\0"
	.byte	0x1
	.uleb128 0x26
	.ascii "EFAULT 14\0"
	.byte	0x1
	.uleb128 0x27
	.ascii "EBUSY 16\0"
	.byte	0x1
	.uleb128 0x28
	.ascii "EEXIST 17\0"
	.byte	0x1
	.uleb128 0x29
	.ascii "EXDEV 18\0"
	.byte	0x1
	.uleb128 0x2a
	.ascii "ENODEV 19\0"
	.byte	0x1
	.uleb128 0x2b
	.ascii "ENOTDIR 20\0"
	.byte	0x1
	.uleb128 0x2c
	.ascii "EISDIR 21\0"
	.byte	0x1
	.uleb128 0x2d
	.ascii "ENFILE 23\0"
	.byte	0x1
	.uleb128 0x2e
	.ascii "EMFILE 24\0"
	.byte	0x1
	.uleb128 0x2f
	.ascii "ENOTTY 25\0"
	.byte	0x1
	.uleb128 0x30
	.ascii "EFBIG 27\0"
	.byte	0x1
	.uleb128 0x31
	.ascii "ENOSPC 28\0"
	.byte	0x1
	.uleb128 0x32
	.ascii "ESPIPE 29\0"
	.byte	0x1
	.uleb128 0x33
	.ascii "EROFS 30\0"
	.byte	0x1
	.uleb128 0x34
	.ascii "EMLINK 31\0"
	.byte	0x1
	.uleb128 0x35
	.ascii "EPIPE 32\0"
	.byte	0x1
	.uleb128 0x36
	.ascii "EDOM 33\0"
	.byte	0x1
	.uleb128 0x37
	.ascii "EDEADLK 36\0"
	.byte	0x1
	.uleb128 0x38
	.ascii "ENAMETOOLONG 38\0"
	.byte	0x1
	.uleb128 0x39
	.ascii "ENOLCK 39\0"
	.byte	0x1
	.uleb128 0x3a
	.ascii "ENOSYS 40\0"
	.byte	0x1
	.uleb128 0x3b
	.ascii "ENOTEMPTY 41\0"
	.byte	0x1
	.uleb128 0x3f
	.ascii "_SECURECRT_ERRCODE_VALUES_DEFINED \0"
	.byte	0x1
	.uleb128 0x40
	.ascii "EINVAL 22\0"
	.byte	0x1
	.uleb128 0x41
	.ascii "ERANGE 34\0"
	.byte	0x1
	.uleb128 0x42
	.ascii "EILSEQ 42\0"
	.byte	0x1
	.uleb128 0x43
	.ascii "STRUNCATE 80\0"
	.byte	0x1
	.uleb128 0x47
	.ascii "EDEADLOCK EDEADLK\0"
	.byte	0x1
	.uleb128 0x4c
	.ascii "ENOTSUP 129\0"
	.byte	0x1
	.uleb128 0x52
	.ascii "EAFNOSUPPORT 102\0"
	.byte	0x1
	.uleb128 0x56
	.ascii "EADDRINUSE 100\0"
	.byte	0x1
	.uleb128 0x5a
	.ascii "EADDRNOTAVAIL 101\0"
	.byte	0x1
	.uleb128 0x5e
	.ascii "EISCONN 113\0"
	.byte	0x1
	.uleb128 0x62
	.ascii "ENOBUFS 119\0"
	.byte	0x1
	.uleb128 0x66
	.ascii "ECONNABORTED 106\0"
	.byte	0x1
	.uleb128 0x6a
	.ascii "EALREADY 103\0"
	.byte	0x1
	.uleb128 0x6e
	.ascii "ECONNREFUSED 107\0"
	.byte	0x1
	.uleb128 0x72
	.ascii "ECONNRESET 108\0"
	.byte	0x1
	.uleb128 0x76
	.ascii "EDESTADDRREQ 109\0"
	.byte	0x1
	.uleb128 0x7a
	.ascii "EHOSTUNREACH 110\0"
	.byte	0x1
	.uleb128 0x7e
	.ascii "EMSGSIZE 115\0"
	.byte	0x1
	.uleb128 0x82
	.ascii "ENETDOWN 116\0"
	.byte	0x1
	.uleb128 0x86
	.ascii "ENETRESET 117\0"
	.byte	0x1
	.uleb128 0x8a
	.ascii "ENETUNREACH 118\0"
	.byte	0x1
	.uleb128 0x8e
	.ascii "ENOPROTOOPT 123\0"
	.byte	0x1
	.uleb128 0x92
	.ascii "ENOTSOCK 128\0"
	.byte	0x1
	.uleb128 0x96
	.ascii "ENOTCONN 126\0"
	.byte	0x1
	.uleb128 0x9a
	.ascii "ECANCELED 105\0"
	.byte	0x1
	.uleb128 0x9e
	.ascii "EINPROGRESS 112\0"
	.byte	0x1
	.uleb128 0xa2
	.ascii "EOPNOTSUPP 130\0"
	.byte	0x1
	.uleb128 0xa6
	.ascii "EWOULDBLOCK 140\0"
	.byte	0x1
	.uleb128 0xaa
	.ascii "EOWNERDEAD 133\0"
	.byte	0x1
	.uleb128 0xae
	.ascii "EPROTO 134\0"
	.byte	0x1
	.uleb128 0xb2
	.ascii "EPROTONOSUPPORT 135\0"
	.byte	0x1
	.uleb128 0xb6
	.ascii "EBADMSG 104\0"
	.byte	0x1
	.uleb128 0xba
	.ascii "EIDRM 111\0"
	.byte	0x1
	.uleb128 0xbe
	.ascii "ENODATA 120\0"
	.byte	0x1
	.uleb128 0xc2
	.ascii "ENOLINK 121\0"
	.byte	0x1
	.uleb128 0xc6
	.ascii "ENOMSG 122\0"
	.byte	0x1
	.uleb128 0xca
	.ascii "ENOSR 124\0"
	.byte	0x1
	.uleb128 0xce
	.ascii "ENOSTR 125\0"
	.byte	0x1
	.uleb128 0xd2
	.ascii "ENOTRECOVERABLE 127\0"
	.byte	0x1
	.uleb128 0xd6
	.ascii "ETIME 137\0"
	.byte	0x1
	.uleb128 0xda
	.ascii "ETXTBSY 139\0"
	.byte	0x1
	.uleb128 0xdf
	.ascii "ETIMEDOUT 138\0"
	.byte	0x1
	.uleb128 0xe3
	.ascii "ELOOP 114\0"
	.byte	0x1
	.uleb128 0xe7
	.ascii "EPROTOTYPE 136\0"
	.byte	0x1
	.uleb128 0xeb
	.ascii "EOVERFLOW 132\0"
	.byte	0x4
	.byte	0x4
	.byte	0x1
	.uleb128 0x57
	.ascii "_MAX_WAIT_MALLOC_CRT 60000\0"
	.byte	0x2
	.uleb128 0x61
	.ascii "_alloca\0"
	.byte	0x1
	.uleb128 0x62
	.ascii "_alloca(x) __builtin_alloca((x))\0"
	.byte	0x1
	.uleb128 0x72
	.ascii "_ALLOCA_S_THRESHOLD 1024\0"
	.byte	0x1
	.uleb128 0x73
	.ascii "_ALLOCA_S_STACK_MARKER 0xCCCC\0"
	.byte	0x1
	.uleb128 0x74
	.ascii "_ALLOCA_S_HEAP_MARKER 0xDDDD\0"
	.byte	0x1
	.uleb128 0x79
	.ascii "_ALLOCA_S_MARKER_SIZE 16\0"
	.byte	0x2
	.uleb128 0x86
	.ascii "_malloca\0"
	.byte	0x1
	.uleb128 0x87
	.ascii "_malloca(size) ((((size) + _ALLOCA_S_MARKER_SIZE) <= _ALLOCA_S_THRESHOLD) ? _MarkAllocaS(_alloca((size) + _ALLOCA_S_MARKER_SIZE),_ALLOCA_S_STACK_MARKER) : _MarkAllocaS(malloc((size) + _ALLOCA_S_MARKER_SIZE),_ALLOCA_S_HEAP_MARKER))\0"
	.byte	0x2
	.uleb128 0x8b
	.ascii "_FREEA_INLINE\0"
	.byte	0x1
	.uleb128 0x8c
	.ascii "_FREEA_INLINE \0"
	.byte	0x2
	.uleb128 0x8f
	.ascii "_freea\0"
	.byte	0x2
	.uleb128 0xa2
	.ascii "alloca\0"
	.byte	0x1
	.uleb128 0xa4
	.ascii "alloca(x) __builtin_alloca((x))\0"
	.byte	0x4
	.byte	0x4
	.byte	0x4
	.file 26 "inc/ariph.h"
	.byte	0x3
	.uleb128 0x2
	.uleb128 0x1a
	.byte	0x1
	.uleb128 0x2
	.ascii "ARIPH_H_ \0"
	.byte	0x4
	.file 27 "inc/utils.h"
	.byte	0x3
	.uleb128 0x3
	.uleb128 0x1b
	.byte	0x1
	.uleb128 0x2
	.ascii "UTILS_H_ \0"
	.byte	0x4
	.byte	0x4
	.byte	0
	.section	.debug_line,"dr"
.Ldebug_line0:
	.section	.debug_str,"dr"
	.section	.debug_line_str,"dr"
.LASF1:
	.ascii "D:\\MGU\\Micros\\Micros\\Atmega\\Programming\\Lesson_23\\MYPROG23\0"
.LASF0:
	.ascii "src/main.c\0"
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (x86_64-win32-seh-rev2, Built by MinGW-Builds project) 14.2.0"
	.def	printf;	.scl	2;	.type	32;	.endef
