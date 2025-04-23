section .data
    num dd 5
    fat dd 1

section .text
    global _start

_start:
    mov ecx, [num]     ; ecx = contador (5)
    mov edx, 1         ; edx = resultado do fatorial

loop_fat:
    imul edx, ecx      ; edx *= ecx
    loop loop_fat      ; ecx -= 1, repete se ecx > 0

    mov [fat], edx     ; salva o resultado

    mov eax, 1
    int 0x80
