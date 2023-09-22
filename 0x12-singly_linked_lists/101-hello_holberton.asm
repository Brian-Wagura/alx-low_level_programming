section .data
    message db "Hello, Holberton", 10, 0
    format db "%s", 0

section .text
    global main
    extern printf

main:
    ; Prepare arguments for printf
    mov rdi, format
    mov rsi, message
    xor rax, rax

    ; Call printf
    call printf

    ; Exit program
    xor eax, eax
    ret
