extern __errno_location

section .text
	global ft_read ;

ft_read:
	mov rax, 0
	syscall

	cmp rax, 0
    jge .done

    neg rax

    call __errno_location wrt ..plt
    mov [rax], eax

    mov rax, -1

.done:
	ret