section .data
    hello db 'Hello, Holberton', 10  ; The string to be printed, with a newline character (10) at the end
    hello_len equ $ - hello           ; Calculate the length of the string

section .text
    global _start

_start:
    ; sys_write (write to stdout)
    mov rax, 1                      ; syscall number for sys_write
    mov rdi, 1                      ; file descriptor 1 (stdout)
    mov rsi, hello                  ; pointer to the string
    mov rdx, hello_len              ; length of the string
    syscall

    ; sys_exit (exit the program)
    mov rax, 60                     ; syscall number for sys_exit
    xor rdi, rdi                    ; exit status (0)
    syscall

