extern getchar
extern putchar
global main

section .rodata
    msg:        db "Please enter a sentence, and the program will enter words on a new line: "
    msglen:     equ $ - msg

section .bss
    c:          resq 1

section .text

main:
    sub rsp, 8

; Greeting Block

    mov rax, 1
    mov rdi, 1

    lea rsi, [rel msg]
    mov rdx, msglen
    syscall

; Logic Block    

.while_loop:
        
    ; getchar logic 
    lea rdi, [rel c]
    call getchar
    cmp rax, -1
    je .done
    
    ; putchar logic
    mov rdi, rax
    call putchar

    jmp .while_loop

.done:
    add rsp, 8
    xor rax, rax
    ret
