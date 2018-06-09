	.section	__TEXT,__text,regular,pure_instructions
	.globl	_create
	.align	4, 0x90
_create:                                ## @create
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
	pushq	%r14
	pushq	%rbx
	subq	$48, %rsp
Ltmp6:
	.cfi_offset %rbx, -32
Ltmp7:
	.cfi_offset %r14, -24
	movl	%edi, -20(%rbp)
	movl	$0, -24(%rbp)
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	movl	-24(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jge	LBB0_4
## BB#2:                                ##   in Loop: Header=BB0_1 Depth=1
	leaq	L_.str(%rip), %rdi
	movl	-24(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %esi
	movb	$0, %al
	callq	_printf
	leaq	L_.str1(%rip), %rdi
	movq	_students@GOTPCREL(%rip), %rcx
	movslq	-24(%rbp), %rdx
	imulq	$48, %rdx, %rdx
	movq	%rcx, %r8
	addq	%rdx, %r8
	movslq	-24(%rbp), %rdx
	imulq	$48, %rdx, %rdx
	movq	%rcx, %r9
	addq	%rdx, %r9
	addq	$8, %r9
	movslq	-24(%rbp), %rdx
	imulq	$48, %rdx, %rdx
	movq	%rcx, %r10
	addq	%rdx, %r10
	addq	$20, %r10
	movslq	-24(%rbp), %rdx
	imulq	$48, %rdx, %rdx
	movq	%rcx, %r11
	addq	%rdx, %r11
	addq	$24, %r11
	movslq	-24(%rbp), %rdx
	imulq	$48, %rdx, %rdx
	movq	%rcx, %rbx
	addq	%rdx, %rbx
	addq	$28, %rbx
	movslq	-24(%rbp), %rdx
	imulq	$48, %rdx, %rdx
	movq	%rcx, %r14
	addq	%rdx, %r14
	addq	$32, %r14
	movslq	-24(%rbp), %rdx
	imulq	$48, %rdx, %rdx
	addq	%rdx, %rcx
	addq	$36, %rcx
	movq	%r8, %rsi
	movq	%r9, %rdx
	movq	%rcx, -32(%rbp)         ## 8-byte Spill
	movq	%r10, %rcx
	movq	%r11, %r8
	movq	%rbx, %r9
	movq	%r14, (%rsp)
	movq	-32(%rbp), %r10         ## 8-byte Reload
	movq	%r10, 8(%rsp)
	movl	%eax, -36(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	movq	_students@GOTPCREL(%rip), %rcx
	movslq	-24(%rbp), %rdx
	imulq	$48, %rdx, %rdx
	movq	%rcx, %rsi
	addq	%rdx, %rsi
	movss	24(%rsi), %xmm0
	movslq	-24(%rbp), %rdx
	imulq	$48, %rdx, %rdx
	movq	%rcx, %rsi
	addq	%rdx, %rsi
	addss	28(%rsi), %xmm0
	movslq	-24(%rbp), %rdx
	imulq	$48, %rdx, %rdx
	movq	%rcx, %rsi
	addq	%rdx, %rsi
	addss	32(%rsi), %xmm0
	movslq	-24(%rbp), %rdx
	imulq	$48, %rdx, %rdx
	movq	%rcx, %rsi
	addq	%rdx, %rsi
	addss	36(%rsi), %xmm0
	movslq	-24(%rbp), %rdx
	imulq	$48, %rdx, %rdx
	addq	%rdx, %rcx
	movss	%xmm0, 40(%rcx)
	movl	%eax, -40(%rbp)         ## 4-byte Spill
## BB#3:                                ##   in Loop: Header=BB0_1 Depth=1
	movl	-24(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -24(%rbp)
	jmp	LBB0_1
LBB0_4:
	addq	$48, %rsp
	popq	%rbx
	popq	%r14
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_save
	.align	4, 0x90
_save:                                  ## @save
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp10:
	.cfi_def_cfa_offset 16
Ltmp11:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp12:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	leaq	L_.str2(%rip), %rdi
	leaq	L_.str3(%rip), %rsi
	movq	$0, -8(%rbp)
	callq	_fopen
	leaq	L_.str4(%rip), %rdi
	movq	%rax, -8(%rbp)
	callq	_puts
	cmpq	$0, -8(%rbp)
	movl	%eax, -20(%rbp)         ## 4-byte Spill
	je	LBB1_6
## BB#1:
	leaq	L_.str5(%rip), %rsi
	leaq	L_.str6(%rip), %rdx
	movq	-8(%rbp), %rdi
	movb	$0, %al
	callq	_fprintf
	movl	$0, -12(%rbp)
	movl	%eax, -24(%rbp)         ## 4-byte Spill
LBB1_2:                                 ## =>This Inner Loop Header: Depth=1
	cmpl	$5, -12(%rbp)
	jge	LBB1_5
## BB#3:                                ##   in Loop: Header=BB1_2 Depth=1
	leaq	L_.str7(%rip), %rsi
	movq	_students@GOTPCREL(%rip), %rax
	movq	-8(%rbp), %rdi
	movslq	-12(%rbp), %rcx
	imulq	$48, %rcx, %rcx
	movq	%rax, %rdx
	addq	%rcx, %rdx
	movq	(%rdx), %rdx
	movslq	-12(%rbp), %rcx
	imulq	$48, %rcx, %rcx
	movq	%rax, %r8
	addq	%rcx, %r8
	addq	$8, %r8
	movslq	-12(%rbp), %rcx
	imulq	$48, %rcx, %rcx
	movq	%rax, %r9
	addq	%rcx, %r9
	movl	20(%r9), %r10d
	movslq	-12(%rbp), %rcx
	imulq	$48, %rcx, %rcx
	movq	%rax, %r9
	addq	%rcx, %r9
	cvtss2sd	24(%r9), %xmm0
	movslq	-12(%rbp), %rcx
	imulq	$48, %rcx, %rcx
	movq	%rax, %r9
	addq	%rcx, %r9
	cvtss2sd	28(%r9), %xmm1
	movslq	-12(%rbp), %rcx
	imulq	$48, %rcx, %rcx
	movq	%rax, %r9
	addq	%rcx, %r9
	cvtss2sd	32(%r9), %xmm2
	movslq	-12(%rbp), %rcx
	imulq	$48, %rcx, %rcx
	movq	%rax, %r9
	addq	%rcx, %r9
	cvtss2sd	36(%r9), %xmm3
	movslq	-12(%rbp), %rcx
	imulq	$48, %rcx, %rcx
	addq	%rcx, %rax
	cvtss2sd	40(%rax), %xmm4
	movq	%r8, %rcx
	movl	%r10d, %r8d
	movb	$5, %al
	callq	_fprintf
	movl	%eax, -28(%rbp)         ## 4-byte Spill
## BB#4:                                ##   in Loop: Header=BB1_2 Depth=1
	movl	-12(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -12(%rbp)
	jmp	LBB1_2
LBB1_5:
	jmp	LBB1_6
LBB1_6:
	movq	-8(%rbp), %rdi
	callq	_fclose
	movl	$0, %ecx
	movl	%eax, -16(%rbp)
	cmpl	-16(%rbp), %ecx
	jne	LBB1_8
## BB#7:
	leaq	L_.str8(%rip), %rdi
	callq	_puts
	movl	%eax, -32(%rbp)         ## 4-byte Spill
LBB1_8:
	movq	$0, -8(%rbp)
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_load
	.align	4, 0x90
_load:                                  ## @load
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp16:
	.cfi_def_cfa_offset 16
Ltmp17:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp18:
	.cfi_def_cfa_register %rbp
	pushq	%rbx
	subq	$104, %rsp
Ltmp19:
	.cfi_offset %rbx, -24
	leaq	L_.str2(%rip), %rdi
	leaq	L_.str9(%rip), %rsi
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	$0, -40(%rbp)
	callq	_fopen
	leaq	L_.str10(%rip), %rdi
	movq	%rax, -40(%rbp)
	callq	_puts
	cmpq	$0, -40(%rbp)
	movl	%eax, -60(%rbp)         ## 4-byte Spill
	je	LBB2_16
## BB#1:
	movl	$0, -44(%rbp)
LBB2_2:                                 ## =>This Inner Loop Header: Depth=1
	cmpl	$8, -44(%rbp)
	jge	LBB2_7
## BB#3:                                ##   in Loop: Header=BB2_2 Depth=1
	leaq	L_.str11(%rip), %rsi
	leaq	-31(%rbp), %rdx
	movq	-40(%rbp), %rdi
	movb	$0, %al
	callq	_fscanf
	cmpl	$-1, %eax
	je	LBB2_5
## BB#4:                                ##   in Loop: Header=BB2_2 Depth=1
	leaq	L_.str12(%rip), %rdi
	leaq	-31(%rbp), %rsi
	movb	$0, %al
	callq	_printf
	movl	%eax, -64(%rbp)         ## 4-byte Spill
LBB2_5:                                 ##   in Loop: Header=BB2_2 Depth=1
	jmp	LBB2_6
LBB2_6:                                 ##   in Loop: Header=BB2_2 Depth=1
	movl	-44(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -44(%rbp)
	jmp	LBB2_2
LBB2_7:
	leaq	L_.str13(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	$0, -48(%rbp)
	movl	%eax, -68(%rbp)         ## 4-byte Spill
LBB2_8:                                 ## =>This Inner Loop Header: Depth=1
	cmpl	$5, -48(%rbp)
	jge	LBB2_11
## BB#9:                                ##   in Loop: Header=BB2_8 Depth=1
	leaq	L_.str1(%rip), %rsi
	movq	_student@GOTPCREL(%rip), %rax
	movq	-40(%rbp), %rdi
	movslq	-48(%rbp), %rcx
	imulq	$48, %rcx, %rcx
	movq	%rax, %rdx
	addq	%rcx, %rdx
	movslq	-48(%rbp), %rcx
	imulq	$48, %rcx, %rcx
	movq	%rax, %r8
	addq	%rcx, %r8
	addq	$8, %r8
	movslq	-48(%rbp), %rcx
	imulq	$48, %rcx, %rcx
	movq	%rax, %r9
	addq	%rcx, %r9
	addq	$20, %r9
	movslq	-48(%rbp), %rcx
	imulq	$48, %rcx, %rcx
	movq	%rax, %r10
	addq	%rcx, %r10
	addq	$24, %r10
	movslq	-48(%rbp), %rcx
	imulq	$48, %rcx, %rcx
	movq	%rax, %r11
	addq	%rcx, %r11
	addq	$28, %r11
	movslq	-48(%rbp), %rcx
	imulq	$48, %rcx, %rcx
	movq	%rax, %rbx
	addq	%rcx, %rbx
	addq	$32, %rbx
	movslq	-48(%rbp), %rcx
	imulq	$48, %rcx, %rcx
	addq	%rcx, %rax
	addq	$36, %rax
	movq	%r8, %rcx
	movq	%r9, %r8
	movq	%r10, %r9
	movq	%r11, (%rsp)
	movq	%rbx, 8(%rsp)
	movq	%rax, 16(%rsp)
	movb	$0, %al
	callq	_fscanf
	leaq	L_.str14(%rip), %rsi
	movq	_students@GOTPCREL(%rip), %rcx
	movq	_student@GOTPCREL(%rip), %rdx
	movslq	-48(%rbp), %rdi
	imulq	$48, %rdi, %rdi
	movq	%rdx, %r8
	addq	%rdi, %r8
	movss	24(%r8), %xmm0
	movslq	-48(%rbp), %rdi
	imulq	$48, %rdi, %rdi
	movq	%rdx, %r8
	addq	%rdi, %r8
	addss	28(%r8), %xmm0
	movslq	-48(%rbp), %rdi
	imulq	$48, %rdi, %rdi
	movq	%rdx, %r8
	addq	%rdi, %r8
	addss	32(%r8), %xmm0
	movslq	-48(%rbp), %rdi
	imulq	$48, %rdi, %rdi
	movq	%rdx, %r8
	addq	%rdi, %r8
	addss	36(%r8), %xmm0
	movslq	-48(%rbp), %rdi
	imulq	$48, %rdi, %rdi
	addq	%rdi, %rdx
	movss	%xmm0, 40(%rdx)
	movq	-40(%rbp), %rdi
	movslq	-48(%rbp), %rdx
	imulq	$48, %rdx, %rdx
	addq	%rdx, %rcx
	addq	$40, %rcx
	movq	%rcx, %rdx
	movl	%eax, -72(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_fscanf
	movl	%eax, -76(%rbp)         ## 4-byte Spill
## BB#10:                               ##   in Loop: Header=BB2_8 Depth=1
	movl	-48(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -48(%rbp)
	jmp	LBB2_8
LBB2_11:
	movl	$0, -52(%rbp)
LBB2_12:                                ## =>This Inner Loop Header: Depth=1
	cmpl	$5, -52(%rbp)
	jge	LBB2_15
## BB#13:                               ##   in Loop: Header=BB2_12 Depth=1
	leaq	L_.str7(%rip), %rdi
	movq	_student@GOTPCREL(%rip), %rax
	movslq	-52(%rbp), %rcx
	imulq	$48, %rcx, %rcx
	movq	%rax, %rdx
	addq	%rcx, %rdx
	movq	(%rdx), %rsi
	movslq	-52(%rbp), %rcx
	imulq	$48, %rcx, %rcx
	movq	%rax, %rdx
	addq	%rcx, %rdx
	addq	$8, %rdx
	movslq	-52(%rbp), %rcx
	imulq	$48, %rcx, %rcx
	movq	%rax, %r8
	addq	%rcx, %r8
	movl	20(%r8), %ecx
	movslq	-52(%rbp), %r8
	imulq	$48, %r8, %r8
	movq	%rax, %r9
	addq	%r8, %r9
	cvtss2sd	24(%r9), %xmm0
	movslq	-52(%rbp), %r8
	imulq	$48, %r8, %r8
	movq	%rax, %r9
	addq	%r8, %r9
	cvtss2sd	28(%r9), %xmm1
	movslq	-52(%rbp), %r8
	imulq	$48, %r8, %r8
	movq	%rax, %r9
	addq	%r8, %r9
	cvtss2sd	32(%r9), %xmm2
	movslq	-52(%rbp), %r8
	imulq	$48, %r8, %r8
	movq	%rax, %r9
	addq	%r8, %r9
	cvtss2sd	36(%r9), %xmm3
	movslq	-52(%rbp), %r8
	imulq	$48, %r8, %r8
	addq	%r8, %rax
	cvtss2sd	40(%rax), %xmm4
	movb	$5, %al
	callq	_printf
	movl	%eax, -80(%rbp)         ## 4-byte Spill
## BB#14:                               ##   in Loop: Header=BB2_12 Depth=1
	movl	-52(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -52(%rbp)
	jmp	LBB2_12
LBB2_15:
	jmp	LBB2_16
LBB2_16:
	movq	-40(%rbp), %rdi
	callq	_fclose
	movl	$0, %ecx
	movl	%eax, -56(%rbp)
	cmpl	-56(%rbp), %ecx
	jne	LBB2_18
## BB#17:
	leaq	L_.str8(%rip), %rdi
	callq	_puts
	movl	%eax, -84(%rbp)         ## 4-byte Spill
LBB2_18:
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	$0, -40(%rbp)
	movq	(%rax), %rax
	cmpq	-16(%rbp), %rax
	jne	LBB2_20
## BB#19:                               ## %SP_return
	addq	$104, %rsp
	popq	%rbx
	popq	%rbp
	retq
LBB2_20:                                ## %CallStackCheckFailBlk
	callq	___stack_chk_fail
	.cfi_endproc

	.globl	_showStudentInfo
	.align	4, 0x90
_showStudentInfo:                       ## @showStudentInfo
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
	subq	$32, %rsp
	leaq	L_.str6(%rip), %rax
	movq	%rdi, -8(%rbp)
	movq	%rax, %rdi
	callq	_puts
	movl	$0, -12(%rbp)
	movl	%eax, -16(%rbp)         ## 4-byte Spill
LBB3_1:                                 ## =>This Inner Loop Header: Depth=1
	cmpl	$5, -12(%rbp)
	jge	LBB3_4
## BB#2:                                ##   in Loop: Header=BB3_1 Depth=1
	leaq	L_.str7(%rip), %rdi
	movslq	-12(%rbp), %rax
	movq	-8(%rbp), %rcx
	imulq	$48, %rax, %rax
	addq	%rax, %rcx
	movq	(%rcx), %rsi
	movslq	-12(%rbp), %rax
	movq	-8(%rbp), %rcx
	imulq	$48, %rax, %rax
	addq	%rax, %rcx
	addq	$8, %rcx
	movslq	-12(%rbp), %rax
	movq	-8(%rbp), %rdx
	imulq	$48, %rax, %rax
	addq	%rax, %rdx
	movl	20(%rdx), %r8d
	movslq	-12(%rbp), %rax
	movq	-8(%rbp), %rdx
	imulq	$48, %rax, %rax
	addq	%rax, %rdx
	cvtss2sd	24(%rdx), %xmm0
	movslq	-12(%rbp), %rax
	movq	-8(%rbp), %rdx
	imulq	$48, %rax, %rax
	addq	%rax, %rdx
	cvtss2sd	28(%rdx), %xmm1
	movslq	-12(%rbp), %rax
	movq	-8(%rbp), %rdx
	imulq	$48, %rax, %rax
	addq	%rax, %rdx
	cvtss2sd	32(%rdx), %xmm2
	movslq	-12(%rbp), %rax
	movq	-8(%rbp), %rdx
	imulq	$48, %rax, %rax
	addq	%rax, %rdx
	cvtss2sd	36(%rdx), %xmm3
	movslq	-12(%rbp), %rax
	movq	-8(%rbp), %rdx
	imulq	$48, %rax, %rax
	addq	%rax, %rdx
	cvtss2sd	40(%rdx), %xmm4
	movq	%rcx, %rdx
	movl	%r8d, %ecx
	movb	$5, %al
	callq	_printf
	movl	%eax, -20(%rbp)         ## 4-byte Spill
## BB#3:                                ##   in Loop: Header=BB3_1 Depth=1
	movl	-12(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -12(%rbp)
	jmp	LBB3_1
LBB3_4:
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"\350\257\267\350\276\223\345\205\245\347\254\254%d\344\270\252\345\255\246\345\221\230\347\232\204\344\277\241\346\201\257:"

L_.str1:                                ## @.str1
	.asciz	"%ld%s%d%f%f%f%f"

	.comm	_students,240,4         ## @students
L_.str2:                                ## @.str2
	.asciz	"/Users/mac/Desktop/c/C_Project/C_Project/test.txt"

L_.str3:                                ## @.str3
	.asciz	"w"

L_.str4:                                ## @.str4
	.asciz	"\346\226\207\344\273\266\346\211\223\345\274\200\346\210\220\345\212\237\357\274\201"

L_.str5:                                ## @.str5
	.asciz	"%s\n"

L_.str6:                                ## @.str6
	.asciz	"num\tname\tage\tMath\tPhysics\tEnglish\tComputer\tTotalGrade"

L_.str7:                                ## @.str7
	.asciz	"%ld\t%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n"

L_.str8:                                ## @.str8
	.asciz	"\346\226\207\344\273\266\345\205\263\351\227\255\346\210\220\345\212\237\357\274\201"

L_.str9:                                ## @.str9
	.asciz	"r"

L_.str10:                               ## @.str10
	.asciz	"\346\226\207\344\273\266\346\211\223\345\274\200\346\210\220\345\212\237"

L_.str11:                               ## @.str11
	.asciz	"%s"

L_.str12:                               ## @.str12
	.asciz	"%s\t"

L_.str13:                               ## @.str13
	.asciz	"\n"

	.comm	_student,240,4          ## @student
L_.str14:                               ## @.str14
	.asciz	"%f"


.subsections_via_symbols
