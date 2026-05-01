section .rodata

    msg:     db "Hello, world!", 10

    msglen:  equ $ - msg         ; This can be treated like a variable.
                                 ; It is important, because this acts like-
                                 ; a null terminator in C.

section .text
    global _start

_start:
   
    mov rax, 1                  ; 1 is the syscall number for write (print)
    mov rdi, 1                  ; fd (file descriptor) 1 (syscall for stdout)
    
    lea rsi, [rel msg]          ; Loads the effective address of msg into regi-
                                ; ster 'rsi', the second in the argument line.

    mov rdx, msglen             ; Instead of using lea, since 'msglen' is- 
                                ; essentially a number, we just use 'mov'.
     
    syscall
    
    
    mov rax, 60
    xor rdi, rdi
    syscall
