section .data
    msg     db "Hello, World!", 10 ; 10 is ASCII for newline.
    msglen equ $ - msg             ; length = current address - start of msg

section .text
    global _start

_start:
    ; write (1, msg, msglen)
    mov rax, 1
    mov rdi, 1
    mov rsi, msg
    mov rdx, msglen
    syscall

    ; exit(0)
    mov rax, 60
    mov rdi, 0
    syscall
