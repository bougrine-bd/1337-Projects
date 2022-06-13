section .text
	global _ft_strlen
_ft_strlen:
    mov rax, rdi
while:
    cmp byte [rax], 0
    je  end
    inc rax
    jmp while
end:
    sub rax, rdi
    ret