extern printf   ; 
extern scanf    ; These are the global declarations of my file.
global main     ;

section .data
    msg:        db "Please enter your favorite number: ", 0
    scan_fmt:   db "%ld", 0
    printf_fmt: db "Your favorite number is: %ld", 10, 0


section .bss




section .text
    



main:    
