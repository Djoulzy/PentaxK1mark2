403bd9b0  stmdb sp!,{r0,r1,r4,lr}
403bd9b4  cpy r0,sp
403bd9b8  bl 0x406793bc
403bd9bc  bl 0x4049a740
403bd9c0  ldr r0,[r0,#0x2c]
403bd9c4  bl 0x4040ddb4
403bd9c8  mov r0,#0x0
403bd9cc  ldmia sp!,{r2,r3,r4,pc}
