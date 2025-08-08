extern ft_strlen
extern ft_strcpy
extern malloc

section .text
	global ft_strdup ;   

ft_strdup:
    push rdi
    call ft_strlen

    inc rax
    mov rdi, rax
    call malloc wrt ..plt

    test rax, rax
    jz .done

    mov rsi, [rsp]
    mov rdi, rax
    call ft_strcpy

.done:
    pop rcx
	ret