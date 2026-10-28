403bd990  stmdb sp!,{r0,r1,r4,lr}
403bd994  cpy r0,sp
403bd998  bl 0x406793bc
403bd99c  bl 0x4049a740
403bd9a0  ldr r0,[r0,#0x18]
403bd9a4  bl 0x4030014c
403bd9a8  mov r0,#0x0
403bd9ac  ldmia sp!,{r2,r3,r4,pc}
