403bd950  stmdb sp!,{r0,r1,r4,lr}
403bd954  cpy r0,sp
403bd958  bl 0x406793bc
403bd95c  bl 0x4049a740
403bd960  ldr r0,[r0,#0x4]
403bd964  bl 0x40381c94
403bd968  mov r0,#0x0
403bd96c  ldmia sp!,{r2,r3,r4,pc}
