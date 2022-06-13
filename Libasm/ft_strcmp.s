section .text
    global _ft_strcmp
_ft_strcmp:
while:
    mov r15b, byte [rsi]
    cmp byte [rsi], 0
    je  end
    cmp byte [rdi], r15b
    jne end
    inc rsi
    inc rdi
    jmp while
end:
    mov rax, 0
    mov al, byte [rdi]
    sub rax, r15
    ret