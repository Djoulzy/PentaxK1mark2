403bd930  stmdb sp!,{r0,r1,r4,lr}
403bd934  cpy r0,sp
403bd938  bl 0x406793bc
403bd93c  bl 0x4049a740
403bd940  ldr r0,[r0,#0xc]
403bd944  bl 0x402ff9d8
403bd948  mov r0,#0x0
403bd94c  ldmia sp!,{r2,r3,r4,pc}
