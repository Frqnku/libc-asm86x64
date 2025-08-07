section .text
	global ft_write ;

ft_write:
	xor rdx, rdx ;

.loop:
	mov al, [rsi + rdx]
	cmp al, 0
	je .do_write
	inc rdx
	jmp .loop

.do_write:
	mov rax, 1
	mov rdi, 1
	syscall
	ret