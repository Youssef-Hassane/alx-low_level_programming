section .data
    hello_format db "Hello, Holberton", 0

section .text
    global main
    extern printf

main:
    ; Call printf with the format string
    mov rdi, hello_format
    call printf

    ; Exit the program
    mov eax, 0
    ret
