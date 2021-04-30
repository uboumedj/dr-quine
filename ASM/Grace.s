%define STR "%%define STR %4$c%1$s%4$c%2$c%%define MAIN_DECLARATION global main%2$c%%define MAIN_CALL main:%2$c%2$csection .text%2$c%2$c%3$cMAIN_DECLARATION%2$c%3$c; Comment: this was terrible to do, terrified of doing Sully now%2$c%3$cextern fprintf, fopen, fclose%2$c%2$cMAIN_CALL%2$c%3$cpush%3$crbp%2$c%3$cmov%3$c%3$crbp, rsp%2$c%3$clea%3$c%3$crdi, [rel file]%2$c%3$clea%3$c%3$crsi, [rel mode]%2$c%3$ccall%3$cfopen wrt ..plt%2$c%3$cpush%3$crax%2$c%3$cmov%3$c%3$crdi, rax%2$c%3$cmov%3$c%3$crax, 0%2$c%3$clea%3$c%3$crsi, [rel str]%2$c%3$clea%3$c%3$crdx, [rel str]%2$c%3$cmov%3$c%3$crcx, 10%2$c%3$cmov%3$c%3$cr8, 9%2$c%3$cmov%3$c%3$cr9, 34%2$c%3$ccall%3$cfprintf wrt ..plt%2$c%3$cpop%3$c%3$crdi%2$c%3$ccall%3$cfclose wrt ..plt%2$c%3$cmov%3$c%3$crax, 0%2$c%3$cleave%2$c%3$cret%2$c%2$csection .data%2$c%2$cstr:%2$c%3$cdb STR, 0%2$cfile:%2$c%3$cdb %4$cGrace_kid.s%4$c, 0%2$cmode:%2$c%3$cdb %4$cw%4$c, 0%2$c"
%define MAIN_DECLARATION global main
%define MAIN_CALL main:

section .text

	MAIN_DECLARATION
	; Comment: this was terrible to do, terrified of doing Sully now
	extern fprintf, fopen, fclose

MAIN_CALL
	push	rbp
	mov		rbp, rsp
	lea		rdi, [rel file]
	lea		rsi, [rel mode]
	call	fopen wrt ..plt
	push	rax
	mov		rdi, rax
	mov		rax, 0
	lea		rsi, [rel str]
	lea		rdx, [rel str]
	mov		rcx, 10
	mov		r8, 9
	mov		r9, 34
	call	fprintf wrt ..plt
	pop		rdi
	call	fclose wrt ..plt
	mov		rax, 0
	leave
	ret

section .data

str:
	db STR, 0
file:
	db "Grace_kid.s", 0
mode:
	db "w", 0
