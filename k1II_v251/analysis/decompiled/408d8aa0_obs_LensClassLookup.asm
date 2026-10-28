408d8aa0  stmdb sp!,{r3,r4,r5,lr}
408d8aa4  cmp r0,#0xe
408d8aa8  mov r4,#0x10
408d8aac  addcc pc,pc,r0, lsl #0x2
408d8ab0  b 0x408d8c20
408d8c20  ldr r0,[0x408d8df4]
408d8c24  adr r2,0x408d8df8
408d8c28  adr r1,0x408d8e0c
408d8c2c  mov r3,#0xce
408d8c30  str r0,[sp,#0x0]
408d8c34  mov r0,#0x0
408d8c38  bl 0x4067ca30
408d8c3c  cpy r0,r4
408d8c40  ldmia sp!,{r3,r4,r5,pc}
