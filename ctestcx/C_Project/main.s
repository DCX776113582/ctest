	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
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
	subq	$128, %rsp
	movl	$0, -4(%rbp)
	movl	%edi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movb	$121, -21(%rbp)
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	jmp	LBB0_2
LBB0_2:                                 ##   in Loop: Header=BB0_1 Depth=1
	leaq	L_.str(%rip), %rax
	movq	%rax, %rdi
	movq	%rax, -32(%rbp)         ## 8-byte Spill
	callq	_puts
	leaq	L_.str1(%rip), %rdi
	movl	%eax, -36(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str2(%rip), %rdi
	movl	%eax, -40(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str3(%rip), %rdi
	movl	%eax, -44(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str4(%rip), %rdi
	movl	%eax, -48(%rbp)         ## 4-byte Spill
	callq	_puts
	movq	-32(%rbp), %rdi         ## 8-byte Reload
	movl	%eax, -52(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str5(%rip), %rdi
	xorl	%ecx, %ecx
	movb	%cl, %dl
	movl	%eax, -56(%rbp)         ## 4-byte Spill
	movb	%dl, %al
	movb	%dl, -57(%rbp)          ## 1-byte Spill
	callq	_printf
	leaq	L_.str6(%rip), %rdi
	leaq	-20(%rbp), %rsi
	movb	-57(%rbp), %dl          ## 1-byte Reload
	movl	%eax, -64(%rbp)         ## 4-byte Spill
	movb	%dl, %al
	callq	_scanf
	movl	-20(%rbp), %ecx
	decl	%ecx
	movl	%ecx, %esi
	subl	$3, %ecx
	movl	%eax, -68(%rbp)         ## 4-byte Spill
	movq	%rsi, -80(%rbp)         ## 8-byte Spill
	movl	%ecx, -84(%rbp)         ## 4-byte Spill
	ja	LBB0_7
## BB#12:                               ##   in Loop: Header=BB0_1 Depth=1
	leaq	LJTI0_0(%rip), %rax
	movq	-80(%rbp), %rcx         ## 8-byte Reload
	movslq	(%rax,%rcx,4), %rdx
	addq	%rax, %rdx
	jmpq	*%rdx
LBB0_3:                                 ##   in Loop: Header=BB0_1 Depth=1
	movl	$5, %edi
	callq	_create
	leaq	L_.str7(%rip), %rdi
	callq	_puts
	movl	%eax, -88(%rbp)         ## 4-byte Spill
	jmp	LBB0_8
LBB0_4:                                 ##   in Loop: Header=BB0_1 Depth=1
	movb	$0, %al
	callq	_save
	leaq	L_.str8(%rip), %rdi
	callq	_puts
	movl	%eax, -92(%rbp)         ## 4-byte Spill
	jmp	LBB0_8
LBB0_5:                                 ##   in Loop: Header=BB0_1 Depth=1
	movq	_students@GOTPCREL(%rip), %rdi
	callq	_showStudentInfo
	leaq	L_.str9(%rip), %rdi
	callq	_puts
	movl	%eax, -96(%rbp)         ## 4-byte Spill
	jmp	LBB0_8
LBB0_6:                                 ##   in Loop: Header=BB0_1 Depth=1
	movb	$0, %al
	callq	_load
	leaq	L_.str10(%rip), %rdi
	callq	_puts
	movl	%eax, -100(%rbp)        ## 4-byte Spill
	jmp	LBB0_8
LBB0_7:                                 ##   in Loop: Header=BB0_1 Depth=1
	leaq	L_.str11(%rip), %rdi
	callq	_puts
	movl	%eax, -104(%rbp)        ## 4-byte Spill
LBB0_8:                                 ##   in Loop: Header=BB0_1 Depth=1
	leaq	L_.str12(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	%eax, -108(%rbp)        ## 4-byte Spill
	callq	_getchar
	leaq	L_.str13(%rip), %rdi
	leaq	-21(%rbp), %rsi
	movl	%eax, -112(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	movsbl	-21(%rbp), %ecx
	cmpl	$121, %ecx
	movl	%eax, -116(%rbp)        ## 4-byte Spill
	jne	LBB0_10
## BB#9:                                ##   in Loop: Header=BB0_1 Depth=1
	jmp	LBB0_1
LBB0_10:
	jmp	LBB0_11
LBB0_11:
	movl	$0, %eax
	addq	$128, %rsp
	popq	%rbp
	retq
	.cfi_endproc
	.align	2, 0x90
L0_0_set_3 = LBB0_3-LJTI0_0
L0_0_set_4 = LBB0_4-LJTI0_0
L0_0_set_5 = LBB0_5-LJTI0_0
L0_0_set_6 = LBB0_6-LJTI0_0
LJTI0_0:
	.long	L0_0_set_3
	.long	L0_0_set_4
	.long	L0_0_set_5
	.long	L0_0_set_6

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"**********************************"

L_.str1:                                ## @.str1
	.asciz	"*              1\343\200\201\345\210\233\345\273\272            *"

L_.str2:                                ## @.str2
	.asciz	"*              2\343\200\201\344\277\235\345\255\230            *"

L_.str3:                                ## @.str3
	.asciz	"*              3\343\200\201\346\211\223\345\215\260            *"

L_.str4:                                ## @.str4
	.asciz	"*              4\343\200\201\346\230\276\347\244\272            *"

L_.str5:                                ## @.str5
	.asciz	"\350\257\267\351\200\211\346\213\251\357\274\232"

L_.str6:                                ## @.str6
	.asciz	"%d"

L_.str7:                                ## @.str7
	.asciz	"\345\210\233\345\273\272\346\210\220\345\212\237\357\274\201"

L_.str8:                                ## @.str8
	.asciz	"\344\277\235\345\255\230\346\210\220\345\212\237\357\274\201"

L_.str9:                                ## @.str9
	.asciz	"\346\211\223\345\215\260\346\210\220\345\212\237\357\274\201"

L_.str10:                               ## @.str10
	.asciz	"\350\257\273\345\217\226\346\230\276\347\244\272\346\210\220\345\212\237\357\274\201"

L_.str11:                               ## @.str11
	.asciz	"\346\225\260\346\215\256\345\207\272\351\224\231\357\274\214\346\255\243\345\234\250\351\200\200\345\207\272"

L_.str12:                               ## @.str12
	.asciz	"\346\230\257\345\220\246\347\273\247\347\273\255\346\223\215\344\275\234(y\351\224\256\347\273\247\347\273\255\357\274\214\345\205\266\344\273\226\351\224\256\351\200\200\345\207\272)\357\274\232"

L_.str13:                               ## @.str13
	.asciz	"%c"


.subsections_via_symbols
