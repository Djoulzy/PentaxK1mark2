40439d14  stmdb sp!,{r4,lr}
40439d18  mov r4,#0x0
40439d1c  bl 0x40439cd0
40439d20  cpy r1,r0
40439d24  adr r0,0x40439d78
40439d28  bl 0x4067cd44
40439d2c  cpy r0,r4
40439d30  ldmia sp!,{r4,pc}
