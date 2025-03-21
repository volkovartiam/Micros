	.file	"utils.c"
	.intel_syntax noprefix
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "D:/MGU/Micros/Micros/Atmega/Programming/Lesson_29/MYPROG29" "src/utils.c"
	.globl	int_to_binary
	.def	int_to_binary;	.scl	2;	.type	32;	.endef
	.seh_proc	int_to_binary
int_to_binary:
.LFB4:
	.file 1 "src/utils.c"
	.loc 1 4 1
	.cfi_startproc
	push	rbp
	.seh_pushreg	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	.cfi_def_cfa_register 6
	sub	rsp, 48
	.seh_stackalloc	48
	.seh_endprologue
	mov	DWORD PTR 16[rbp], ecx
	mov	QWORD PTR 24[rbp], rdx
	.loc 1 5 8
	mov	QWORD PTR -12[rbp], 0
	mov	BYTE PTR -4[rbp], 0
	.loc 1 7 17
	mov	DWORD PTR -16[rbp], 0
	.loc 1 8 9
	mov	BYTE PTR -2[rbp], 0
	.loc 1 8 3
	jmp	.L2
.L5:
	.loc 1 10 16
	movzx	eax, BYTE PTR -2[rbp]
	sal	eax, 3
	.loc 1 10 12
	mov	edx, DWORD PTR 16[rbp]
	mov	ecx, eax
	sar	edx, cl
	mov	eax, edx
	.loc 1 10 7
	test	eax, eax
	jne	.L3
	.loc 1 10 24 discriminator 1
	cmp	BYTE PTR -2[rbp], 0
	jne	.L12
.L3:
	.loc 1 11 36
	movzx	eax, BYTE PTR -2[rbp]
	sal	eax, 3
	.loc 1 11 32
	mov	edx, DWORD PTR 16[rbp]
	mov	ecx, eax
	sar	edx, cl
	.loc 1 11 7
	movzx	eax, BYTE PTR -2[rbp]
	.loc 1 11 11
	cdqe
	mov	BYTE PTR -16[rbp+rax], dl
	.loc 1 8 19 discriminator 2
	movzx	eax, BYTE PTR -2[rbp]
	add	eax, 1
	mov	BYTE PTR -2[rbp], al
.L2:
	.loc 1 8 14 discriminator 1
	cmp	BYTE PTR -2[rbp], 3
	jbe	.L5
	jmp	.L4
.L12:
	.loc 1 10 36
	nop
.L4:
	.loc 1 13 3
	mov	rax, QWORD PTR 24[rbp]
	mov	WORD PTR [rax], 25136
	mov	BYTE PTR 2[rax], 0
	.loc 1 14 9
	mov	BYTE PTR -3[rbp], 0
	.loc 1 14 3
	jmp	.L6
.L11:
	.loc 1 16 11
	mov	BYTE PTR -1[rbp], 0
	.loc 1 16 5
	jmp	.L7
.L10:
	.loc 1 18 20
	movzx	edx, BYTE PTR -2[rbp]
	movzx	eax, BYTE PTR -3[rbp]
	sub	edx, eax
	.loc 1 18 22
	lea	eax, -1[rdx]
	.loc 1 18 18
	cdqe
	movzx	eax, BYTE PTR -16[rbp+rax]
	movzx	edx, al
	.loc 1 18 26
	movzx	eax, BYTE PTR -1[rbp]
	mov	ecx, eax
	sar	edx, cl
	mov	eax, edx
	.loc 1 18 32
	and	eax, 1
	.loc 1 18 7
	test	eax, eax
	je	.L8
	cmp	eax, 1
	jne	.L9
	.loc 1 20 27
	movzx	eax, BYTE PTR -1[rbp]
	mov	edx, 7
	sub	edx, eax
	.loc 1 20 31
	movsx	rax, edx
	mov	BYTE PTR -12[rbp+rax], 49
	.loc 1 20 38
	jmp	.L9
.L8:
	.loc 1 21 27
	movzx	eax, BYTE PTR -1[rbp]
	mov	edx, 7
	sub	edx, eax
	.loc 1 21 31
	movsx	rax, edx
	mov	BYTE PTR -12[rbp+rax], 48
	.loc 1 21 38
	nop
.L9:
	.loc 1 16 21 discriminator 2
	movzx	eax, BYTE PTR -1[rbp]
	add	eax, 1
	mov	BYTE PTR -1[rbp], al
.L7:
	.loc 1 16 16 discriminator 1
	cmp	BYTE PTR -1[rbp], 7
	jbe	.L10
	.loc 1 24 5
	lea	rax, -12[rbp]
	mov	rcx, QWORD PTR 24[rbp]
	mov	rdx, rax
	call	strcat
	.loc 1 14 19 discriminator 2
	movzx	eax, BYTE PTR -3[rbp]
	add	eax, 1
	mov	BYTE PTR -3[rbp], al
