section .data
    num dd 17
    divisores db 0
    primo db 1

section .text
    global _start

_start:
    mov esi, 2         ; divisor começa em 2

verifica:
    mov eax, [num]
    xor edx, edx
    div esi            ; edx = resto de num / esi

    cmp edx, 0
    jne continua

    inc byte [divisores]

continua:
    inc esi
    mov eax, [num]
    cmp esi, eax
    jl verifica

    cmp byte [divisores], 0
    je eh_primo

    mov byte [primo], 0
eh_primo:
    mov eax, 1
    int 0x80
