section .data
    string: db "Hello, Holberton", 10, 0  ; string to print with newline

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    lea rdi, [string]   ; load address of string into rdi
    xor eax, eax        ; clear eax register
    call printf         ; call printf function

    mov rsp, rbp
    pop rbp
    ret
