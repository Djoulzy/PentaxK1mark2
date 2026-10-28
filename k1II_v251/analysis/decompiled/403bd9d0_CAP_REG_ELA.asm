403bd9d0  stmdb sp!,{r0,r1,r4,lr}
403bd9d4  cpy r0,sp
403bd9d8  bl 0x406793bc
403bd9dc  bl 0x4049a740
403bd9e0  ldr r0,[r0,#0x44]
403bd9e4  bl 0x40301ff4
403bd9e8  mov r0,#0x0
403bd9ec  ldmia sp!,{r2,r3,r4,pc}
