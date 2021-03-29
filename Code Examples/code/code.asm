main:
    push bp
    mov bp, sp
@main_body:
    sub sp, 4
    mov [bp-4],20
    mov [bp-4],10
    sub sp, 4
    mov [bp-8],20
    push ax
    mov ax,[bp-4]
    add [bp-8],ax
    pop ax
    mov ax,0
    jmp @main_exit
@main_exit:
    mov sp,bp
    pop bp
    ret