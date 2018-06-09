	.section	__TEXT,__text,regular,pure_instructions
	.globl	_test1_01
	.align	4, 0x90
_test1_01:                              ## @test1_01
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
	subq	$64, %rsp
	leaq	L_.str(%rip), %rdi
	xorl	%eax, %eax
	movb	%al, %cl
	movb	%cl, %al
	movb	%cl, -5(%rbp)           ## 1-byte Spill
	callq	_printf
	leaq	L_.str1(%rip), %rdi
	leaq	-4(%rbp), %rsi
	movb	-5(%rbp), %cl           ## 1-byte Reload
	movl	%eax, -12(%rbp)         ## 4-byte Spill
	movb	%cl, %al
	callq	_scanf
	movl	-4(%rbp), %edx
	decl	%edx
	movl	%edx, %esi
	subl	$6, %edx
	movl	%eax, -16(%rbp)         ## 4-byte Spill
	movq	%rsi, -24(%rbp)         ## 8-byte Spill
	movl	%edx, -28(%rbp)         ## 4-byte Spill
	ja	LBB0_8
## BB#10:
	leaq	LJTI0_0(%rip), %rax
	movq	-24(%rbp), %rcx         ## 8-byte Reload
	movslq	(%rax,%rcx,4), %rdx
	addq	%rax, %rdx
	jmpq	*%rdx
LBB0_1:
	leaq	L_.str2(%rip), %rdi
	callq	_puts
	movl	%eax, -32(%rbp)         ## 4-byte Spill
	jmp	LBB0_9
LBB0_2:
	leaq	L_.str3(%rip), %rdi
	callq	_puts
	movl	%eax, -36(%rbp)         ## 4-byte Spill
	jmp	LBB0_9
LBB0_3:
	leaq	L_.str4(%rip), %rdi
	callq	_puts
	movl	%eax, -40(%rbp)         ## 4-byte Spill
	jmp	LBB0_9
LBB0_4:
	leaq	L_.str5(%rip), %rdi
	callq	_puts
	movl	%eax, -44(%rbp)         ## 4-byte Spill
	jmp	LBB0_9
LBB0_5:
	leaq	L_.str6(%rip), %rdi
	callq	_puts
	movl	%eax, -48(%rbp)         ## 4-byte Spill
	jmp	LBB0_9
LBB0_6:
	leaq	L_.str7(%rip), %rdi
	callq	_puts
	movl	%eax, -52(%rbp)         ## 4-byte Spill
	jmp	LBB0_9
LBB0_7:
	leaq	L_.str8(%rip), %rdi
	callq	_puts
	movl	%eax, -56(%rbp)         ## 4-byte Spill
	jmp	LBB0_9
LBB0_8:
	leaq	L_.str9(%rip), %rdi
	callq	_puts
	movl	%eax, -60(%rbp)         ## 4-byte Spill
LBB0_9:
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc
	.align	2, 0x90
L0_0_set_1 = LBB0_1-LJTI0_0
L0_0_set_2 = LBB0_2-LJTI0_0
L0_0_set_3 = LBB0_3-LJTI0_0
L0_0_set_4 = LBB0_4-LJTI0_0
L0_0_set_5 = LBB0_5-LJTI0_0
L0_0_set_6 = LBB0_6-LJTI0_0
L0_0_set_7 = LBB0_7-LJTI0_0
LJTI0_0:
	.long	L0_0_set_1
	.long	L0_0_set_2
	.long	L0_0_set_3
	.long	L0_0_set_4
	.long	L0_0_set_5
	.long	L0_0_set_6
	.long	L0_0_set_7

	.globl	_add
	.align	4, 0x90
_add:                                   ## @add
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
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %esi
	addl	-8(%rbp), %esi
	movl	%esi, %eax
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_sub
	.align	4, 0x90
_sub:                                   ## @sub
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
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %esi
	subl	-8(%rbp), %esi
	movl	%esi, %eax
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_mul
	.align	4, 0x90
_mul:                                   ## @mul
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
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %esi
	imull	-8(%rbp), %esi
	movl	%esi, %eax
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_divi
	.align	4, 0x90
_divi:                                  ## @divi
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
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %eax
	cltd
	idivl	-8(%rbp)
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_rem
	.align	4, 0x90
_rem:                                   ## @rem
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
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %eax
	cltd
	idivl	-8(%rbp)
	movl	%edx, %eax
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_result
	.align	4, 0x90
_result:                                ## @result
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp32:
	.cfi_def_cfa_offset 16
Ltmp33:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp34:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
	movq	-8(%rbp), %rdi
	movl	-12(%rbp), %edx
	movl	-16(%rbp), %esi
	movq	%rdi, -24(%rbp)         ## 8-byte Spill
	movl	%edx, %edi
	movq	-24(%rbp), %rax         ## 8-byte Reload
	callq	*%rax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_jisuanqi
	.align	4, 0x90
_jisuanqi:                              ## @jisuanqi
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp37:
	.cfi_def_cfa_offset 16
Ltmp38:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp39:
	.cfi_def_cfa_register %rbp
	subq	$96, %rsp
	movl	$0, -16(%rbp)
	leaq	L_.str10(%rip), %rdi
	xorl	%eax, %eax
	movb	%al, %cl
	movb	%cl, %al
	movb	%cl, -17(%rbp)          ## 1-byte Spill
	callq	_printf
	leaq	L_.str11(%rip), %rdi
	movb	-17(%rbp), %cl          ## 1-byte Reload
	movl	%eax, -24(%rbp)         ## 4-byte Spill
	movb	%cl, %al
	callq	_printf
	leaq	L_.str1(%rip), %rdi
	leaq	-4(%rbp), %rsi
	movq	%rdi, -32(%rbp)         ## 8-byte Spill
	movb	-17(%rbp), %cl          ## 1-byte Reload
	movl	%eax, -36(%rbp)         ## 4-byte Spill
	movb	%cl, %al
	callq	_scanf
	leaq	L_.str12(%rip), %rdi
	movb	-17(%rbp), %cl          ## 1-byte Reload
	movl	%eax, -40(%rbp)         ## 4-byte Spill
	movb	%cl, %al
	callq	_printf
	leaq	-8(%rbp), %rsi
	movq	-32(%rbp), %rdi         ## 8-byte Reload
	movb	-17(%rbp), %cl          ## 1-byte Reload
	movl	%eax, -44(%rbp)         ## 4-byte Spill
	movb	%cl, %al
	callq	_scanf
	leaq	L_.str13(%rip), %rdi
	movb	-17(%rbp), %cl          ## 1-byte Reload
	movl	%eax, -48(%rbp)         ## 4-byte Spill
	movb	%cl, %al
	callq	_printf
	movl	%eax, -52(%rbp)         ## 4-byte Spill
	callq	_getchar
	leaq	L_.str14(%rip), %rdi
	leaq	-9(%rbp), %rsi
	movb	-17(%rbp), %cl          ## 1-byte Reload
	movl	%eax, -56(%rbp)         ## 4-byte Spill
	movb	%cl, %al
	callq	_scanf
	movsbl	-9(%rbp), %edx
	addl	$-37, %edx
	movl	%edx, %esi
	subl	$10, %edx
	movl	%eax, -60(%rbp)         ## 4-byte Spill
	movq	%rsi, -72(%rbp)         ## 8-byte Spill
	movl	%edx, -76(%rbp)         ## 4-byte Spill
	ja	LBB7_6
## BB#8:
	leaq	LJTI7_0(%rip), %rax
	movq	-72(%rbp), %rcx         ## 8-byte Reload
	movslq	(%rax,%rcx,4), %rdx
	addq	%rax, %rdx
	jmpq	*%rdx
LBB7_1:
	movq	_fpointer@GOTPCREL(%rip), %rax
	leaq	_add(%rip), %rcx
	movq	%rcx, (%rax)
	movq	(%rax), %rdi
	movl	-4(%rbp), %esi
	movl	-8(%rbp), %edx
	callq	_result
	movl	%eax, -16(%rbp)
	jmp	LBB7_7
LBB7_2:
	movq	_fpointer@GOTPCREL(%rip), %rax
	leaq	_sub(%rip), %rcx
	movq	%rcx, (%rax)
	movq	(%rax), %rdi
	movl	-4(%rbp), %esi
	movl	-8(%rbp), %edx
	callq	_result
	movl	%eax, -16(%rbp)
	jmp	LBB7_7
LBB7_3:
	movq	_fpointer@GOTPCREL(%rip), %rax
	leaq	_mul(%rip), %rcx
	movq	%rcx, (%rax)
	movq	(%rax), %rdi
	movl	-4(%rbp), %esi
	movl	-8(%rbp), %edx
	callq	_result
	movl	%eax, -16(%rbp)
	jmp	LBB7_7
LBB7_4:
	movq	_fpointer@GOTPCREL(%rip), %rax
	leaq	_divi(%rip), %rcx
	movq	%rcx, (%rax)
	movq	(%rax), %rdi
	movl	-4(%rbp), %esi
	movl	-8(%rbp), %edx
	callq	_result
	movl	%eax, -16(%rbp)
	jmp	LBB7_7
LBB7_5:
	movq	_fpointer@GOTPCREL(%rip), %rax
	leaq	_rem(%rip), %rcx
	movq	%rcx, (%rax)
	movq	(%rax), %rdi
	movl	-4(%rbp), %esi
	movl	-8(%rbp), %edx
	callq	_result
	movl	%eax, -16(%rbp)
	jmp	LBB7_7
