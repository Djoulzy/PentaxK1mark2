408d9b60  stmdb sp!,{r3,r4,r5,lr}
408d9b64  cmp r1,#0x14
408d9b68  cpy r4,r1
408d9b6c  cpy r5,r0
408d9b70  mov r0,#0x0
408d9b74  bcs 0x408d9ba8
408d9b78  str r0,[sp,#0x0]
408d9b7c  bl 0x4068978c
408d9b80  ldr r0,[r0,#0x4]
408d9b84  cpy r1,sp
408d9b88  bl 0x40689fd8
408d9b8c  add r0,r4,r4, lsl #0x1
408d9b90  ldr r2,[sp,#0x0]
408d9b94  add r0,r5,r0, lsl #0x2
408d9b98  ldr r3,[r0,#0x10]!
408d9b9c  ldr r1,[r0,#0x4]
408d9ba0  cpy r0,r5
408d9ba4  bl 0x408d9b4c
408d9ba8  ldmia sp!,{r3,r4,r5,pc}
