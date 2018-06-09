	.section	__TEXT,__text,regular,pure_instructions
	.section	__TEXT,__literal8,8byte_literals
	.align	3
LCPI0_0:
	.quad	4605831338911806259     ## double 0.84999999999999998
LCPI0_1:
	.quad	4606732058837280358     ## double 0.94999999999999996
LCPI0_2:
	.quad	4608083138725491507     ## double 1.2
LCPI0_3:
	.quad	4607857958744122982     ## double 1.1499999999999999
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_ADD
	.align	4, 0x90
_ADD:                                   ## @ADD
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp2:
	.cfi_def_cfa_offset 16
Ltmp3:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp4:
	.cfi_def_cfa_register %rbp
	subq	$160, %rsp
	movb	$121, -57(%rbp)
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	leaq	L_.str8(%rip), %rdi
	xorl	%eax, %eax
	movb	%al, %cl
	movb	%cl, %al
	movb	%cl, -58(%rbp)          ## 1-byte Spill
	callq	_printf
	leaq	L_.str9(%rip), %rdi
	leaq	-4(%rbp), %rsi
	movb	-58(%rbp), %cl          ## 1-byte Reload
	movl	%eax, -64(%rbp)         ## 4-byte Spill
	movb	%cl, %al
	callq	_scanf
	leaq	L_.str10(%rip), %rdi
	movb	-58(%rbp), %cl          ## 1-byte Reload
	movl	%eax, -68(%rbp)         ## 4-byte Spill
	movb	%cl, %al
	callq	_printf
	leaq	L_.str11(%rip), %rdi
	leaq	-16(%rbp), %rsi
	movb	-58(%rbp), %cl          ## 1-byte Reload
	movl	%eax, -72(%rbp)         ## 4-byte Spill
	movb	%cl, %al
	callq	_scanf
	movl	-4(%rbp), %edx
	decl	%edx
	movl	%edx, %esi
	subl	$3, %edx
	movl	%eax, -76(%rbp)         ## 4-byte Spill
	movq	%rsi, -88(%rbp)         ## 8-byte Spill
	movl	%edx, -92(%rbp)         ## 4-byte Spill
	ja	LBB0_6
## BB#13:                               ##   in Loop: Header=BB0_1 Depth=1
	leaq	LJTI0_0(%rip), %rax
	movq	-88(%rbp), %rcx         ## 8-byte Reload
	movslq	(%rax,%rcx,4), %rdx
	addq	%rax, %rdx
	jmpq	*%rdx
LBB0_2:                                 ##   in Loop: Header=BB0_1 Depth=1
	movsd	LCPI0_3(%rip), %xmm0
	mulsd	-16(%rbp), %xmm0
	movsd	%xmm0, _total1(%rip)
	movsd	-16(%rbp), %xmm0
	movsd	-32(%rbp), %xmm1
	addsd	%xmm0, %xmm1
	movsd	%xmm1, -32(%rbp)
	jmp	LBB0_7
LBB0_3:                                 ##   in Loop: Header=BB0_1 Depth=1
	movsd	LCPI0_2(%rip), %xmm0
	mulsd	-16(%rbp), %xmm0
	movsd	%xmm0, _total2(%rip)
	movsd	-16(%rbp), %xmm0
	movsd	-40(%rbp), %xmm1
	addsd	%xmm0, %xmm1
	movsd	%xmm1, -40(%rbp)
	jmp	LBB0_7
LBB0_4:                                 ##   in Loop: Header=BB0_1 Depth=1
	movsd	LCPI0_1(%rip), %xmm0
	mulsd	-16(%rbp), %xmm0
	movsd	%xmm0, _total3(%rip)
	movsd	-16(%rbp), %xmm0
	movsd	-48(%rbp), %xmm1
	addsd	%xmm0, %xmm1
	movsd	%xmm1, -48(%rbp)
	jmp	LBB0_7
LBB0_5:                                 ##   in Loop: Header=BB0_1 Depth=1
	movsd	LCPI0_0(%rip), %xmm0
	mulsd	-16(%rbp), %xmm0
	movsd	%xmm0, _total4(%rip)
	movsd	-16(%rbp), %xmm0
	movsd	-56(%rbp), %xmm1
	addsd	%xmm0, %xmm1
	movsd	%xmm1, -56(%rbp)
	jmp	LBB0_7
LBB0_6:                                 ##   in Loop: Header=BB0_1 Depth=1
	jmp	LBB0_7
