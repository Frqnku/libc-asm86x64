section .text
	global ft_strlen ;

ft_strlen:
	xor rax, rax ;

.loop:
	mov bl, [rdi + rax]
	cmp bl, 0
	je .done
	inc rax
	jmp .loop

.done:
	ret