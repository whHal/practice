extern printf
extern scanf
global main

section .data
    msg:                db "Please enter two integers (seriously, it will break the program otherwise): ", 0
    scan_fmt:           db "%ld %ld", 0
    print_sum:          db "Sum: %ld", 10, 0
    print_diff:         db "Difference: %ld", 10, 0
    print_prod:         db "Product: %ld", 10, 0
    print_quot:         db "Quotient: %ld", 10, 0
    print_quot_error:   db "Quotient: Undefined; Cannot divide by zero.", 10, 0
    print_res_error:    db "Sum: %ld", 10, "Difference: %ld", 10, "Product: %ld", 10, 0

section .bss
    int1:               resq 1
    int2:               resq 1
    sum:                resq 1
    diff:               resq 1
    prod:               resq 1
    quot:               resq 1


section .text

main:

; Aligning the stack

    sub rsp, 8                  

; Prints the Greeting/Prompt

    lea rdi, [rel msg]          
    xor rax, rax                
    call printf                 
    
; Accepts the User Input and puts it into: int1, int2

    lea rdi, [rel scan_fmt]     
    lea rsi, [rel int1]         
    lea rdx, [rel int2]         
    xor rax, rax                
    call scanf                  

; Addition Block

    mov rax, [rel int1]         
    add rax, [rel int2]
    mov [rel sum], rax

; Subtraction Block

    mov rax, [rel int1]
    sub rax, [rel int2]
    mov [rel diff], rax

; Multiplication Block
    
    mov rax, [rel int1]
    imul rax, [rel int2]
    mov [rel prod], rax

; Division Block

    ; Divide by zero test
    
    mov rcx, [rel int2]
    test rcx, rcx
    jz division_by_zero
    
    ; Normal Block
    
    mov rax, [rel int1]
    cqo
    mov rcx, [rel int2]
    idiv rcx
    mov [rel quot], rax
    jmp division_end
    
    division_by_zero:
  
        lea rdi, [rel print_quot_error]
        xor rax, rax
        call printf
        
        lea rdi, [rel print_res_error]
        mov rsi, [rel sum]
        mov rdx, [rel diff]
        mov rcx,  [rel prod] 
        xor rax, rax
        call printf
        jmp end
    
    division_end:

; This section is responsible for printing the
; results of the operations to the console.

    lea rdi, [rel print_sum]
    mov rsi, [rel sum]
    xor rax, rax
    call printf

    lea rdi, [rel print_diff]
    mov rsi, [rel diff]
    xor rax, rax
    call printf

    lea rdi, [rel print_prod]
    mov rsi, [rel prod]
    xor rax, rax
    call printf

    lea rdi, [rel print_quot]
    mov rsi, [rel quot]
    xor rax, rax
    call printf

; More necessary stack magic

end:
    add rsp, 8
    ret
