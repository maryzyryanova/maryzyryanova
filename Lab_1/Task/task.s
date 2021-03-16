	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 0	sdk_version 11, 1
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3               ## -- Begin function main
LCPI0_0:
	.quad	4607182418800017408     ## double 1
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
	movl	$0, -4(%rbp)
	movb	$121, -17(%rbp)
LBB0_1:                                 ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB0_3 Depth 2
                                        ##       Child Loop BB0_5 Depth 3
	movsbl	-17(%rbp), %eax
	cmpl	$110, %eax
	je	LBB0_11
## %bb.2:                               ##   in Loop: Header=BB0_1 Depth=1
	leaq	L_.str(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str.1(%rip), %rdi
	leaq	-8(%rbp), %rsi
	movl	%eax, -56(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	leaq	L_.str.2(%rip), %rdi
	movl	%eax, -60(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.3(%rip), %rdi
	leaq	-16(%rbp), %rsi
	movl	%eax, -64(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	movsd	LCPI0_0(%rip), %xmm0    ## xmm0 = mem[0],zero
	movsd	%xmm0, -32(%rbp)
	movl	$1, -36(%rbp)
LBB0_3:                                 ##   Parent Loop BB0_1 Depth=1
                                        ## =>  This Loop Header: Depth=2
                                        ##       Child Loop BB0_5 Depth 3
	movl	-36(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jg	LBB0_10
## %bb.4:                               ##   in Loop: Header=BB0_3 Depth=2
	xorps	%xmm0, %xmm0
	movsd	%xmm0, -48(%rbp)
	movl	$0, -52(%rbp)
LBB0_5:                                 ##   Parent Loop BB0_1 Depth=1
                                        ##     Parent Loop BB0_3 Depth=2
                                        ## =>    This Inner Loop Header: Depth=3
	movl	-52(%rbp), %eax
	cmpl	-36(%rbp), %eax
	jg	LBB0_8
## %bb.6:                               ##   in Loop: Header=BB0_5 Depth=3
	movsd	-16(%rbp), %xmm0        ## xmm0 = mem[0],zero
	cvtsi2sdl	-52(%rbp), %xmm1
	addsd	%xmm1, %xmm0
	addsd	-48(%rbp), %xmm0
	movsd	%xmm0, -48(%rbp)
## %bb.7:                               ##   in Loop: Header=BB0_5 Depth=3
	movl	-52(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -52(%rbp)
	jmp	LBB0_5
LBB0_8:                                 ##   in Loop: Header=BB0_3 Depth=2
	movsd	LCPI0_0(%rip), %xmm0    ## xmm0 = mem[0],zero
	divsd	-48(%rbp), %xmm0
	mulsd	-32(%rbp), %xmm0
	movsd	%xmm0, -32(%rbp)
## %bb.9:                               ##   in Loop: Header=BB0_3 Depth=2
	movl	-36(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -36(%rbp)
	jmp	LBB0_3
LBB0_10:                                ##   in Loop: Header=BB0_1 Depth=1
	movsd	-32(%rbp), %xmm0        ## xmm0 = mem[0],zero
	leaq	L_.str.4(%rip), %rdi
	movb	$1, %al
	callq	_printf
	leaq	L_.str.5(%rip), %rdi
	movl	%eax, -68(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.6(%rip), %rdi
	leaq	-17(%rbp), %rsi
	movl	%eax, -72(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	jmp	LBB0_1
LBB0_11:
	movl	-4(%rbp), %eax
	addq	$80, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"n = "

L_.str.1:                               ## @.str.1
	.asciz	"%d"

L_.str.2:                               ## @.str.2
	.asciz	"f = "

L_.str.3:                               ## @.str.3
	.asciz	"%lf"

L_.str.4:                               ## @.str.4
	.asciz	"p = %g"

L_.str.5:                               ## @.str.5
	.asciz	"\nDo you want to continue?\nAnswer: "

L_.str.6:                               ## @.str.6
	.asciz	"%s"

.subsections_via_symbols
