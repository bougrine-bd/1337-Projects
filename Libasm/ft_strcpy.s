section .text
	global _ft_strcpy
_ft_strcpy:
    mov rax, rdi
    mov r15, 0
while:
    cmp byte [rsi], 0
    je end
    mov r15b, byte [rsi]
    mov byte [rdi], r15b
    inc rsi
    inc rdi
    jmp while
end:
    mov byte [rdi], 0
    ret