LBB7_6:
	leaq	L_.str15(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	%eax, -80(%rbp)         ## 4-byte Spill
LBB7_7:
	leaq	L_.str16(%rip), %rdi
	movl	-4(%rbp), %esi
	movsbl	-9(%rbp), %edx
	movl	-8(%rbp), %ecx
	movl	-16(%rbp), %r8d
	movb	$0, %al
	callq	_printf
	movl	%eax, -84(%rbp)         ## 4-byte Spill
	addq	$96, %rsp
	popq	%rbp
	retq
	.cfi_endproc
	.align	2, 0x90
L7_0_set_5 = LBB7_5-LJTI7_0
L7_0_set_6 = LBB7_6-LJTI7_0
L7_0_set_3 = LBB7_3-LJTI7_0
L7_0_set_1 = LBB7_1-LJTI7_0
L7_0_set_2 = LBB7_2-LJTI7_0
L7_0_set_4 = LBB7_4-LJTI7_0
LJTI7_0:
	.long	L7_0_set_5
	.long	L7_0_set_6
	.long	L7_0_set_6
	.long	L7_0_set_6
	.long	L7_0_set_6
	.long	L7_0_set_3
	.long	L7_0_set_1
	.long	L7_0_set_6
	.long	L7_0_set_2
	.long	L7_0_set_6
	.long	L7_0_set_4

	.section	__TEXT,__literal4,4byte_literals
	.align	2
LCPI8_0:
	.long	1056964608              ## float 0.5
LCPI8_1:
	.long	1061158912              ## float 0.75
LCPI8_2:
	.long	1061997773              ## float 0.800000011
LCPI8_3:
	.long	1063675494              ## float 0.899999976
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_test1
	.align	4, 0x90
_test1:                                 ## @test1
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp42:
	.cfi_def_cfa_offset 16
Ltmp43:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp44:
	.cfi_def_cfa_register %rbp
	subq	$160, %rsp
	leaq	L_.str17(%rip), %rax
	movq	%rax, -8(%rbp)
	leaq	L_.str18(%rip), %rax
	movq	%rax, -16(%rbp)
	leaq	L_.str19(%rip), %rax
	movq	%rax, -24(%rbp)
	leaq	L_.str20(%rip), %rax
	movq	%rax, -32(%rbp)
	leaq	L_.str21(%rip), %rdi
	xorl	%ecx, %ecx
	movb	%cl, %dl
	movb	%dl, %al
	movb	%dl, -77(%rbp)          ## 1-byte Spill
	callq	_printf
	leaq	L_.str1(%rip), %rdi
	leaq	-36(%rbp), %rsi
	movb	-77(%rbp), %dl          ## 1-byte Reload
	movl	%eax, -84(%rbp)         ## 4-byte Spill
	movb	%dl, %al
	callq	_scanf
	movl	-36(%rbp), %ecx
	decl	%ecx
	movl	%ecx, %esi
	subl	$3, %ecx
	movl	%eax, -88(%rbp)         ## 4-byte Spill
	movq	%rsi, -96(%rbp)         ## 8-byte Spill
	movl	%ecx, -100(%rbp)        ## 4-byte Spill
	ja	LBB8_5
## BB#7:
	leaq	LJTI8_0(%rip), %rax
	movq	-96(%rbp), %rcx         ## 8-byte Reload
	movslq	(%rax,%rcx,4), %rdx
	addq	%rax, %rdx
	jmpq	*%rdx
LBB8_1:
	leaq	L_.str22(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str1(%rip), %rdi
	leaq	-40(%rbp), %rsi
	movss	LCPI8_3(%rip), %xmm0
	movl	$8888, -48(%rbp)        ## imm = 0x22B8
	movss	%xmm0, -52(%rbp)
	movl	%eax, -104(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	leaq	L_.str23(%rip), %rdi
	movl	-40(%rbp), %ecx
	imull	-48(%rbp), %ecx
	cvtsi2ssl	%ecx, %xmm0
	mulss	-52(%rbp), %xmm0
	movss	%xmm0, -44(%rbp)
	movq	-8(%rbp), %rsi
	movl	-40(%rbp), %edx
	movl	-48(%rbp), %ecx
	cvtss2sd	-44(%rbp), %xmm0
	movl	%eax, -108(%rbp)        ## 4-byte Spill
	movb	$1, %al
	callq	_printf
	movl	%eax, -112(%rbp)        ## 4-byte Spill
	jmp	LBB8_6
LBB8_2:
	leaq	L_.str22(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str1(%rip), %rdi
	leaq	-40(%rbp), %rsi
	movss	LCPI8_2(%rip), %xmm0
	movl	$7999, -56(%rbp)        ## imm = 0x1F3F
	movss	%xmm0, -60(%rbp)
	movl	%eax, -116(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	leaq	L_.str23(%rip), %rdi
	movl	-40(%rbp), %ecx
	imull	-56(%rbp), %ecx
	cvtsi2ssl	%ecx, %xmm0
	mulss	-60(%rbp), %xmm0
	movss	%xmm0, -44(%rbp)
	movq	-16(%rbp), %rsi
	movl	-40(%rbp), %edx
	movl	-56(%rbp), %ecx
	cvtss2sd	-44(%rbp), %xmm0
	movl	%eax, -120(%rbp)        ## 4-byte Spill
	movb	$1, %al
	callq	_printf
	movl	%eax, -124(%rbp)        ## 4-byte Spill
	jmp	LBB8_6
LBB8_3:
	leaq	L_.str22(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str1(%rip), %rdi
	leaq	-40(%rbp), %rsi
	movss	LCPI8_1(%rip), %xmm0
	movl	$2888, -64(%rbp)        ## imm = 0xB48
	movss	%xmm0, -68(%rbp)
	movl	%eax, -128(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	leaq	L_.str23(%rip), %rdi
	movl	-40(%rbp), %ecx
	imull	-64(%rbp), %ecx
	cvtsi2ssl	%ecx, %xmm0
	mulss	-68(%rbp), %xmm0
	movss	%xmm0, -44(%rbp)
	movq	-24(%rbp), %rsi
	movl	-40(%rbp), %edx
	movl	-64(%rbp), %ecx
	cvtss2sd	-44(%rbp), %xmm0
	movl	%eax, -132(%rbp)        ## 4-byte Spill
	movb	$1, %al
	callq	_printf
	movl	%eax, -136(%rbp)        ## 4-byte Spill
	jmp	LBB8_6
LBB8_4:
	leaq	L_.str22(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str1(%rip), %rdi
	leaq	-40(%rbp), %rsi
	movss	LCPI8_0(%rip), %xmm0
	movl	$1999, -72(%rbp)        ## imm = 0x7CF
	movss	%xmm0, -76(%rbp)
	movl	%eax, -140(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	leaq	L_.str23(%rip), %rdi
	movl	-40(%rbp), %ecx
	imull	-72(%rbp), %ecx
	cvtsi2ssl	%ecx, %xmm0
	mulss	-76(%rbp), %xmm0
	movss	%xmm0, -44(%rbp)
	movq	-32(%rbp), %rsi
	movl	-40(%rbp), %edx
	movl	-72(%rbp), %ecx
	cvtss2sd	-44(%rbp), %xmm0
	movl	%eax, -144(%rbp)        ## 4-byte Spill
	movb	$1, %al
	callq	_printf
	movl	%eax, -148(%rbp)        ## 4-byte Spill
	jmp	LBB8_6
LBB8_5:
	leaq	L_.str24(%rip), %rdi
	callq	_puts
	movl	%eax, -152(%rbp)        ## 4-byte Spill
LBB8_6:
	addq	$160, %rsp
	popq	%rbp
	retq
	.cfi_endproc
	.align	2, 0x90
L8_0_set_1 = LBB8_1-LJTI8_0
L8_0_set_2 = LBB8_2-LJTI8_0
L8_0_set_3 = LBB8_3-LJTI8_0
L8_0_set_4 = LBB8_4-LJTI8_0
LJTI8_0:
	.long	L8_0_set_1
	.long	L8_0_set_2
	.long	L8_0_set_3
	.long	L8_0_set_4

	.globl	_test1_1
	.align	4, 0x90
_test1_1:                               ## @test1_1
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp47:
	.cfi_def_cfa_offset 16
Ltmp48:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp49:
	.cfi_def_cfa_register %rbp
	subq	$144, %rsp
	movb	$121, -17(%rbp)
LBB9_1:                                 ## =>This Inner Loop Header: Depth=1
	leaq	L_.str25(%rip), %rdi
	callq	_puts
	leaq	L_.str26(%rip), %rdi
	movl	%eax, -24(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str27(%rip), %rdi
	movl	%eax, -28(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str28(%rip), %rdi
	movl	%eax, -32(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str29(%rip), %rdi
	movl	%eax, -36(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str30(%rip), %rdi
	xorl	%ecx, %ecx
	movb	%cl, %dl
	movl	%eax, -40(%rbp)         ## 4-byte Spill
	movb	%dl, %al
	movb	%dl, -41(%rbp)          ## 1-byte Spill
	callq	_printf
	leaq	L_.str1(%rip), %rdi
	leaq	-4(%rbp), %rsi
	movq	%rdi, -56(%rbp)         ## 8-byte Spill
	movb	-41(%rbp), %dl          ## 1-byte Reload
	movl	%eax, -60(%rbp)         ## 4-byte Spill
	movb	%dl, %al
	callq	_scanf
	leaq	L_.str31(%rip), %rdi
	movb	-41(%rbp), %dl          ## 1-byte Reload
	movl	%eax, -64(%rbp)         ## 4-byte Spill
	movb	%dl, %al
	callq	_printf
	leaq	-8(%rbp), %rsi
	movq	-56(%rbp), %rdi         ## 8-byte Reload
	movb	-41(%rbp), %dl          ## 1-byte Reload
	movl	%eax, -68(%rbp)         ## 4-byte Spill
	movb	%dl, %al
	callq	_scanf
	movl	_test1_1.count(%rip), %esi
	leaq	L_.str32(%rip), %rdi
	movb	-41(%rbp), %dl          ## 1-byte Reload
	movl	%eax, -72(%rbp)         ## 4-byte Spill
	movb	%dl, %al
	callq	_printf
	leaq	L_.str33(%rip), %rdi
	movb	-41(%rbp), %dl          ## 1-byte Reload
	movl	%eax, -76(%rbp)         ## 4-byte Spill
	movb	%dl, %al
	callq	_printf
	movl	-4(%rbp), %ecx
	decl	%ecx
	movl	%ecx, %edi
	subl	$3, %ecx
	movl	%eax, -80(%rbp)         ## 4-byte Spill
	movq	%rdi, -88(%rbp)         ## 8-byte Spill
	movl	%ecx, -92(%rbp)         ## 4-byte Spill
	ja	LBB9_6
## BB#14:                               ##   in Loop: Header=BB9_1 Depth=1
	leaq	LJTI9_0(%rip), %rax
	movq	-88(%rbp), %rcx         ## 8-byte Reload
	movslq	(%rax,%rcx,4), %rdx
	addq	%rax, %rdx
	jmpq	*%rdx
LBB9_2:                                 ##   in Loop: Header=BB9_1 Depth=1
	leaq	L_.str34(%rip), %rdi
	movsd	_test1_1.price(%rip), %xmm0
	mulsd	_test1_1.discount(%rip), %xmm0
	cvtsi2sdl	-8(%rbp), %xmm1
	mulsd	%xmm1, %xmm0
	movsd	%xmm0, -16(%rbp)
	movl	-8(%rbp), %esi
	movsd	_test1_1.price(%rip), %xmm0
	movsd	_test1_1.discount(%rip), %xmm1
	movsd	-16(%rbp), %xmm2
	movb	$3, %al
	callq	_printf
	movl	%eax, -96(%rbp)         ## 4-byte Spill
	jmp	LBB9_7
LBB9_3:                                 ##   in Loop: Header=BB9_1 Depth=1
	leaq	L_.str35(%rip), %rdi
	movsd	_test1_1.price+8(%rip), %xmm0
	mulsd	_test1_1.discount+8(%rip), %xmm0
	cvtsi2sdl	-8(%rbp), %xmm1
	mulsd	%xmm1, %xmm0
	movsd	%xmm0, -16(%rbp)
	movl	-8(%rbp), %esi
	movsd	_test1_1.price+8(%rip), %xmm0
	movsd	_test1_1.discount+8(%rip), %xmm1
	movsd	-16(%rbp), %xmm2
	movb	$3, %al
	callq	_printf
	movl	%eax, -100(%rbp)        ## 4-byte Spill
	jmp	LBB9_7
LBB9_4:                                 ##   in Loop: Header=BB9_1 Depth=1
	leaq	L_.str36(%rip), %rdi
	movsd	_test1_1.price+16(%rip), %xmm0
	mulsd	_test1_1.discount+16(%rip), %xmm0
	cvtsi2sdl	-8(%rbp), %xmm1
	mulsd	%xmm1, %xmm0
	movsd	%xmm0, -16(%rbp)
	movl	-8(%rbp), %esi
	movsd	_test1_1.price+16(%rip), %xmm0
	movsd	_test1_1.discount+16(%rip), %xmm1
	movsd	-16(%rbp), %xmm2
	movb	$3, %al
	callq	_printf
	movl	%eax, -104(%rbp)        ## 4-byte Spill
	jmp	LBB9_7
LBB9_5:                                 ##   in Loop: Header=BB9_1 Depth=1
	leaq	L_.str37(%rip), %rdi
	movsd	_test1_1.price+24(%rip), %xmm0
	mulsd	_test1_1.discount+24(%rip), %xmm0
	cvtsi2sdl	-8(%rbp), %xmm1
	mulsd	%xmm1, %xmm0
	movsd	%xmm0, -16(%rbp)
	movl	-8(%rbp), %esi
	movsd	_test1_1.price+24(%rip), %xmm0
	movsd	_test1_1.discount+24(%rip), %xmm1
	movsd	-16(%rbp), %xmm2
	movb	$3, %al
	callq	_printf
	movl	%eax, -108(%rbp)        ## 4-byte Spill
	jmp	LBB9_7
LBB9_6:                                 ##   in Loop: Header=BB9_1 Depth=1
	leaq	L_.str38(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	%eax, -112(%rbp)        ## 4-byte Spill
LBB9_7:                                 ##   in Loop: Header=BB9_1 Depth=1
	leaq	L_.str39(%rip), %rdi
	xorps	%xmm0, %xmm0
	movsd	-16(%rbp), %xmm1
	movsd	_test1_1.sumPrice(%rip), %xmm2
	addsd	%xmm1, %xmm2
	movsd	%xmm2, _test1_1.sumPrice(%rip)
	movsd	%xmm0, -16(%rbp)
	movb	$0, %al
	callq	_printf
	leaq	L_.str40(%rip), %rdi
	movsd	_test1_1.sumPrice(%rip), %xmm0
	movl	%eax, -116(%rbp)        ## 4-byte Spill
	movb	$1, %al
	callq	_printf
	movl	%eax, -120(%rbp)        ## 4-byte Spill
	callq	_getchar
	leaq	L_.str41(%rip), %rdi
	movl	%eax, -124(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str14(%rip), %rdi
	leaq	-17(%rbp), %rsi
	movl	%eax, -128(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	movsbl	-17(%rbp), %ecx
	cmpl	$89, %ecx
	movl	%eax, -132(%rbp)        ## 4-byte Spill
	je	LBB9_9
## BB#8:                                ##   in Loop: Header=BB9_1 Depth=1
	movsbl	-17(%rbp), %eax
	cmpl	$121, %eax
	jne	LBB9_10
LBB9_9:                                 ##   in Loop: Header=BB9_1 Depth=1
	movl	_test1_1.count(%rip), %eax
	addl	$1, %eax
	movl	%eax, _test1_1.count(%rip)
	jmp	LBB9_11
LBB9_10:
	jmp	LBB9_13
LBB9_11:                                ##   in Loop: Header=BB9_1 Depth=1
	jmp	LBB9_12
LBB9_12:                                ##   in Loop: Header=BB9_1 Depth=1
	movb	$1, %al
	testb	$1, %al
	jne	LBB9_1
	jmp	LBB9_13
LBB9_13:
	addq	$144, %rsp
	popq	%rbp
	retq
	.cfi_endproc
	.align	2, 0x90
L9_0_set_2 = LBB9_2-LJTI9_0
L9_0_set_3 = LBB9_3-LJTI9_0
L9_0_set_4 = LBB9_4-LJTI9_0
L9_0_set_5 = LBB9_5-LJTI9_0
LJTI9_0:
	.long	L9_0_set_2
	.long	L9_0_set_3
	.long	L9_0_set_4
	.long	L9_0_set_5

	.globl	_printstudent
	.align	4, 0x90
_printstudent:                          ## @printstudent
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp52:
	.cfi_def_cfa_offset 16
Ltmp53:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp54:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	leaq	16(%rbp), %rax
	leaq	L_.str42(%rip), %rdi
	movq	(%rax), %rsi
	movq	%rax, %rcx
	addq	$8, %rcx
	movsd	20(%rax), %xmm0
	movq	%rcx, %rdx
	movb	$1, %al
	callq	_printf
	movl	%eax, -4(%rbp)          ## 4-byte Spill
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_test02
	.align	4, 0x90
_test02:                                ## @test02
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp57:
	.cfi_def_cfa_offset 16
Ltmp58:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp59:
	.cfi_def_cfa_register %rbp
	subq	$192, %rsp
	leaq	L_.str43(%rip), %rdi
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	L_test02.f1(%rip), %rax
	movq	%rax, -112(%rbp)
	movl	-112(%rbp), %esi
	movl	-108(%rbp), %edx
	movb	$0, %al
	callq	_printf
	leaq	L_.str44(%rip), %rdi
	movq	l_test02.s1(%rip), %rcx
	movq	%rcx, -40(%rbp)
	movq	l_test02.s1+8(%rip), %rcx
	movq	%rcx, -32(%rbp)
	movq	l_test02.s1+16(%rip), %rcx
	movq	%rcx, -24(%rbp)
	movl	l_test02.s1+24(%rip), %edx
	movl	%edx, -16(%rbp)
	movl	%eax, -116(%rbp)        ## 4-byte Spill
	callq	_puts
	leaq	-40(%rbp), %rcx
	movq	(%rcx), %rdi
	movq	%rdi, (%rsp)
	movq	8(%rcx), %rdi
	movq	%rdi, 8(%rsp)
	movq	16(%rcx), %rdi
	movq	%rdi, 16(%rsp)
	movl	24(%rcx), %edx
	movl	%edx, 24(%rsp)
	movl	%eax, -120(%rbp)        ## 4-byte Spill
	callq	_printstudent
	leaq	L_.str45(%rip), %rsi
	movabsq	$20, %rdx
	leaq	-72(%rbp), %rcx
	movq	$1002, -72(%rbp)        ## imm = 0x3EA
	addq	$8, %rcx
	movq	%rcx, %rdi
	callq	___strcpy_chk
	leaq	L_.str46(%rip), %rdi
	movabsq	$100, %rcx
	cvtsi2sdq	%rcx, %xmm0
	movsd	%xmm0, -52(%rbp)
	movq	%rax, -128(%rbp)        ## 8-byte Spill
	callq	_puts
	leaq	-72(%rbp), %rcx
	movq	(%rcx), %rdx
	movq	%rdx, (%rsp)
	movq	8(%rcx), %rdx
	movq	%rdx, 8(%rsp)
	movq	16(%rcx), %rdx
	movq	%rdx, 16(%rsp)
	movl	24(%rcx), %r8d
	movl	%r8d, 24(%rsp)
	movl	%eax, -132(%rbp)        ## 4-byte Spill
	callq	_printstudent
	leaq	L_.str47(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str48(%rip), %rdi
	leaq	-104(%rbp), %rsi
	movl	%eax, -136(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	leaq	L_.str49(%rip), %rdi
	movl	%eax, -140(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str50(%rip), %rdi
	leaq	-104(%rbp), %rcx
	addq	$8, %rcx
	movq	%rcx, %rsi
	movl	%eax, -144(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	leaq	L_.str51(%rip), %rdi
	movl	%eax, -148(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str52(%rip), %rdi
	leaq	-104(%rbp), %rcx
	addq	$20, %rcx
	movq	%rcx, %rsi
	movl	%eax, -152(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	leaq	L_.str53(%rip), %rdi
	movl	%eax, -156(%rbp)        ## 4-byte Spill
	callq	_puts
	leaq	-104(%rbp), %rcx
	movq	(%rcx), %rdx
	movq	%rdx, (%rsp)
	movq	8(%rcx), %rdx
	movq	%rdx, 8(%rsp)
	movq	16(%rcx), %rdx
	movq	%rdx, 16(%rsp)
	movl	24(%rcx), %r8d
	movl	%r8d, 24(%rsp)
	movl	%eax, -160(%rbp)        ## 4-byte Spill
	callq	_printstudent
	movq	___stack_chk_guard@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rcx
	cmpq	-8(%rbp), %rcx
	jne	LBB11_2
## BB#1:                                ## %SP_return
	addq	$192, %rsp
	popq	%rbp
	retq
LBB11_2:                                ## %CallStackCheckFailBlk
	callq	___stack_chk_fail
	.cfi_endproc

	.globl	_prt
	.align	4, 0x90
_prt:                                   ## @prt
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp62:
	.cfi_def_cfa_offset 16
Ltmp63:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp64:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	leaq	16(%rbp), %rax
	leaq	L_.str54(%rip), %rdi
	movl	(%rax), %esi
	movq	%rax, %rcx
	addq	$4, %rcx
	movq	%rax, %rdx
	addq	$14, %rdx
	movsd	36(%rax), %xmm0
	movl	44(%rax), %r8d
	cvtss2sd	48(%rax), %xmm1
	movsd	52(%rax), %xmm2
	movq	%rdx, -8(%rbp)          ## 8-byte Spill
	movq	%rcx, %rdx
	movq	-8(%rbp), %rcx          ## 8-byte Reload
	movb	$3, %al
	callq	_printf
	movl	%eax, -12(%rbp)         ## 4-byte Spill
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_test2
	.align	4, 0x90
_test2:                                 ## @test2
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp67:
	.cfi_def_cfa_offset 16
Ltmp68:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp69:
	.cfi_def_cfa_register %rbp
	subq	$192, %rsp
	xorps	%xmm0, %xmm0
	movl	$0, -8(%rbp)
	movsd	%xmm0, -16(%rbp)
	movb	$121, -17(%rbp)
LBB13_1:                                ## =>This Inner Loop Header: Depth=1
	leaq	L_.str25(%rip), %rdi
	callq	_puts
	leaq	L_.str26(%rip), %rdi
	movl	%eax, -24(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str27(%rip), %rdi
	movl	%eax, -28(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str28(%rip), %rdi
	movl	%eax, -32(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str29(%rip), %rdi
	movl	%eax, -36(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str55(%rip), %rdi
	xorl	%ecx, %ecx
	movb	%cl, %dl
	movl	%eax, -40(%rbp)         ## 4-byte Spill
	movb	%dl, %al
	movb	%dl, -41(%rbp)          ## 1-byte Spill
	callq	_printf
	leaq	L_.str1(%rip), %rdi
	leaq	-4(%rbp), %rsi
	movb	-41(%rbp), %dl          ## 1-byte Reload
	movl	%eax, -48(%rbp)         ## 4-byte Spill
	movb	%dl, %al
	callq	_scanf
	movl	-4(%rbp), %ecx
	decl	%ecx
	movl	%ecx, %esi
	subl	$3, %ecx
	movl	%eax, -52(%rbp)         ## 4-byte Spill
	movq	%rsi, -64(%rbp)         ## 8-byte Spill
	movl	%ecx, -68(%rbp)         ## 4-byte Spill
	ja	LBB13_6
## BB#14:                               ##   in Loop: Header=BB13_1 Depth=1
	leaq	LJTI13_0(%rip), %rax
	movq	-64(%rbp), %rcx         ## 8-byte Reload
	movslq	(%rax,%rcx,4), %rdx
	addq	%rax, %rdx
	jmpq	*%rdx
LBB13_2:                                ##   in Loop: Header=BB13_1 Depth=1
	leaq	L_.str56(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str1(%rip), %rdi
	leaq	_p1(%rip), %rcx
	addq	$44, %rcx
	movq	%rcx, %rsi
	movl	%eax, -72(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	movl	_p1+44(%rip), %edx
	movl	_test2.s1(%rip), %r8d
	addl	%edx, %r8d
	movl	%r8d, _test2.s1(%rip)
	movl	_test2.s1(%rip), %edx
	movl	%edx, _p1+44(%rip)
	movsd	_test2.price(%rip), %xmm0
	mulsd	_test2.dis(%rip), %xmm0
	cvtsi2sdl	_p1+44(%rip), %xmm1
	mulsd	%xmm1, %xmm0
	movsd	%xmm0, -16(%rbp)
	movsd	-16(%rbp), %xmm0
	movsd	%xmm0, _p1+52(%rip)
	movl	_p1+56(%rip), %edx
	movq	%rsp, %rcx
	movl	%edx, 56(%rcx)
	movq	_p1+48(%rip), %rsi
	movq	%rsi, 48(%rcx)
	movq	_p1+40(%rip), %rsi
	movq	%rsi, 40(%rcx)
	movq	_p1+32(%rip), %rsi
	movq	%rsi, 32(%rcx)
	movq	_p1+24(%rip), %rsi
	movq	%rsi, 24(%rcx)
	movq	_p1+16(%rip), %rsi
	movq	%rsi, 16(%rcx)
	movq	_p1+8(%rip), %rsi
	movq	%rsi, 8(%rcx)
	movq	_p1(%rip), %rsi
	movq	%rsi, (%rcx)
	movl	%eax, -76(%rbp)         ## 4-byte Spill
	callq	_prt
	jmp	LBB13_7
LBB13_3:                                ##   in Loop: Header=BB13_1 Depth=1
	leaq	L_.str56(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str1(%rip), %rdi
	leaq	_p2(%rip), %rcx
	addq	$44, %rcx
	movq	%rcx, %rsi
	movl	%eax, -80(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	movl	_p2+44(%rip), %edx
	movl	_test2.s2(%rip), %r8d
	addl	%edx, %r8d
	movl	%r8d, _test2.s2(%rip)
	movl	_test2.s2(%rip), %edx
	movl	%edx, _p2+44(%rip)
	movsd	_test2.price+8(%rip), %xmm0
	mulsd	_test2.dis+8(%rip), %xmm0
	cvtsi2sdl	_p2+44(%rip), %xmm1
	mulsd	%xmm1, %xmm0
	movsd	%xmm0, -16(%rbp)
	movsd	-16(%rbp), %xmm0
	movsd	%xmm0, _p2+52(%rip)
	movl	_p2+56(%rip), %edx
	movq	%rsp, %rcx
	movl	%edx, 56(%rcx)
	movq	_p2+48(%rip), %rsi
	movq	%rsi, 48(%rcx)
	movq	_p2+40(%rip), %rsi
	movq	%rsi, 40(%rcx)
	movq	_p2+32(%rip), %rsi
	movq	%rsi, 32(%rcx)
	movq	_p2+24(%rip), %rsi
	movq	%rsi, 24(%rcx)
	movq	_p2+16(%rip), %rsi
	movq	%rsi, 16(%rcx)
	movq	_p2+8(%rip), %rsi
	movq	%rsi, 8(%rcx)
	movq	_p2(%rip), %rsi
	movq	%rsi, (%rcx)
	movl	%eax, -84(%rbp)         ## 4-byte Spill
	callq	_prt
	jmp	LBB13_7
LBB13_4:                                ##   in Loop: Header=BB13_1 Depth=1
	leaq	L_.str56(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str1(%rip), %rdi
	leaq	_p3(%rip), %rcx
	addq	$44, %rcx
	movq	%rcx, %rsi
	movl	%eax, -88(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	movl	_p3+44(%rip), %edx
	movl	_test2.s3(%rip), %r8d
	addl	%edx, %r8d
	movl	%r8d, _test2.s3(%rip)
	movl	_test2.s3(%rip), %edx
	movl	%edx, _p3+44(%rip)
	movsd	_test2.price+16(%rip), %xmm0
	mulsd	_test2.dis+16(%rip), %xmm0
	cvtsi2sdl	_p3+44(%rip), %xmm1
	mulsd	%xmm1, %xmm0
	movsd	%xmm0, -16(%rbp)
	movsd	-16(%rbp), %xmm0
	movsd	%xmm0, _p3+52(%rip)
	movl	_p3+56(%rip), %edx
	movq	%rsp, %rcx
	movl	%edx, 56(%rcx)
	movq	_p3+48(%rip), %rsi
	movq	%rsi, 48(%rcx)
	movq	_p3+40(%rip), %rsi
	movq	%rsi, 40(%rcx)
	movq	_p3+32(%rip), %rsi
	movq	%rsi, 32(%rcx)
	movq	_p3+24(%rip), %rsi
	movq	%rsi, 24(%rcx)
	movq	_p3+16(%rip), %rsi
	movq	%rsi, 16(%rcx)
	movq	_p3+8(%rip), %rsi
	movq	%rsi, 8(%rcx)
	movq	_p3(%rip), %rsi
	movq	%rsi, (%rcx)
	movl	%eax, -92(%rbp)         ## 4-byte Spill
	callq	_prt
	jmp	LBB13_7
LBB13_5:                                ##   in Loop: Header=BB13_1 Depth=1
	leaq	L_.str56(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str1(%rip), %rdi
	leaq	_p4(%rip), %rcx
	addq	$44, %rcx
	movq	%rcx, %rsi
	movl	%eax, -96(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	movl	_p4+44(%rip), %edx
	movl	_test2.s4(%rip), %r8d
	addl	%edx, %r8d
	movl	%r8d, _test2.s4(%rip)
	movl	_test2.s4(%rip), %edx
	movl	%edx, _p4+44(%rip)
	movsd	_test2.price+24(%rip), %xmm0
	mulsd	_test2.dis+24(%rip), %xmm0
	cvtsi2sdl	_p4+44(%rip), %xmm1
	mulsd	%xmm1, %xmm0
	movsd	%xmm0, -16(%rbp)
	movsd	-16(%rbp), %xmm0
	movsd	%xmm0, _p4+52(%rip)
	movl	_p4+56(%rip), %edx
	movq	%rsp, %rcx
	movl	%edx, 56(%rcx)
	movq	_p4+48(%rip), %rsi
	movq	%rsi, 48(%rcx)
	movq	_p4+40(%rip), %rsi
	movq	%rsi, 40(%rcx)
	movq	_p4+32(%rip), %rsi
	movq	%rsi, 32(%rcx)
	movq	_p4+24(%rip), %rsi
	movq	%rsi, 24(%rcx)
	movq	_p4+16(%rip), %rsi
	movq	%rsi, 16(%rcx)
	movq	_p4+8(%rip), %rsi
	movq	%rsi, 8(%rcx)
	movq	_p4(%rip), %rsi
	movq	%rsi, (%rcx)
	movl	%eax, -100(%rbp)        ## 4-byte Spill
	callq	_prt
	jmp	LBB13_7
LBB13_6:                                ##   in Loop: Header=BB13_1 Depth=1
	leaq	L_.str24(%rip), %rdi
	callq	_puts
	movl	%eax, -104(%rbp)        ## 4-byte Spill
LBB13_7:                                ##   in Loop: Header=BB13_1 Depth=1
	xorps	%xmm0, %xmm0
	movsd	-16(%rbp), %xmm1
	movsd	_test2.sum(%rip), %xmm2
	addsd	%xmm1, %xmm2
	movsd	%xmm2, _test2.sum(%rip)
	movsd	%xmm0, -16(%rbp)
	callq	_getchar
	leaq	L_.str41(%rip), %rdi
	movl	%eax, -108(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str14(%rip), %rdi
	leaq	-17(%rbp), %rsi
	movl	%eax, -112(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	movsbl	-17(%rbp), %ecx
	cmpl	$89, %ecx
	movl	%eax, -116(%rbp)        ## 4-byte Spill
	je	LBB13_9
## BB#8:                                ##   in Loop: Header=BB13_1 Depth=1
	movsbl	-17(%rbp), %eax
	cmpl	$121, %eax
	jne	LBB13_10
LBB13_9:                                ##   in Loop: Header=BB13_1 Depth=1
	movl	_p1+44(%rip), %eax
	addl	_p2+44(%rip), %eax
	addl	_p3+44(%rip), %eax
	addl	_p4+44(%rip), %eax
	movl	%eax, -8(%rbp)
	jmp	LBB13_11
LBB13_10:
	movl	_p1+44(%rip), %eax
	addl	_p2+44(%rip), %eax
	addl	_p3+44(%rip), %eax
	addl	_p4+44(%rip), %eax
	movl	%eax, -8(%rbp)
	jmp	LBB13_13
LBB13_11:                               ##   in Loop: Header=BB13_1 Depth=1
	jmp	LBB13_12
LBB13_12:                               ##   in Loop: Header=BB13_1 Depth=1
	movb	$1, %al
	testb	$1, %al
	jne	LBB13_1
	jmp	LBB13_13
LBB13_13:
	leaq	L_.str57(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str58(%rip), %rdi
	movl	%eax, -120(%rbp)        ## 4-byte Spill
	callq	_puts
	movl	_p1+56(%rip), %ecx
	movq	%rsp, %rdi
	movl	%ecx, 56(%rdi)
	movq	_p1+48(%rip), %rdx
	movq	%rdx, 48(%rdi)
	movq	_p1+40(%rip), %rdx
	movq	%rdx, 40(%rdi)
	movq	_p1+32(%rip), %rdx
	movq	%rdx, 32(%rdi)
	movq	_p1+24(%rip), %rdx
	movq	%rdx, 24(%rdi)
	movq	_p1+16(%rip), %rdx
	movq	%rdx, 16(%rdi)
	movq	_p1+8(%rip), %rdx
	movq	%rdx, 8(%rdi)
	movq	_p1(%rip), %rdx
	movq	%rdx, (%rdi)
	movl	%eax, -124(%rbp)        ## 4-byte Spill
	callq	_prt
	movl	_p2+56(%rip), %eax
	movq	%rsp, %rdx
	movl	%eax, 56(%rdx)
	movq	_p2+48(%rip), %rdi
	movq	%rdi, 48(%rdx)
	movq	_p2+40(%rip), %rdi
	movq	%rdi, 40(%rdx)
	movq	_p2+32(%rip), %rdi
	movq	%rdi, 32(%rdx)
	movq	_p2+24(%rip), %rdi
	movq	%rdi, 24(%rdx)
	movq	_p2+16(%rip), %rdi
	movq	%rdi, 16(%rdx)
	movq	_p2+8(%rip), %rdi
	movq	%rdi, 8(%rdx)
	movq	_p2(%rip), %rdi
	movq	%rdi, (%rdx)
	callq	_prt
	movl	_p3+56(%rip), %eax
	movq	%rsp, %rdx
	movl	%eax, 56(%rdx)
	movq	_p3+48(%rip), %rdi
	movq	%rdi, 48(%rdx)
	movq	_p3+40(%rip), %rdi
	movq	%rdi, 40(%rdx)
	movq	_p3+32(%rip), %rdi
	movq	%rdi, 32(%rdx)
	movq	_p3+24(%rip), %rdi
	movq	%rdi, 24(%rdx)
	movq	_p3+16(%rip), %rdi
	movq	%rdi, 16(%rdx)
	movq	_p3+8(%rip), %rdi
	movq	%rdi, 8(%rdx)
	movq	_p3(%rip), %rdi
	movq	%rdi, (%rdx)
	callq	_prt
	movl	_p4+56(%rip), %eax
	movq	%rsp, %rdx
	movl	%eax, 56(%rdx)
	movq	_p4+48(%rip), %rdi
	movq	%rdi, 48(%rdx)
	movq	_p4+40(%rip), %rdi
	movq	%rdi, 40(%rdx)
	movq	_p4+32(%rip), %rdi
	movq	%rdi, 32(%rdx)
	movq	_p4+24(%rip), %rdi
	movq	%rdi, 24(%rdx)
	movq	_p4+16(%rip), %rdi
	movq	%rdi, 16(%rdx)
	movq	_p4+8(%rip), %rdi
	movq	%rdi, 8(%rdx)
	movq	_p4(%rip), %rdi
	movq	%rdi, (%rdx)
	callq	_prt
	leaq	L_.str59(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str60(%rip), %rdi
	movl	-8(%rbp), %esi
	movsd	_test2.sum(%rip), %xmm0
	movl	%eax, -128(%rbp)        ## 4-byte Spill
	movb	$1, %al
	callq	_printf
	movl	%eax, -132(%rbp)        ## 4-byte Spill
	addq	$192, %rsp
	popq	%rbp
	retq
	.cfi_endproc
	.align	2, 0x90
L13_0_set_2 = LBB13_2-LJTI13_0
L13_0_set_3 = LBB13_3-LJTI13_0
L13_0_set_4 = LBB13_4-LJTI13_0
L13_0_set_5 = LBB13_5-LJTI13_0
LJTI13_0:
	.long	L13_0_set_2
	.long	L13_0_set_3
	.long	L13_0_set_4
	.long	L13_0_set_5

	.globl	_test3
	.align	4, 0x90
_test3:                                 ## @test3
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp72:
	.cfi_def_cfa_offset 16
Ltmp73:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp74:
	.cfi_def_cfa_register %rbp
	subq	$176, %rsp
	leaq	L_.str61(%rip), %rdi
	leaq	-20(%rbp), %rsi
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movb	$0, %al
	callq	_printf
	leaq	L_.str61(%rip), %rdi
	leaq	-20(%rbp), %rsi
	movl	%eax, -92(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str61(%rip), %rdi
	leaq	-20(%rbp), %rsi
	movl	%eax, -96(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str61(%rip), %rdi
	leaq	-80(%rbp), %rsi
	movl	%eax, -100(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str61(%rip), %rdi
	leaq	-80(%rbp), %rsi
	movl	%eax, -104(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	_p1(%rip), %rsi
	leaq	_p2(%rip), %rdi
	movq	%rdi, %rcx
	movabsq	$60, %rdx
	movq	%rdi, -88(%rbp)
	movq	%rsi, %rdi
	movq	%rcx, %rsi
	movl	%eax, -108(%rbp)        ## 4-byte Spill
	callq	_memcpy
	movl	_p1+56(%rip), %eax
	movq	%rsp, %rcx
	movl	%eax, 56(%rcx)
	movq	_p1+48(%rip), %rdx
	movq	%rdx, 48(%rcx)
	movq	_p1+40(%rip), %rdx
	movq	%rdx, 40(%rcx)
	movq	_p1+32(%rip), %rdx
	movq	%rdx, 32(%rcx)
	movq	_p1+24(%rip), %rdx
	movq	%rdx, 24(%rcx)
	movq	_p1+16(%rip), %rdx
	movq	%rdx, 16(%rcx)
	movq	_p1+8(%rip), %rdx
	movq	%rdx, 8(%rcx)
	movq	_p1(%rip), %rdx
	movq	%rdx, (%rcx)
	callq	_prt
	movl	_p2+56(%rip), %eax
	movq	%rsp, %rcx
	movl	%eax, 56(%rcx)
	movq	_p2+48(%rip), %rdx
	movq	%rdx, 48(%rcx)
	movq	_p2+40(%rip), %rdx
	movq	%rdx, 40(%rcx)
	movq	_p2+32(%rip), %rdx
	movq	%rdx, 32(%rcx)
	movq	_p2+24(%rip), %rdx
	movq	%rdx, 24(%rcx)
	movq	_p2+16(%rip), %rdx
	movq	%rdx, 16(%rcx)
	movq	_p2+8(%rip), %rdx
	movq	%rdx, 8(%rcx)
	movq	_p2(%rip), %rdx
	movq	%rdx, (%rcx)
	callq	_prt
	movq	___stack_chk_guard@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rcx
	cmpq	-8(%rbp), %rcx
	jne	LBB14_2
## BB#1:                                ## %SP_return
	addq	$176, %rsp
	popq	%rbp
	retq
LBB14_2:                                ## %CallStackCheckFailBlk
	callq	___stack_chk_fail
	.cfi_endproc

	.globl	_test03
	.align	4, 0x90
_test03:                                ## @test03
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp77:
	.cfi_def_cfa_offset 16
Ltmp78:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp79:
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	leaq	L_.str62(%rip), %rdi
	leaq	-16(%rbp), %rax
	movq	%rax, -24(%rbp)
	movl	$4, -16(%rbp)
	movq	-24(%rbp), %rax
	movl	(%rax), %esi
	movb	$0, %al
	callq	_printf
	leaq	L_.str63(%rip), %rsi
	movabsq	$12, %rdx
	leaq	-16(%rbp), %rdi
	movl	%eax, -28(%rbp)         ## 4-byte Spill
	callq	___strcpy_chk
	leaq	L_.str64(%rip), %rdi
	movq	-24(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, -40(%rbp)         ## 8-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str65(%rip), %rdi
	movb	$75, -16(%rbp)
	movq	-24(%rbp), %rdx
	movsbl	(%rdx), %esi
	movl	%eax, -44(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str64(%rip), %rdi
	movq	-24(%rbp), %rdx
	movq	%rdx, %rsi
	movl	%eax, -48(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	movl	%eax, -52(%rbp)         ## 4-byte Spill
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_test4
	.align	4, 0x90
_test4:                                 ## @test4
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp82:
	.cfi_def_cfa_offset 16
Ltmp83:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp84:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	leaq	L_.str61(%rip), %rdi
	leaq	-8(%rbp), %rax
	movw	$4660, -8(%rbp)         ## imm = 0x1234
	movq	%rax, %rsi
	movb	$0, %al
	callq	_printf
	leaq	L_.str65(%rip), %rdi
	movsbl	-8(%rbp), %esi
	movl	%eax, -12(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	movsbl	-8(%rbp), %esi
	cmpl	$18, %esi
	movl	%eax, -16(%rbp)         ## 4-byte Spill
	jne	LBB16_2
## BB#1:
	leaq	L_.str66(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	%eax, -20(%rbp)         ## 4-byte Spill
	jmp	LBB16_5
LBB16_2:
	movsbl	-8(%rbp), %eax
	cmpl	$52, %eax
	jne	LBB16_4
## BB#3:
	leaq	L_.str67(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	%eax, -24(%rbp)         ## 4-byte Spill
LBB16_4:
	jmp	LBB16_5
LBB16_5:
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_test_1
	.align	4, 0x90
_test_1:                                ## @test_1
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp87:
	.cfi_def_cfa_offset 16
Ltmp88:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp89:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	leaq	L_.str68(%rip), %rdi
	movl	$1, %esi
	movl	$2, %edx
	movl	$3, %ecx
	movb	$0, %al
	callq	_printf
	movl	%eax, -4(%rbp)          ## 4-byte Spill
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_test_2
	.align	4, 0x90
_test_2:                                ## @test_2
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp92:
	.cfi_def_cfa_offset 16
Ltmp93:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp94:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	leaq	L_.str69(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str1(%rip), %rdi
	leaq	-4(%rbp), %rsi
	movl	%eax, -8(%rbp)          ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	movl	$1, %ecx
	cmpl	-4(%rbp), %ecx
	movl	%eax, -12(%rbp)         ## 4-byte Spill
	jne	LBB18_2
## BB#1:
	leaq	L_.str62(%rip), %rdi
	movl	$1, %esi
	movb	$0, %al
	callq	_printf
	movl	%eax, -16(%rbp)         ## 4-byte Spill
	jmp	LBB18_9
LBB18_2:
	movl	$0, %eax
	cmpl	-4(%rbp), %eax
	jne	LBB18_4
## BB#3:
	leaq	L_.str62(%rip), %rdi
	movl	$0, %esi
	movb	$0, %al
	callq	_printf
	movl	%eax, -20(%rbp)         ## 4-byte Spill
	jmp	LBB18_8
LBB18_4:
	movl	$4294967295, %eax       ## imm = 0xFFFFFFFF
	cmpl	-4(%rbp), %eax
	jne	LBB18_6
## BB#5:
	leaq	L_.str62(%rip), %rdi
	movl	$4294967295, %esi       ## imm = 0xFFFFFFFF
	movb	$0, %al
	callq	_printf
	movl	%eax, -24(%rbp)         ## 4-byte Spill
	jmp	LBB18_7
LBB18_6:
	leaq	L_.str70(%rip), %rdi
	callq	_puts
	movl	%eax, -28(%rbp)         ## 4-byte Spill
LBB18_7:
	jmp	LBB18_8
LBB18_8:
	jmp	LBB18_9
LBB18_9:
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_aver
	.align	4, 0x90
_aver:                                  ## @aver
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp97:
	.cfi_def_cfa_offset 16
Ltmp98:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp99:
	.cfi_def_cfa_register %rbp
	movabsq	$10, %rax
	cvtsi2sdq	%rax, %xmm1
	movsd	%xmm0, -8(%rbp)
	movsd	-8(%rbp), %xmm0
	divsd	%xmm1, %xmm0
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_test_5
	.align	4, 0x90
_test_5:                                ## @test_5
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp102:
	.cfi_def_cfa_offset 16
Ltmp103:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp104:
	.cfi_def_cfa_register %rbp
	subq	$304, %rsp              ## imm = 0x130
	xorps	%xmm0, %xmm0
	leaq	l_test_5.id(%rip), %rax
	movabsq	$40, %rdx
	leaq	-144(%rbp), %rcx
	leaq	l_test_5.Name(%rip), %rsi
	movabsq	$80, %rdi
	leaq	-96(%rbp), %r8
	movq	___stack_chk_guard@GOTPCREL(%rip), %r9
	movq	(%r9), %r9
	movq	%r9, -8(%rbp)
	movq	%rdi, -232(%rbp)        ## 8-byte Spill
	movq	%r8, %rdi
	movq	-232(%rbp), %r8         ## 8-byte Reload
	movq	%rdx, -240(%rbp)        ## 8-byte Spill
	movq	%r8, %rdx
	movsd	%xmm0, -248(%rbp)       ## 8-byte Spill
	movq	%rax, -256(%rbp)        ## 8-byte Spill
	movq	%rcx, -264(%rbp)        ## 8-byte Spill
	callq	_memcpy
	movq	-264(%rbp), %rax        ## 8-byte Reload
	movq	%rax, %rdi
	movq	-256(%rbp), %rsi        ## 8-byte Reload
	movq	-240(%rbp), %rdx        ## 8-byte Reload
	callq	_memcpy
	movsd	-248(%rbp), %xmm0       ## 8-byte Reload
	movsd	%xmm0, -200(%rbp)
	movl	$0, -212(%rbp)
LBB20_1:                                ## =>This Inner Loop Header: Depth=1
	cmpl	$10, -212(%rbp)
	jge	LBB20_4
## BB#2:                                ##   in Loop: Header=BB20_1 Depth=1
	movabsq	$-1, %rdx
	movq	_students@GOTPCREL(%rip), %rax
	movslq	-212(%rbp), %rcx
	imulq	$24, %rcx, %rcx
	addq	%rcx, %rax
	movslq	-212(%rbp), %rcx
	movq	-96(%rbp,%rcx,8), %rsi
	movq	%rax, %rdi
	callq	___strcpy_chk
	leaq	L_.str80(%rip), %rdi
	movq	_students@GOTPCREL(%rip), %rcx
	movslq	-212(%rbp), %rdx
	movl	-144(%rbp,%rdx,4), %r8d
	movslq	-212(%rbp), %rdx
	imulq	$24, %rdx, %rdx
	addq	%rdx, %rcx
	movl	%r8d, 12(%rcx)
	movl	-212(%rbp), %r8d
	addl	$1, %r8d
	movl	%r8d, %esi
	movq	%rax, -272(%rbp)        ## 8-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str52(%rip), %rdi
	movq	_students@GOTPCREL(%rip), %rcx
	movslq	-212(%rbp), %rdx
	imulq	$24, %rdx, %rdx
	addq	%rdx, %rcx
	addq	$16, %rcx
	movq	%rcx, %rsi
	movl	%eax, -276(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	movq	_students@GOTPCREL(%rip), %rcx
	movslq	-212(%rbp), %rdx
	imulq	$24, %rdx, %rdx
	addq	%rdx, %rcx
	movsd	16(%rcx), %xmm0
	movsd	-200(%rbp), %xmm1
	addsd	%xmm0, %xmm1
	movsd	%xmm1, -200(%rbp)
	movl	%eax, -280(%rbp)        ## 4-byte Spill
## BB#3:                                ##   in Loop: Header=BB20_1 Depth=1
	movl	-212(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -212(%rbp)
	jmp	LBB20_1
LBB20_4:
	movsd	-200(%rbp), %xmm0
	callq	_aver
	movsd	%xmm0, -208(%rbp)
	movl	$0, -216(%rbp)
LBB20_5:                                ## =>This Inner Loop Header: Depth=1
	cmpl	$10, -216(%rbp)
	jge	LBB20_8
## BB#6:                                ##   in Loop: Header=BB20_5 Depth=1
	leaq	L_.str81(%rip), %rdi
	movq	_students@GOTPCREL(%rip), %rax
	movslq	-216(%rbp), %rcx
	imulq	$24, %rcx, %rcx
	movq	%rax, %rdx
	addq	%rcx, %rdx
	movslq	-216(%rbp), %rcx
	imulq	$24, %rcx, %rcx
	movq	%rax, %rsi
	addq	%rcx, %rsi
	movl	12(%rsi), %r8d
	movslq	-216(%rbp), %rcx
	imulq	$24, %rcx, %rcx
	addq	%rcx, %rax
	movsd	16(%rax), %xmm0
	movq	%rdx, %rsi
	movl	%r8d, %edx
	movb	$1, %al
	callq	_printf
	movl	%eax, -284(%rbp)        ## 4-byte Spill
## BB#7:                                ##   in Loop: Header=BB20_5 Depth=1
	movl	-216(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -216(%rbp)
	jmp	LBB20_5
LBB20_8:
	leaq	L_.str82(%rip), %rdi
	movsd	-208(%rbp), %xmm0
	movb	$1, %al
	callq	_printf
	leaq	L_.str83(%rip), %rdi
	movq	_students@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rdx
	movq	%rdx, -168(%rbp)
	movq	8(%rcx), %rdx
	movq	%rdx, -160(%rbp)
	movq	16(%rcx), %rcx
	movq	%rcx, -152(%rbp)
	movl	%eax, -288(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	movl	$1, -220(%rbp)
	movl	%eax, -292(%rbp)        ## 4-byte Spill
LBB20_9:                                ## =>This Inner Loop Header: Depth=1
	cmpl	$10, -220(%rbp)
	jge	LBB20_14
## BB#10:                               ##   in Loop: Header=BB20_9 Depth=1
	movq	_students@GOTPCREL(%rip), %rax
	movsd	-152(%rbp), %xmm0
	movslq	-220(%rbp), %rcx
	imulq	$24, %rcx, %rcx
	addq	%rcx, %rax
	movsd	16(%rax), %xmm1
	ucomisd	%xmm0, %xmm1
	jb	LBB20_12
## BB#11:                               ##   in Loop: Header=BB20_9 Depth=1
	leaq	L_.str81(%rip), %rdi
	leaq	-168(%rbp), %rsi
	movq	_students@GOTPCREL(%rip), %rax
	movslq	-220(%rbp), %rcx
	imulq	$24, %rcx, %rcx
	movq	%rax, %rdx
	addq	%rcx, %rdx
	movq	(%rdx), %rcx
	movq	%rcx, -192(%rbp)
	movq	8(%rdx), %rcx
	movq	%rcx, -184(%rbp)
	movq	16(%rdx), %rcx
	movq	%rcx, -176(%rbp)
	movslq	-220(%rbp), %rcx
	imulq	$24, %rcx, %rcx
	addq	%rcx, %rax
	movq	-168(%rbp), %rcx
	movq	%rcx, (%rax)
	movq	-160(%rbp), %rcx
	movq	%rcx, 8(%rax)
	movq	-152(%rbp), %rcx
	movq	%rcx, 16(%rax)
	movq	-192(%rbp), %rax
	movq	%rax, -168(%rbp)
	movq	-184(%rbp), %rax
	movq	%rax, -160(%rbp)
	movq	-176(%rbp), %rax
	movq	%rax, -152(%rbp)
	movl	-156(%rbp), %edx
	movsd	-152(%rbp), %xmm0
	movb	$1, %al
	callq	_printf
	movl	%eax, -296(%rbp)        ## 4-byte Spill
LBB20_12:                               ##   in Loop: Header=BB20_9 Depth=1
	jmp	LBB20_13
LBB20_13:                               ##   in Loop: Header=BB20_9 Depth=1
	movl	-220(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -220(%rbp)
	jmp	LBB20_9
LBB20_14:
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	cmpq	-8(%rbp), %rax
	jne	LBB20_16
## BB#15:                               ## %SP_return
	addq	$304, %rsp              ## imm = 0x130
	popq	%rbp
	retq
LBB20_16:                               ## %CallStackCheckFailBlk
	callq	___stack_chk_fail
	.cfi_endproc

	.globl	_test_6
	.align	4, 0x90
_test_6:                                ## @test_6
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp107:
	.cfi_def_cfa_offset 16
Ltmp108:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp109:
	.cfi_def_cfa_register %rbp
	subq	$96, %rsp
	leaq	L_.str84(%rip), %rdi
	leaq	-16(%rbp), %rax
	movq	%rax, -24(%rbp)
	movb	$0, %al
	callq	_printf
	leaq	L_.str1(%rip), %rdi
	movq	-24(%rbp), %rsi
	movl	%eax, -32(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	leaq	L_.str85(%rip), %rdi
	movl	%eax, -36(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str1(%rip), %rdi
	movq	-24(%rbp), %rsi
	addq	$4, %rsi
	movl	%eax, -40(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	leaq	L_.str86(%rip), %rdi
	movl	%eax, -44(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str1(%rip), %rdi
	movq	-24(%rbp), %rsi
	addq	$8, %rsi
	movl	%eax, -48(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	movq	-24(%rbp), %rsi
	cmpl	$31, 8(%rsi)
	movl	%eax, -52(%rbp)         ## 4-byte Spill
	jg	LBB21_21
## BB#1:
	movl	$400, %eax              ## imm = 0x190
	movq	-24(%rbp), %rcx
	movl	(%rcx), %edx
	movl	%eax, -56(%rbp)         ## 4-byte Spill
	movl	%edx, %eax
	cltd
	movl	-56(%rbp), %esi         ## 4-byte Reload
	idivl	%esi
	cmpl	$0, %edx
	je	LBB21_4
## BB#2:
	movl	$4, %eax
	movq	-24(%rbp), %rcx
	movl	(%rcx), %edx
	movl	%eax, -60(%rbp)         ## 4-byte Spill
	movl	%edx, %eax
	cltd
	movl	-60(%rbp), %esi         ## 4-byte Reload
	idivl	%esi
	cmpl	$0, %edx
	jne	LBB21_5
## BB#3:
	movl	$100, %eax
	movq	-24(%rbp), %rcx
	movl	(%rcx), %edx
	movl	%eax, -64(%rbp)         ## 4-byte Spill
	movl	%edx, %eax
	cltd
	movl	-64(%rbp), %esi         ## 4-byte Reload
	idivl	%esi
	cmpl	$0, %edx
	je	LBB21_5
LBB21_4:
	leaq	L_.str87(%rip), %rdi
	movl	$29, -28(%rbp)
	callq	_puts
	movl	%eax, -68(%rbp)         ## 4-byte Spill
	jmp	LBB21_6
LBB21_5:
	leaq	L_.str88(%rip), %rdi
	movl	$28, -28(%rbp)
	callq	_puts
	movl	%eax, -72(%rbp)         ## 4-byte Spill
LBB21_6:
	movq	-24(%rbp), %rax
	movl	4(%rax), %ecx
	decl	%ecx
	movl	%ecx, %eax
	subl	$11, %ecx
	movq	%rax, -80(%rbp)         ## 8-byte Spill
	movl	%ecx, -84(%rbp)         ## 4-byte Spill
	ja	LBB21_19
## BB#22:
	leaq	LJTI21_0(%rip), %rax
	movq	-80(%rbp), %rcx         ## 8-byte Reload
	movslq	(%rax,%rcx,4), %rdx
	addq	%rax, %rdx
	jmpq	*%rdx
LBB21_7:
	movq	-24(%rbp), %rax
	movl	8(%rax), %ecx
	movq	-24(%rbp), %rax
	movl	%ecx, 12(%rax)
	jmp	LBB21_20
LBB21_8:
	movq	-24(%rbp), %rax
	movl	8(%rax), %ecx
	addl	$31, %ecx
	movq	-24(%rbp), %rax
	movl	%ecx, 12(%rax)
	jmp	LBB21_20
LBB21_9:
	movq	-24(%rbp), %rax
	movl	8(%rax), %ecx
	addl	-28(%rbp), %ecx
	addl	$31, %ecx
	movq	-24(%rbp), %rax
	movl	%ecx, 12(%rax)
	jmp	LBB21_20
LBB21_10:
	movq	-24(%rbp), %rax
	movl	8(%rax), %ecx
	addl	-28(%rbp), %ecx
	addl	$62, %ecx
	movq	-24(%rbp), %rax
	movl	%ecx, 12(%rax)
	jmp	LBB21_20
LBB21_11:
	movq	-24(%rbp), %rax
	movl	8(%rax), %ecx
	addl	-28(%rbp), %ecx
	addl	$62, %ecx
	addl	$30, %ecx
	movq	-24(%rbp), %rax
	movl	%ecx, 12(%rax)
	jmp	LBB21_20
LBB21_12:
	movq	-24(%rbp), %rax
	movl	8(%rax), %ecx
	addl	-28(%rbp), %ecx
	addl	$93, %ecx
	addl	$30, %ecx
	movq	-24(%rbp), %rax
	movl	%ecx, 12(%rax)
	jmp	LBB21_20
LBB21_13:
	movq	-24(%rbp), %rax
	movl	8(%rax), %ecx
	addl	-28(%rbp), %ecx
	addl	$93, %ecx
	addl	$60, %ecx
	movq	-24(%rbp), %rax
	movl	%ecx, 12(%rax)
	jmp	LBB21_20
LBB21_14:
	movq	-24(%rbp), %rax
	movl	8(%rax), %ecx
	addl	-28(%rbp), %ecx
	addl	$124, %ecx
	addl	$60, %ecx
	movq	-24(%rbp), %rax
	movl	%ecx, 12(%rax)
	jmp	LBB21_20
LBB21_15:
	movq	-24(%rbp), %rax
	movl	8(%rax), %ecx
	addl	-28(%rbp), %ecx
	addl	$155, %ecx
	addl	$60, %ecx
	movq	-24(%rbp), %rax
	movl	%ecx, 12(%rax)
	jmp	LBB21_20
LBB21_16:
	movq	-24(%rbp), %rax
	movl	8(%rax), %ecx
	addl	-28(%rbp), %ecx
	addl	$155, %ecx
	addl	$90, %ecx
	movq	-24(%rbp), %rax
	movl	%ecx, 12(%rax)
	jmp	LBB21_20
LBB21_17:
	movq	-24(%rbp), %rax
	movl	8(%rax), %ecx
	addl	-28(%rbp), %ecx
	addl	$186, %ecx
	addl	$90, %ecx
	movq	-24(%rbp), %rax
	movl	%ecx, 12(%rax)
	jmp	LBB21_20
LBB21_18:
	movq	-24(%rbp), %rax
	movl	8(%rax), %ecx
	addl	-28(%rbp), %ecx
	addl	$186, %ecx
	addl	$120, %ecx
	movq	-24(%rbp), %rax
	movl	%ecx, 12(%rax)
	jmp	LBB21_20
LBB21_19:
	leaq	L_.str89(%rip), %rdi
	callq	_puts
	movl	%eax, -88(%rbp)         ## 4-byte Spill
LBB21_20:
	jmp	LBB21_21
LBB21_21:
	leaq	L_.str90(%rip), %rdi
	movq	-24(%rbp), %rax
	movl	12(%rax), %esi
	movb	$0, %al
	callq	_printf
	movl	%eax, -92(%rbp)         ## 4-byte Spill
	addq	$96, %rsp
	popq	%rbp
	retq
	.cfi_endproc
	.align	2, 0x90
L21_0_set_7 = LBB21_7-LJTI21_0
L21_0_set_8 = LBB21_8-LJTI21_0
L21_0_set_9 = LBB21_9-LJTI21_0
L21_0_set_10 = LBB21_10-LJTI21_0
L21_0_set_11 = LBB21_11-LJTI21_0
L21_0_set_12 = LBB21_12-LJTI21_0
L21_0_set_13 = LBB21_13-LJTI21_0
L21_0_set_14 = LBB21_14-LJTI21_0
L21_0_set_15 = LBB21_15-LJTI21_0
L21_0_set_16 = LBB21_16-LJTI21_0
L21_0_set_17 = LBB21_17-LJTI21_0
L21_0_set_18 = LBB21_18-LJTI21_0
LJTI21_0:
	.long	L21_0_set_7
	.long	L21_0_set_8
	.long	L21_0_set_9
	.long	L21_0_set_10
	.long	L21_0_set_11
	.long	L21_0_set_12
	.long	L21_0_set_13
	.long	L21_0_set_14
	.long	L21_0_set_15
	.long	L21_0_set_16
	.long	L21_0_set_17
	.long	L21_0_set_18

	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp112:
	.cfi_def_cfa_offset 16
Ltmp113:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp114:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	movl	%edi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movb	$0, %al
	callq	_fruits
	movl	$0, %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"\350\257\267\350\276\223\345\205\245\344\275\240\351\200\211\346\213\251\347\232\204\345\221\250\346\234\237\346\227\266\351\227\264(1~7):"

L_.str1:                                ## @.str1
	.asciz	"%d"

L_.str2:                                ## @.str2
	.asciz	"\345\207\272\345\217\221"

L_.str3:                                ## @.str3
	.asciz	"\346\210\230\351\230\237"

L_.str4:                                ## @.str4
	.asciz	"\351\223\266\346\262\263"

L_.str5:                                ## @.str5
	.asciz	"\350\266\205\344\272\272"

L_.str6:                                ## @.str6
	.asciz	"\347\201\253\347\204\260"

L_.str7:                                ## @.str7
	.asciz	"\350\211\276\345\205\213\346\226\257"

L_.str8:                                ## @.str8
	.asciz	"\346\224\276\345\201\207"

L_.str9:                                ## @.str9
	.asciz	"\350\276\223\345\205\245\351\224\231\350\257\257"

L_.str10:                               ## @.str10
	.asciz	"\350\257\267\350\276\223\345\205\245\344\270\244\344\270\252\346\225\260\346\215\256\357\274\232\n"

L_.str11:                               ## @.str11
	.asciz	"number1:"

L_.str12:                               ## @.str12
	.asciz	"number2:"

L_.str13:                               ## @.str13
	.asciz	"\350\257\267\350\276\223\345\205\245\344\270\244\344\270\252\346\225\260\346\215\256\347\232\204\350\277\220\347\256\227\347\254\246\357\274\210+ - * / %%\357\274\211:"

L_.str14:                               ## @.str14
	.asciz	"%c"

	.comm	_fpointer,8,3           ## @fpointer
L_.str15:                               ## @.str15
	.asciz	"\350\277\220\347\256\227\346\223\215\344\275\234\347\254\246\350\276\223\345\205\245\346\227\240\346\225\210\n"

L_.str16:                               ## @.str16
	.asciz	"%d%c%d\350\277\220\347\256\227\347\273\223\346\236\234\344\270\272:%d\n"

L_.str17:                               ## @.str17
	.asciz	"iOS"

L_.str18:                               ## @.str18
	.asciz	"Androud"

L_.str19:                               ## @.str19
	.asciz	"Whone"

L_.str20:                               ## @.str20
	.asciz	"Other"

L_.str21:                               ## @.str21
	.asciz	"\350\257\267\350\276\223\345\205\245\345\223\201\347\211\214\344\273\243\347\240\201\357\274\232"

L_.str22:                               ## @.str22
	.asciz	"\350\257\267\350\276\223\345\205\245\344\270\252\346\225\260\357\274\232"

L_.str23:                               ## @.str23
	.asciz	"\346\211\213\346\234\272\347\263\273\347\273\237\357\274\232%s\n%d\351\203\250\n\345\215\225\344\273\267%d\n\346\200\273\344\273\267\344\270\272%.2f\n"

L_.str24:                               ## @.str24
	.asciz	"\350\276\223\345\205\245\346\234\211\350\257\257"

	.section	__TEXT,__const
	.align	4                       ## @test1_1.price
_test1_1.price:
	.quad	4666111844002299904     ## double 8.888000e+03
	.quad	4665517008211673088     ## double 7.999000e+03
	.quad	4658569194235756544     ## double 2.888000e+03
	.quad	4656506510422048768     ## double 1.999000e+03

	.align	4                       ## @test1_1.discount
_test1_1.discount:
	.quad	4606281698874543309     ## double 9.000000e-01
	.quad	4605380978949069210     ## double 8.000000e-01
	.quad	4604930618986332160     ## double 7.500000e-01
	.quad	4602678819172646912     ## double 5.000000e-01

.zerofill __DATA,__bss,_test1_1.sumPrice,8,3 ## @test1_1.sumPrice
	.section	__DATA,__data
	.align	2                       ## @test1_1.count
_test1_1.count:
	.long	1                       ## 0x1

	.section	__TEXT,__cstring,cstring_literals
L_.str25:                               ## @.str25
	.asciz	"\346\211\213\346\234\272\345\223\201\347\211\214\345\217\267\347\240\201\345\246\202\344\270\213"

L_.str26:                               ## @.str26
	.asciz	"1\345\217\267\357\274\232\350\213\271\346\236\234\346\211\213\346\234\272(iOS)"

L_.str27:                               ## @.str27
	.asciz	"2\345\217\267\357\274\232\344\270\211\346\230\237\346\211\213\346\234\272(Androud)"

L_.str28:                               ## @.str28
	.asciz	"3\345\217\267\357\274\232\350\257\272\345\237\272\344\272\232\346\211\213\346\234\272(Whone)"

L_.str29:                               ## @.str29
	.asciz	"4\345\217\267\357\274\232\347\231\276\345\272\246\344\272\221\346\211\213\346\234\272(Other)"

L_.str30:                               ## @.str30
	.asciz	"\350\257\267\351\200\211\346\213\251\345\217\267\347\240\201\357\274\232"

L_.str31:                               ## @.str31
	.asciz	"\346\202\250\350\246\201\344\271\260\345\207\240\351\203\250\357\274\232"

L_.str32:                               ## @.str32
	.asciz	"******************\350\264\255\344\271\260\345\225\206\345\223\201%d\344\277\241\346\201\257\357\274\232******************\n"

L_.str33:                               ## @.str33
	.asciz	"\346\211\213\346\234\272\345\223\201\347\211\214\t\346\211\213\346\234\272\347\263\273\347\273\237\t\346\225\260\351\207\217\t\345\215\225\344\273\267\t\t\346\212\230\346\211\243\t\t\346\200\273\344\273\267\n"

L_.str34:                               ## @.str34
	.asciz	"\350\213\271\346\236\234\346\211\213\346\234\272\tiOS\t\t%2d\t%5.2f\t%5.2f\t%.2f\n"

L_.str35:                               ## @.str35
	.asciz	"\344\270\211\346\230\237\346\211\213\346\234\272 Android %2d %5.2f %5.2f %.2f\n"

L_.str36:                               ## @.str36
	.asciz	"\350\257\272\345\237\272\344\272\232\346\211\213\346\234\272 WPhone %2d %5.2f %5.2f %.2f\n"

L_.str37:                               ## @.str37
	.asciz	"\347\231\276\345\272\246\344\272\221\346\211\213\346\234\272 Other %2d %5.2f %5.2f %.2f"

L_.str38:                               ## @.str38
	.asciz	"\345\257\271\344\270\215\350\265\267\357\274\214\350\276\223\345\205\245\344\277\241\346\201\257\351\224\231\350\257\257\357\274\214\346\255\244\345\225\206\345\223\201\344\270\215\345\255\230\345\234\250\357\274\201\n"

L_.str39:                               ## @.str39
	.asciz	"************************************\n"

L_.str40:                               ## @.str40
	.asciz	"\350\264\255\344\271\260\345\225\206\345\223\201\346\200\273\344\273\267\344\270\272\357\274\232%.2f\n"

L_.str41:                               ## @.str41
	.asciz	"\346\230\257\345\220\246\347\273\247\347\273\255\350\264\255\344\271\260\357\274\237(y\346\210\226\346\214\211\344\273\273\346\204\217\351\224\256\347\273\223\346\235\237):"

L_.str42:                               ## @.str42
	.asciz	"ID:%ld\tNAME:%s\tSCORE:%.2lf\n"

	.section	__TEXT,__literal8,8byte_literals
	.align	2                       ## @test02.f1
L_test02.f1:
	.long	1                       ## 0x1
	.long	2                       ## 0x2

	.section	__TEXT,__cstring,cstring_literals
L_.str43:                               ## @.str43
	.asciz	"%d/%d\n"

	.section	__TEXT,__const
	.align	2                       ## @test02.s1
l_test02.s1:
	.quad	1001                    ## 0x3e9
	.asciz	"sanyuan\000\000"
	.space	2
	.quad	4636730254480218522     ## double 99.900000000000005

	.section	__TEXT,__cstring,cstring_literals
L_.str44:                               ## @.str44
	.asciz	"\345\255\246\347\224\2371\344\277\241\346\201\257\357\274\232"

L_.str45:                               ## @.str45
	.asciz	"kuuga"

L_.str46:                               ## @.str46
	.asciz	"\345\255\246\347\224\2372\344\277\241\346\201\257\357\274\232"

L_.str47:                               ## @.str47
	.asciz	"id:"

L_.str48:                               ## @.str48
	.asciz	"%ld"

L_.str49:                               ## @.str49
	.asciz	"name:"

L_.str50:                               ## @.str50
	.asciz	"%s"

L_.str51:                               ## @.str51
	.asciz	"score:"

L_.str52:                               ## @.str52
	.asciz	"%lf"

L_.str53:                               ## @.str53
	.asciz	"\345\255\246\347\224\2373\344\277\241\346\201\257\357\274\232"

	.section	__DATA,__data
	.globl	_p1                     ## @p1
	.align	3
_p1:
	.long	1                       ## 0x1
	.asciz	"iOS\000\000\000\000\000\000"
	.asciz	"\350\213\271\346\236\234\346\211\213\346\234\272\000\000\000\000\000\000\000"
	.space	2
	.quad	4666111844002299904     ## double 8888
	.long	0                       ## 0x0
	.long	1174010266              ## float 7999.20019
	.quad	0                       ## double 0

	.globl	_p2                     ## @p2
	.align	3
_p2:
	.long	2                       ## 0x2
	.asciz	"Andourd\000\000"
	.asciz	"\344\270\211\346\230\237\346\211\213\346\234\272\000\000\000\000\000\000\000"
	.space	2
	.quad	4665517008211673088     ## double 7999
	.long	0                       ## 0x0
	.long	1170733466              ## float 6399.2002
	.quad	0                       ## double 0

	.globl	_p3                     ## @p3
	.align	3
_p3:
	.long	3                       ## 0x3
	.asciz	"Whone\000\000\000\000"
	.asciz	"\350\257\272\345\237\272\344\272\232\346\211\213\346\234\272\000\000\000\000"
	.space	2
	.quad	4658569194235756544     ## double 2888
	.long	0                       ## 0x0
	.long	1158111232              ## float 2166
	.quad	0                       ## double 0

	.globl	_p4                     ## @p4
	.align	3
_p4:
	.long	4                       ## 0x4
	.asciz	"Other\000\000\000\000"
	.asciz	"\347\231\276\345\272\246\344\272\221\346\211\213\346\234\272\000\000\000\000"
	.space	2
	.quad	4656506510422048768     ## double 1999
	.long	0                       ## 0x0
	.long	1148837888              ## float 999.5
	.quad	0                       ## double 0

	.section	__TEXT,__cstring,cstring_literals
L_.str54:                               ## @.str54
	.asciz	"%d\t%s\t%s\t%.2lf\t%d\t%.2f\t%.2lf\n"

.zerofill __DATA,__bss,_test2.sum,8,3   ## @test2.sum
	.section	__TEXT,__const
	.align	4                       ## @test2.price
_test2.price:
	.quad	4666111844002299904     ## double 8.888000e+03
	.quad	4665517008211673088     ## double 7.999000e+03
	.quad	4658569194235756544     ## double 2.888000e+03
	.quad	4656506510422048768     ## double 1.999000e+03

	.align	4                       ## @test2.dis
_test2.dis:
	.quad	4606281698874543309     ## double 9.000000e-01
	.quad	4605380978949069210     ## double 8.000000e-01
	.quad	4604930618986332160     ## double 7.500000e-01
	.quad	4602678819172646912     ## double 5.000000e-01

	.section	__TEXT,__cstring,cstring_literals
L_.str55:                               ## @.str55
	.asciz	"\350\257\267\350\276\223\345\205\245\345\225\206\345\223\201\347\274\226\345\217\267\357\274\232"

L_.str56:                               ## @.str56
	.asciz	"\350\257\267\350\276\223\345\205\245\345\225\206\345\223\201\346\225\260\351\207\217\357\274\232"

.zerofill __DATA,__bss,_test2.s1,4,2    ## @test2.s1
.zerofill __DATA,__bss,_test2.s2,4,2    ## @test2.s2
.zerofill __DATA,__bss,_test2.s3,4,2    ## @test2.s3
.zerofill __DATA,__bss,_test2.s4,4,2    ## @test2.s4
L_.str57:                               ## @.str57
	.asciz	"******************\350\264\255\344\271\260\345\225\206\345\223\201\344\277\241\346\201\257\357\274\232******************\n"

L_.str58:                               ## @.str58
	.asciz	"\346\211\213\346\234\272\347\274\226\345\217\267\t\346\211\213\346\234\272\347\263\273\347\273\237\t\346\211\213\346\234\272\345\223\201\347\211\214\t\345\215\225\344\273\267\t\346\225\260\351\207\217\t\t\346\212\230\346\211\243\t\t\346\200\273\344\273\267"

L_.str59:                               ## @.str59
	.asciz	"*************************************************\n"

L_.str60:                               ## @.str60
	.asciz	"\345\205\261\350\264\255\344\271\260%d\351\203\250\346\211\213\346\234\272\n\350\264\255\344\271\260\345\225\206\345\223\201\346\200\273\344\273\267\344\270\272\357\274\232%.2f\n"

L_.str61:                               ## @.str61
	.asciz	"%p\n"

L_.str62:                               ## @.str62
	.asciz	"%d\n"

L_.str63:                               ## @.str63
	.asciz	"kai!jjjq"

L_.str64:                               ## @.str64
	.asciz	"%s\n"

L_.str65:                               ## @.str65
	.asciz	"%c\n"

L_.str66:                               ## @.str66
	.asciz	"\345\244\247\347\253\257\346\234\272\n"

L_.str67:                               ## @.str67
	.asciz	"\345\260\217\347\253\257\346\234\272\n"

L_.str68:                               ## @.str68
	.asciz	"%d %d %d\n"

L_.str69:                               ## @.str69
	.asciz	"\350\257\267\350\276\223\345\205\245\344\270\200\344\270\252\346\225\264\345\236\213\346\225\260\346\215\256\357\274\232"

L_.str70:                               ## @.str70
	.asciz	"\345\207\272\351\224\231"

L_.str71:                               ## @.str71
	.asciz	"agito"

L_.str72:                               ## @.str72
	.asciz	"ruki"

L_.str73:                               ## @.str73
	.asciz	"faiz"

L_.str74:                               ## @.str74
	.asciz	"blade"

L_.str75:                               ## @.str75
	.asciz	"hibiki"

L_.str76:                               ## @.str76
	.asciz	"kabuto"

L_.str77:                               ## @.str77
	.asciz	"den_o"

L_.str78:                               ## @.str78
	.asciz	"kiva"

L_.str79:                               ## @.str79
	.asciz	"decade"

	.section	__DATA,__const
	.align	4                       ## @test_5.Name
l_test_5.Name:
	.quad	L_.str45
	.quad	L_.str71
	.quad	L_.str72
	.quad	L_.str73
	.quad	L_.str74
	.quad	L_.str75
	.quad	L_.str76
	.quad	L_.str77
	.quad	L_.str78
	.quad	L_.str79

	.section	__TEXT,__const
	.align	4                       ## @test_5.id
l_test_5.id:
	.long	2001                    ## 0x7d1
	.long	2002                    ## 0x7d2
	.long	2003                    ## 0x7d3
	.long	2004                    ## 0x7d4
	.long	2005                    ## 0x7d5
	.long	2006                    ## 0x7d6
	.long	2007                    ## 0x7d7
	.long	2008                    ## 0x7d8
	.long	2009                    ## 0x7d9
	.long	2010                    ## 0x7da

	.comm	_students,240,4         ## @students
	.section	__TEXT,__cstring,cstring_literals
L_.str80:                               ## @.str80
	.asciz	"\347\254\254%d\344\270\252\345\255\246\347\224\237\347\232\204\346\210\220\347\273\251\357\274\232"

L_.str81:                               ## @.str81
	.asciz	"%s\t%d\t%lf\n"

L_.str82:                               ## @.str82
	.asciz	"average = %lf\n"

L_.str83:                               ## @.str83
	.asciz	"NO.1:\n"

L_.str84:                               ## @.str84
	.asciz	"\350\257\267\350\276\223\345\205\245\345\271\264\344\273\275\357\274\232"

L_.str85:                               ## @.str85
	.asciz	"\350\257\267\350\276\223\345\205\245\346\234\210\344\273\275\357\274\232"

L_.str86:                               ## @.str86
	.asciz	"\350\257\267\350\276\223\345\205\245\345\244\251\346\225\260\357\274\232"

L_.str87:                               ## @.str87
	.asciz	"\351\227\260\345\271\264"

L_.str88:                               ## @.str88
	.asciz	"\345\271\263\345\271\264"

L_.str89:                               ## @.str89
	.asciz	"\351\224\231\350\257\257\357\274\201"

L_.str90:                               ## @.str90
	.asciz	"\344\273\212\345\244\251\346\230\257\347\254\254%d\345\244\251\n"


.subsections_via_symbols
