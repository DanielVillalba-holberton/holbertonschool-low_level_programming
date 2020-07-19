  
section .text
global main

main:
  mov rax, 1          ;System call to write (sys_write) (64bits)         
  mov rsi, message    ;loads the address of "message" in rsi
  mov rdx, msglen     ;maximum number of characters read
  syscall             ;calls to kernel

  mov rax, 60         ;exit
  mov rdi, 0          ;return of the program
  syscall           

section .rodata
  message: db "Hello, Holberton", 0xa
  msglen: equ $ - message