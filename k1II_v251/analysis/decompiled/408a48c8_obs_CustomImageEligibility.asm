408a48c8  stmdb sp!,{r3,r4,r5,lr}
408a48cc  cpy r2,r0
408a48d0  ldr r0,[0x408a4b60]
408a48d4  cmp r2,#0x31
408a48d8  mov r4,#0x0
408a48dc  addcc pc,pc,r2, lsl #0x2
408a48e0  b 0x408a4a68
408a4a68  ldr r0,[0x408a4b64]
408a4a6c  adr r2,0x408a4b68
408a4a70  adr r1,0x408a4b84
408a4a74  mov r3,#0xd5
408a4a78  str r0,[sp,#0x0]
408a4a7c  mov r0,#0x0
408a4a80  bl 0x4067ca30
408a4a84  cpy r0,r4
408a4a88  ldmia sp!,{r3,r4,r5,pc}
