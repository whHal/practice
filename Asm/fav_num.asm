extern printf   ; 
extern scanf    ; These are the global declarations of my file.
global main     ;

section .data
    msg:        db "Please enter your favorite number: ", 0
    scan_fmt:   db "%ld", 0
    print_fmt: db "Your favorite number is: %ld", 10, 0


section .bss
    fav_num:    resq 1



section .text

main:
    sub rsp, 8
    
    lea rdi, [rel msg] 
    xor rax, rax
    call printf
    
    lea rdi, [rel scan_fmt]
    lea rsi, [rel fav_num]
    xor rax, rax
    call scanf
    

    lea rdi, [rel print_fmt]
    mov rsi, [rel fav_num] 
    xor rax, rax
    call printf

    add rsp, 8
    ret 
