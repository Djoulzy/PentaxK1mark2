403bd910  stmdb sp!,{r0,r1,r4,lr}
403bd914  cpy r0,sp
403bd918  bl 0x406793bc
403bd91c  bl 0x4049a740
403bd920  ldr r0,[r0,#0x14]
403bd924  bl 0x405f4694
403bd928  mov r0,#0x0
403bd92c  ldmia sp!,{r2,r3,r4,pc}