LBB0_7:                                 ##   in Loop: Header=BB0_1 Depth=1
	callq	_getchar
	leaq	L_.str12(%rip), %rdi
	movl	%eax, -96(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str13(%rip), %rdi
	leaq	-57(%rbp), %rsi
	movl	%eax, -100(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	movsbl	-57(%rbp), %ecx
	cmpl	$89, %ecx
	movl	%eax, -104(%rbp)        ## 4-byte Spill
	je	LBB0_9
## BB#8:                                ##   in Loop: Header=BB0_1 Depth=1
	movsbl	-57(%rbp), %eax
	cmpl	$121, %eax
	jne	LBB0_10
LBB0_9:                                 ##   in Loop: Header=BB0_1 Depth=1
	jmp	LBB0_11
LBB0_10:
	jmp	LBB0_12
LBB0_11:                                ##   in Loop: Header=BB0_1 Depth=1
	movb	$1, %al
	testb	$1, %al
	jne	LBB0_1
	jmp	LBB0_12
LBB0_12:
	leaq	L_.str14(%rip), %rdi
	callq	_puts
	leaq	L_.str15(%rip), %rdi
	movl	%eax, -108(%rbp)        ## 4-byte Spill
	callq	_puts
	leaq	L_.str16(%rip), %rdi
	movsd	LCPI0_3(%rip), %xmm0
	movq	_p(%rip), %rsi
	movsd	-32(%rbp), %xmm1
	movsd	_total1(%rip), %xmm2
	movl	%eax, -112(%rbp)        ## 4-byte Spill
	movb	$3, %al
	callq	_printf
	leaq	L_.str17(%rip), %rdi
	movsd	LCPI0_3(%rip), %xmm0
	movq	_p1(%rip), %rsi
	movsd	-32(%rbp), %xmm1
	movsd	_total1(%rip), %xmm2
	movl	%eax, -116(%rbp)        ## 4-byte Spill
	movb	$3, %al
	callq	_printf
	leaq	L_.str16(%rip), %rdi
	movsd	LCPI0_2(%rip), %xmm0
	movq	_p+8(%rip), %rsi
	movsd	-40(%rbp), %xmm1
	movsd	_total2(%rip), %xmm2
	movl	%eax, -120(%rbp)        ## 4-byte Spill
	movb	$3, %al
	callq	_printf
	leaq	L_.str17(%rip), %rdi
	movsd	LCPI0_2(%rip), %xmm0
	movq	_p1+8(%rip), %rsi
	movsd	-40(%rbp), %xmm1
	movsd	_total2(%rip), %xmm2
	movl	%eax, -124(%rbp)        ## 4-byte Spill
	movb	$3, %al
	callq	_printf
	leaq	L_.str16(%rip), %rdi
	movsd	LCPI0_1(%rip), %xmm0
	movq	_p+16(%rip), %rsi
	movsd	-48(%rbp), %xmm1
	movsd	_total3(%rip), %xmm2
	movl	%eax, -128(%rbp)        ## 4-byte Spill
	movb	$3, %al
	callq	_printf
	leaq	L_.str17(%rip), %rdi
	movsd	LCPI0_1(%rip), %xmm0
	movq	_p1+16(%rip), %rsi
	movsd	-48(%rbp), %xmm1
	movsd	_total3(%rip), %xmm2
	movl	%eax, -132(%rbp)        ## 4-byte Spill
	movb	$3, %al
	callq	_printf
	leaq	L_.str16(%rip), %rdi
	movsd	LCPI0_0(%rip), %xmm0
	movq	_p+24(%rip), %rsi
	movsd	-56(%rbp), %xmm1
	movsd	_total4(%rip), %xmm2
	movl	%eax, -136(%rbp)        ## 4-byte Spill
	movb	$3, %al
	callq	_printf
	leaq	L_.str18(%rip), %rdi
	movsd	LCPI0_0(%rip), %xmm0
	movq	_p1+24(%rip), %rsi
	movsd	-56(%rbp), %xmm1
	movsd	_total4(%rip), %xmm2
	movl	%eax, -140(%rbp)        ## 4-byte Spill
	movb	$3, %al
	callq	_printf
	leaq	L_.str19(%rip), %rdi
	movsd	_total1(%rip), %xmm0
	addsd	_total2(%rip), %xmm0
	addsd	_total3(%rip), %xmm0
	addsd	_total4(%rip), %xmm0
	movsd	%xmm0, -24(%rbp)
	movsd	-24(%rbp), %xmm0
	movl	%eax, -144(%rbp)        ## 4-byte Spill
	movb	$1, %al
	callq	_printf
	movl	%eax, -148(%rbp)        ## 4-byte Spill
	addq	$160, %rsp
	popq	%rbp
	retq
	.cfi_endproc
	.align	2, 0x90
L0_0_set_2 = LBB0_2-LJTI0_0
L0_0_set_3 = LBB0_3-LJTI0_0
L0_0_set_4 = LBB0_4-LJTI0_0
L0_0_set_5 = LBB0_5-LJTI0_0
LJTI0_0:
	.long	L0_0_set_2
	.long	L0_0_set_3
	.long	L0_0_set_4
	.long	L0_0_set_5

	.globl	_MODIFIED
	.align	4, 0x90
_MODIFIED:                              ## @MODIFIED
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp7:
	.cfi_def_cfa_offset 16
Ltmp8:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp9:
	.cfi_def_cfa_register %rbp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_SEARCH
	.align	4, 0x90
_SEARCH:                                ## @SEARCH
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp12:
	.cfi_def_cfa_offset 16
Ltmp13:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp14:
	.cfi_def_cfa_register %rbp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_DELETE
	.align	4, 0x90
_DELETE:                                ## @DELETE
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp17:
	.cfi_def_cfa_offset 16
Ltmp18:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp19:
	.cfi_def_cfa_register %rbp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_PRINT
	.align	4, 0x90
_PRINT:                                 ## @PRINT
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp22:
	.cfi_def_cfa_offset 16
Ltmp23:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp24:
	.cfi_def_cfa_register %rbp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_fruits
	.align	4, 0x90
_fruits:                                ## @fruits
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp27:
	.cfi_def_cfa_offset 16
Ltmp28:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp29:
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	leaq	L_.str20(%rip), %rdi
	callq	_puts
	leaq	L_.str21(%rip), %rdi
	xorl	%ecx, %ecx
	movb	%cl, %dl
	movl	%eax, -8(%rbp)          ## 4-byte Spill
	movb	%dl, %al
	movb	%dl, -9(%rbp)           ## 1-byte Spill
	callq	_printf
	leaq	L_.str9(%rip), %rdi
	leaq	-4(%rbp), %rsi
	movb	-9(%rbp), %dl           ## 1-byte Reload
	movl	%eax, -16(%rbp)         ## 4-byte Spill
	movb	%dl, %al
	callq	_scanf
	movl	-4(%rbp), %ecx
	decl	%ecx
	movl	%ecx, %esi
	subl	$4, %ecx
	movl	%eax, -20(%rbp)         ## 4-byte Spill
	movq	%rsi, -32(%rbp)         ## 8-byte Spill
	movl	%ecx, -36(%rbp)         ## 4-byte Spill
	ja	LBB5_6
## BB#10:
	leaq	LJTI5_0(%rip), %rax
	movq	-32(%rbp), %rcx         ## 8-byte Reload
	movslq	(%rax,%rcx,4), %rdx
	addq	%rax, %rdx
	jmpq	*%rdx
LBB5_1:
	callq	_ADD
	leaq	L_.str22(%rip), %rdi
	callq	_puts
	movl	%eax, -40(%rbp)         ## 4-byte Spill
	jmp	LBB5_9
LBB5_2:
	callq	_MODIFIED
	leaq	L_.str23(%rip), %rdi
	callq	_puts
	movl	%eax, -44(%rbp)         ## 4-byte Spill
	jmp	LBB5_9
LBB5_3:
	callq	_SEARCH
	leaq	L_.str24(%rip), %rdi
	callq	_puts
	movl	%eax, -48(%rbp)         ## 4-byte Spill
	jmp	LBB5_9
LBB5_4:
	callq	_DELETE
	leaq	L_.str25(%rip), %rdi
	callq	_puts
	movl	%eax, -52(%rbp)         ## 4-byte Spill
	jmp	LBB5_9
LBB5_5:
	callq	_PRINT
	leaq	L_.str26(%rip), %rdi
	callq	_puts
	movl	%eax, -56(%rbp)         ## 4-byte Spill
	jmp	LBB5_9
LBB5_6:
	movl	$0, %eax
	cmpl	-4(%rbp), %eax
	jne	LBB5_8
## BB#7:
	leaq	L_.str27(%rip), %rdi
	callq	_puts
	movl	%eax, -60(%rbp)         ## 4-byte Spill
LBB5_8:
	jmp	LBB5_9
LBB5_9:
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc
	.align	2, 0x90
L5_0_set_1 = LBB5_1-LJTI5_0
L5_0_set_2 = LBB5_2-LJTI5_0
L5_0_set_3 = LBB5_3-LJTI5_0
L5_0_set_4 = LBB5_4-LJTI5_0
L5_0_set_5 = LBB5_5-LJTI5_0
LJTI5_0:
	.long	L5_0_set_1
	.long	L5_0_set_2
	.long	L5_0_set_3
	.long	L5_0_set_4
	.long	L5_0_set_5

	.section	__TEXT,__const
	.globl	_PA                     ## @PA
	.align	3
_PA:
	.quad	4607857958744122982     ## double 1.1499999999999999

	.globl	_PO                     ## @PO
	.align	3
_PO:
	.quad	4608083138725491507     ## double 1.2

	.globl	_PB                     ## @PB
	.align	3
_PB:
	.quad	4606732058837280358     ## double 0.94999999999999996

	.globl	_PP                     ## @PP
	.align	3
_PP:
	.quad	4605831338911806259     ## double 0.84999999999999998

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"\350\213\271\346\236\234"

L_.str1:                                ## @.str1
	.asciz	"\346\241\224\345\255\220"

L_.str2:                                ## @.str2
	.asciz	"\351\246\231\350\225\211"

L_.str3:                                ## @.str3
	.asciz	"\350\217\240\350\220\235"

	.section	__DATA,__data
	.globl	_p                      ## @p
	.align	4
_p:
	.quad	L_.str
	.quad	L_.str1
	.quad	L_.str2
	.quad	L_.str3

	.section	__TEXT,__cstring,cstring_literals
L_.str4:                                ## @.str4
	.asciz	"APPLE"

L_.str5:                                ## @.str5
	.asciz	"ORANGE"

L_.str6:                                ## @.str6
	.asciz	"BANANA"

L_.str7:                                ## @.str7
	.asciz	"PINEAPPLE"

	.section	__DATA,__data
	.globl	_p1                     ## @p1
	.align	4
_p1:
	.quad	L_.str4
	.quad	L_.str5
	.quad	L_.str6
	.quad	L_.str7

	.globl	_total1                 ## @total1
.zerofill __DATA,__common,_total1,8,3
	.globl	_total2                 ## @total2
.zerofill __DATA,__common,_total2,8,3
	.globl	_total3                 ## @total3
.zerofill __DATA,__common,_total3,8,3
	.globl	_total4                 ## @total4
.zerofill __DATA,__common,_total4,8,3
	.section	__TEXT,__cstring,cstring_literals
L_.str8:                                ## @.str8
	.asciz	"\350\257\267\350\276\223\345\205\245\344\273\243\347\240\201\357\274\232"

L_.str9:                                ## @.str9
	.asciz	"%d"

L_.str10:                               ## @.str10
	.asciz	"\350\257\267\350\276\223\345\205\245\351\207\215\351\207\217\357\274\232"

L_.str11:                               ## @.str11
	.asciz	"%lf"

L_.str12:                               ## @.str12
	.asciz	"\346\230\257\345\220\246\347\273\247\347\273\255\350\264\255\344\271\260\357\274\237(y\346\210\226\346\214\211\344\273\273\346\204\217\351\224\256\347\273\223\346\235\237):"

L_.str13:                               ## @.str13
	.asciz	"%c"

L_.str14:                               ## @.str14
	.asciz	"\350\264\247\345\223\201\345\220\215\t\345\215\225\344\273\267(\302\245/kg)\t\t\351\207\215\351\207\217(kg)\t\t\346\200\273\344\273\267(\302\245)"

L_.str15:                               ## @.str15
	.asciz	"goods\tprice(\302\245/kg)\tWight(kg)\tTotal(\302\245)"

L_.str16:                               ## @.str16
	.asciz	"%s\t\t%.2lf\t%.2lf\t%.2lf\n"

L_.str17:                               ## @.str17
	.asciz	"%s\t%.2lf\t%.2lf\t%.2lf\n"

L_.str18:                               ## @.str18
	.asciz	"%s %.2lf\t%.2lf\t%.2lf\n"

L_.str19:                               ## @.str19
	.asciz	"\350\264\255\344\271\260\345\225\206\345\223\201\346\200\273\344\273\267\344\270\272\357\274\232%.2f\n"

L_.str20:                               ## @.str20
	.asciz	"\350\217\234\345\215\225\357\274\2321\343\200\201\346\267\273\345\212\240  2\343\200\201\344\277\256\346\224\271  3\343\200\201\346\237\245\350\257\242  4\343\200\201\345\210\240\351\231\244  5\343\200\201\346\211\223\345\215\260"

L_.str21:                               ## @.str21
	.asciz	"\350\257\267\350\276\223\345\205\245\357\274\232"

L_.str22:                               ## @.str22
	.asciz	"\346\267\273\345\212\240\346\210\220\345\212\237\357\274\201"

L_.str23:                               ## @.str23
	.asciz	"\344\277\256\346\224\271\346\210\220\345\212\237\357\274\201"

L_.str24:                               ## @.str24
	.asciz	"\346\237\245\350\257\242\346\210\220\345\212\237\357\274\201"

L_.str25:                               ## @.str25
	.asciz	"\345\210\240\351\231\244\346\210\220\345\212\237\357\274\201"

L_.str26:                               ## @.str26
	.asciz	"\346\211\223\345\215\260\346\210\220\345\212\237\357\274\201"

L_.str27:                               ## @.str27
	.asciz	"\346\223\215\344\275\234\351\224\231\350\257\257\357\274\201"


.subsections_via_symbols
