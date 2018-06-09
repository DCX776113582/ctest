	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 10
	.globl	_add
	.align	4, 0x90
_add:                                   ## @add
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp2:
	.cfi_def_cfa_register %rbp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %esi
	addl	-8(%rbp), %esi
	movl	%esi, %eax
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_test1
	.align	4, 0x90
_test1:                                 ## @test1
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp3:
	.cfi_def_cfa_offset 16
Ltmp4:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp5:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	leaq	L_.str(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str1(%rip), %rdi
	leaq	-4(%rbp), %rsi
	leaq	-8(%rbp), %rdx
	movl	%eax, -12(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	movl	-4(%rbp), %edi
	movl	-8(%rbp), %esi
	movl	%eax, -16(%rbp)         ## 4-byte Spill
	callq	_add
	leaq	L_.str2(%rip), %rdi
	leaq	L_.str3(%rip), %rdx
	leaq	L_.str4(%rip), %rcx
	leaq	L_.str5(%rip), %r8
	movl	%eax, %esi
	movb	$0, %al
	callq	_printf
	movl	%eax, -20(%rbp)         ## 4-byte Spill
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"\350\257\267\350\276\223\345\205\245\357\274\232"

L_.str1:                                ## @.str1
	.asciz	"%d%d"

L_.str2:                                ## @.str2
	.asciz	"%d %s %s %s\n"

L_.str3:                                ## @.str3
	.asciz	"\350\265\233\346\226\207\345\245\245\347\211\271\346\233\274"

L_.str4:                                ## @.str4
	.asciz	"\346\235\260\345\205\213\345\245\245\347\211\271\346\233\274"

L_.str5:                                ## @.str5
	.asciz	"\350\211\276\346\226\257\345\245\245\347\211\271\346\233\274"


.subsections_via_symbols
