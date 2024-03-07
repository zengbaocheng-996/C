	.file	"main.c"
	.intel_syntax noprefix
 # GNU C17 (x86_64-win32-seh-rev0, Built by MinGW-W64 project) version 8.1.0 (x86_64-w64-mingw32)
 #	compiled by GNU C version 8.1.0, GMP version 6.1.2, MPFR version 4.0.1, MPC version 1.1.0, isl version isl-0.18-GMP

 # GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
 # options passed:  -imultilib .
 # -iprefix C:/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/
 # -U_REENTRANT main.c -m32 -masm=intel -mtune=core2 -march=nocona
 # -fverbose-asm
 # options enabled:  -faggressive-loop-optimizations
 # -fasynchronous-unwind-tables -fauto-inc-dec -fchkp-check-incomplete-type
 # -fchkp-check-read -fchkp-check-write -fchkp-instrument-calls
 # -fchkp-narrow-bounds -fchkp-optimize -fchkp-store-bounds
 # -fchkp-use-static-bounds -fchkp-use-static-const-bounds
 # -fchkp-use-wrappers -fcommon -fdelete-null-pointer-checks
 # -fdwarf2-cfi-asm -fearly-inlining -feliminate-unused-debug-types
 # -ffp-int-builtin-inexact -ffunction-cse -fgcse-lm -fgnu-runtime
 # -fgnu-unique -fident -finline-atomics -fira-hoist-pressure
 # -fira-share-save-slots -fira-share-spill-slots -fivopts
 # -fkeep-inline-dllexport -fkeep-static-consts -fleading-underscore
 # -flifetime-dse -flto-odr-type-merging -fmath-errno -fmerge-debug-strings
 # -fpeephole -fplt -fprefetch-loop-arrays -freg-struct-return
 # -fsched-critical-path-heuristic -fsched-dep-count-heuristic
 # -fsched-group-heuristic -fsched-interblock -fsched-last-insn-heuristic
 # -fsched-rank-heuristic -fsched-spec -fsched-spec-insn-heuristic
 # -fsched-stalled-insns-dep -fschedule-fusion -fsemantic-interposition
 # -fset-stack-executable -fshow-column -fshrink-wrap-separate
 # -fsigned-zeros -fsplit-ivs-in-unroller -fssa-backprop -fstdarg-opt
 # -fstrict-volatile-bitfields -fsync-libcalls -ftrapping-math
 # -ftree-cselim -ftree-forwprop -ftree-loop-if-convert -ftree-loop-im
 # -ftree-loop-ivcanon -ftree-loop-optimize -ftree-parallelize-loops=
 # -ftree-phiprop -ftree-reassoc -ftree-scev-cprop -funit-at-a-time
 # -funwind-tables -fverbose-asm -fzero-initialized-in-bss -m32 -m80387
 # -m96bit-long-double -maccumulate-outgoing-args -malign-double
 # -malign-stringops -mcx16 -mfancy-math-387 -mfp-ret-in-387 -mfxsr
 # -mieee-fp -mlong-double-80 -mmmx -mms-bitfields -mno-red-zone -mno-sse4
 # -mpush-args -msahf -msse -msse2 -msse3 -mstack-arg-probe -mstackrealign
 # -mvzeroupper

	.text
	.globl	_add
	.def	_add;	.scl	2;	.type	32;	.endef
_add: #add函数入口
	push	ebp	 #
	#把原有函数，也就是main函数的栈基指针压栈，压栈的值保存到内存上，位置就是esp指向的位置
	mov	ebp, esp	 #,
	#把main的栈顶指针esp，作为ebp
	sub	esp, 16	 #,
	# 由于add函数自身要使用栈空间，把esp减去16，是指add函数的函数栈空间大小是16个字节
 # main.c:5:     ret = a + b;
	mov	edx, DWORD PTR [ebp+8]	 # tmp93, a
	#拿到实参，a的值，放入edx
	mov	eax, DWORD PTR [ebp+12]	 # tmp94, b
	#拿到实参，b的值，放入eax
	add	eax, edx	 # tmp92, tmp93
	#将eax和edx相加
	mov	DWORD PTR [ebp-4], eax	 # ret, tmp92
	#把eax，也就是ret的值，放入ebp减4个字节位置
 # main.c:6:     return ret;
	mov	eax, DWORD PTR [ebp-4]	 # _4, ret
 # main.c:7: }
	leave	
	ret	#函数返回，弹出压栈的指令返回地址，回到main函数执行
	#mov esp, ebp 把ebp内的内容复制到esp寄存器中，也就是B函数的栈基作为原有调用者A函数的栈顶
	#pop ebp 弹出栈顶元素，放到ebp寄存器中，因为原有A函数的栈基指针压到了内存里，
	#所以弹出后，放入ebp，这样原函数A的现场恢复完毕
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0: #字符串常量
	.ascii "add result = %d\12\0"
	.text
	.globl	_mai n
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	push	ebp	 #
	# 压栈原有函数的栈基指针
	mov	ebp, esp	 #,
	and	esp, -16	 #,
	sub	esp, 32	 #,
 # main.c:9: int main() {
	call	___main	 #从main到这里函数调用原理与add一致
 # main.c:12:     a = 5;
	mov	DWORD PTR [esp+16], 5	 # a,
	#把常量5放入栈指针（esp寄存器存的栈指针）偏移16个字节的位置，这个位置是变量a的空间
 # main.c:13:     p = &a;
	lea	eax, [esp+16]	 # tmp91,
	#这里用的lea，和mov不一样，是将esp+16位置的地址，放到eax寄存器中
	mov	DWORD PTR [esp+28], eax	 # p, tmp91
	#把eax中的值放到栈指针偏移28字节位置的指针变量p中
 # main.c:14:     b = *p + 2; #mov间接访问
	mov	eax, DWORD PTR [esp+28]	 # tmp92, p
	#栈指针偏移28个字节位置，是指针变量p的值，放到eax寄存器
	mov	eax, DWORD PTR [eax]	 # _1, *p_5
	#把eax寄存器中的值作为地址，去内存访问到对应的数据，放入eax中
 # main.c:14:     b = *p + 2;
	add	eax, 2	 # tmp93,
	#对eax中的值加2，结果还是在eax中
	mov	DWORD PTR [esp+24], eax	 # b, tmp93
	#把eax中的值放到栈指针偏移24字节位置，变量b中
 # main.c:15:     ret = add(a, b); #函数调用，实参传递
	mov	eax, DWORD PTR [esp+16]	 # a.0_2, a
	mov	edx, DWORD PTR [esp+24]	 # tmp94, b
	mov	DWORD PTR [esp+4], edx	 #, tmp94
	mov	DWORD PTR [esp], eax	 #, a.0_2
	call	_add	 # #调用add函数
	mov	DWORD PTR [esp+20], eax	 # ret, tmp95
 # main.c:16:     printf("add result = %d\n", ret);
	mov	eax, DWORD PTR [esp+20]	 # tmp96, ret
	mov	DWORD PTR [esp+4], eax	 #, tmp96
	mov	DWORD PTR [esp], OFFSET FLAT:LC0	 #,
	call	_printf	 #
 # main.c:17:     return 0;
	mov	eax, 0	 # _10,
 # main.c:18: }
	leave	
	ret	
	.ident	"GCC: (x86_64-win32-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
