403bd970  stmdb sp!,{r0,r1,r4,lr}
403bd974  cpy r0,sp
403bd978  bl 0x406793bc
403bd97c  bl 0x4049a740
403bd980  ldr r0,[r0,#0x1c]
403bd984  bl 0x40301540
403bd988  mov r0,#0x0
403bd98c  ldmia sp!,{r2,r3,r4,pc}
