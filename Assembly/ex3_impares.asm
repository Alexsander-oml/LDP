section .data
    qtd dd 5
    atual dd 1         ; começa com 1

section .text
    global _start

_start:
    mov ecx, [qtd]

gera_impares:
    ; Aqui você da pra imprimir [atual]

    add dword [atual], 2
    loop gera_impares

    mov eax, 1
    int 0x80
