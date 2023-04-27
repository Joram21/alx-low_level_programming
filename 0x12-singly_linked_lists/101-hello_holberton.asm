section .data
    hello: db "Hello, Holberton", 10  ; the message to print, followed by a newline
section .text
    global main
    extern printf

main:
    ; prepare arguments for printf
    mov rdi, hello  ; the address of the message string
    xor esi, esi    ; no floating point arguments
    mov eax, 0      ; use the default calling convention

    ; call printf to print the message
    call printf

    ; exit the program with status code 0
    mov eax, 0      ; status code 0
    ret