.L6:
	.loc 1 14 14 discriminator 1
	movzx	eax, BYTE PTR -3[rbp]
	cmp	al, BYTE PTR -2[rbp]
	jb	.L11
	.loc 1 26 1
	nop
	nop
	add	rsp, 48
	pop	rbp
	.cfi_restore 6
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.seh_endproc
.Letext0:
	.file 2 "D:/mingw64/x86_64-w64-mingw32/include/string.h"
	.section	.debug_info,"dr"
.Ldebug_info0:
	.long	0x1b2
	.word	0x5
	.byte	0x1
	.byte	0x8
	.secrel32	.Ldebug_abbrev0
	.uleb128 0x7
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
	.uleb128 0x8
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
	.uleb128 0x9
	.ascii "strcat\0"
	.byte	0x2
	.byte	0x3e
	.byte	0x12
	.long	0xf7
	.long	0xf7
	.uleb128 0x3
	.long	0xf7
	.uleb128 0x3
	.long	0xfc
	.byte	0
	.uleb128 0x4
	.long	0x68
	.uleb128 0x4
	.long	0x70
	.uleb128 0xa
	.ascii "int_to_binary\0"
	.byte	0x1
	.byte	0x3
	.byte	0x6
	.quad	.LFB4
	.quad	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.long	0x188
	.uleb128 0x5
	.ascii "x\0"
	.byte	0x18
	.long	0xb6
	.uleb128 0x2
	.byte	0x91
	.sleb128 0
	.uleb128 0x5
	.ascii "in_str\0"
	.byte	0x21
	.long	0xf7
	.uleb128 0x2
	.byte	0x91
	.sleb128 8
	.uleb128 0x2
	.ascii "str_tmp\0"
	.byte	0x5
	.byte	0x8
	.long	0x188
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.ascii "i\0"
	.byte	0x6
	.byte	0x11
	.long	0x198
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.uleb128 0x2
	.ascii "j\0"
	.byte	0x6
	.byte	0x14
	.long	0x198
	.uleb128 0x2
	.byte	0x91
	.sleb128 -18
	.uleb128 0x2
	.ascii "k\0"
	.byte	0x6
	.byte	0x17
	.long	0x198
	.uleb128 0x2
	.byte	0x91
	.sleb128 -19
	.uleb128 0x2
	.ascii "bt\0"
	.byte	0x7
	.byte	0x11
	.long	0x1a9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0xb
	.long	0x68
	.long	0x198
	.uleb128 0x6
	.long	0x75
	.byte	0x8
	.byte	0
	.uleb128 0x1
	.byte	0x1
	.byte	0x8
	.ascii "unsigned char\0"
	.uleb128 0xc
	.long	0x198
	.uleb128 0x6
	.long	0x75
	.byte	0x3
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
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x5
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x21
	.sleb128 3
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x7
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
	.uleb128 0x8
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x9
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
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
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
	.uleb128 0xb
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
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
	.file 3 "inc/utils.h"
	.byte	0x3
	.uleb128 0x1
	.uleb128 0x3
	.byte	0x1
	.uleb128 0x2
	.ascii "UTILS_H_ \0"
	.byte	0x3
	.uleb128 0x4
	.uleb128 0x2
	.byte	0x1
	.uleb128 0x7
	.ascii "_INC_STRING \0"
	.file 4 "D:/mingw64/x86_64-w64-mingw32/include/crtdefs.h"
	.byte	0x3
	.uleb128 0x9
	.uleb128 0x4
	.byte	0x1
	.uleb128 0x8
	.ascii "_INC_CRTDEFS \0"
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
	.byte	0x4
	.byte	0x1
	.uleb128 0x10
	.ascii "_SECIMP __declspec(dllimport)\0"
	.byte	0x1
	.uleb128 0x19
	.ascii "_NLSCMP_DEFINED \0"
	.byte	0x1
	.uleb128 0x1a
	.ascii "_NLSCMPERROR 2147483647\0"
	.byte	0x1
	.uleb128 0x25
	.ascii "NULL ((void *)0)\0"
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
	.file 11 "D:/mingw64/x86_64-w64-mingw32/include/sec_api/string_s.h"
	.byte	0x3
	.uleb128 0xc2
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x7
	.ascii "_INC_STRING_S \0"
	.byte	0x3
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x4
	.byte	0x1
	.uleb128 0x3e
	.ascii "_WSTRING_S_DEFINED \0"
	.byte	0x4
	.byte	0x4
	.byte	0x4
	.byte	0x4
	.byte	0
	.section	.debug_line,"dr"
.Ldebug_line0:
	.section	.debug_str,"dr"
	.section	.debug_line_str,"dr"
.LASF0:
	.ascii "src/utils.c\0"
.LASF1:
	.ascii "D:\\MGU\\Micros\\Micros\\Atmega\\Programming\\Lesson_29\\MYPROG29\0"
	.ident	"GCC: (x86_64-win32-seh-rev2, Built by MinGW-Builds project) 14.2.0"
	.def	strcat;	.scl	2;	.type	32;	.endef
