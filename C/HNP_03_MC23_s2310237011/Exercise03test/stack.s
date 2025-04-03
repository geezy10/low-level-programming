// stack.s

.global stack_init, stack_push, stack_pop, stack_full, stack_empty, stack_search

.equ MAX_SIZE, 4

.bss

.comm stack, MAX_SIZE*4, 4  // int stack[MAX_SIZE]; allocate 16 integers

.data

top:    .word 0             // int top; reserve an integer, named "top", initialized to 0

.text

stack_init:
    mov r0, #0              // top = 0;
    ldr r1, =top
    str r0, [r1]
    bx lr

stack_push:
    ldr r1, =top
    ldr r2, [r1]
    cmp r2, #MAX_SIZE
    bcc do_push
    mov r0, #0
    bx lr
do_push:
    ldr r3, =stack
    lsl r4, r2, #2
    str r0, [r3, r4]
    add r2, #1
    str r2, [r1]
    mov r0, #1
    bx lr

stack_pop:
    ldr r1, =top
    ldr r2, [r1]
    cmp r2, #0
    beq exit_pop_fail
    sub r2, #1
    str r2, [r1]
    ldr r3, =stack
    lsl r2, #2
    ldr r4, [r3, r2]
    str r4, [r0]
    mov r0, #1
    bx lr;      
exit_pop_fail:
    mov r0, #0
    bx lr

stack_full:
    ldr r1, =top
    ldr r1, [r1]
    cmp r1, #MAX_SIZE
    bne exit_stack_full_fail
exit_stack_full_success:
    mov r0, #1                  // return 1;        
    bx lr
exit_stack_full_fail:
    mov r0, #0                  // return 0
    bx lr

stack_empty:
    ldr r1, =top
    ldr r1, [r1]
    cmp r1, #0
    bne exit_stack_empty_fail
exit_stack_empty_success:
    mov r0, #1
    bx lr
exit_stack_empty_fail:
    mov r0, #0
    bx lr

stack_search:
    ldr r1, =top
    ldr r2, [r1]
    ldr r1, =stack
search_loop:
    cmp r2, #0
    beq stack_search_not_found
    sub r2, #1
    lsl r4, r2, #2
    ldr r3, [r1, r4]
    cmp r3, r0
    beq stack_search_found
    b search_loop
stack_search_not_found:
    mov r0, #0
    sub r0, #1
    bx lr
stack_search_found:
    add r2, #1
    mov r0, r2
    bx lr


