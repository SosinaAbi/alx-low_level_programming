    global  main
    extern printf    

    section .text
main:
    lea rdi,[rel text]
    xor rax,rax           ; makes rax register 0
    call printf wrt ..plt ; wrt ..plt I dont know exactly what it is
                          ; but solved  segmentation fault in my run
    ret 

    section .data;
text: db "Hello, Holberton", 10; 10 for new line
