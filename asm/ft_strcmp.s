section .text
	global ft_strcmp ;

ft_strcmp:
	xor rcx, rcx

.loop:
	mov al, [rdi + rcx]
	mov bl, [rsi + rcx]
	cmp al, bl
	jne .diff
	cmp al, 0
	je .done
	inc rcx
	jmp .loop

.diff:
	movzx eax, al
    movzx ebx, bl
    sub eax, ebx
    ret

.done:
	xor rax, rax
	ret