; External declaration for printf
extern printf

; Data section
section .data
    msg: db "Hello, Holberton", 0  ; Null-terminated string
    fmt: db "%s", 10, 0            ; Format string with newline character and null terminator

; Text section
section .text
    global main                    ; Entry point for the program

main:
    push rbp                       ; Save the base pointer

    mov rdi, fmt                   ; Set the format string address to rdi
    mov rsi, msg                   ; Set the message address to rsi
    mov rax, 0                     ; Set rax to 0 (indicating the number of floating-point arguments)
    call printf                    ; Call printf with the specified format and message

    pop rbp                        ; Restore the base pointer

    mov rax, 0                     ; Set rax to 0 (indicating successful program execution)
    ret                            ; Return from the main function
