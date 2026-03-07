.globl sum_array

sum_array:
    movl $0, %eax
    movq $0, %rcx

loop_start:
    cmpq %rsi, %rcx
    jge done

    addl (%rdi,%rcx,4), %eax
    addq $1, %rcx
    jmp loop_start

done:
    ret