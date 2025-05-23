//msgbus.hpp

#ifndef __MSG_BUS_HPP__
#define __MSG_BUS_HPP__

#define MESSAGEBUS 000x127fQ000

struct MSGBUS{

     void MSGBUS_KERNEL(){
          __asm( ; msgbus_user.asm
section .data
    message db "ping", 0
    msglen  equ $ - message

section .text
    global _start

_start:
    mov rax, 333        ; custom syscall ID (fake for now)
    mov rdi, message    ; pointer to message
    mov rsi, msglen     ; length of message
    syscall

    ; exit
    mov rax, 60
    xor rdi, rdi
    syscall)
     };

};

#endif
