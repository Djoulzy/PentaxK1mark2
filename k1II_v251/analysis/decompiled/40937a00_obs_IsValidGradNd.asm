40937a00  stmdb sp!,{r3,r4,r5,lr}
40937a04  add r0,r0,#0x8
40937a08  mov r4,#0x0
40937a0c  mov r1,#0x73
40937a10  bl 0x4095bfa0
40937a14  cmp r0,#0x6
40937a18  addcc pc,pc,r0, lsl #0x2
40937a1c  b 0x40937a40
40937a40  ldr r0,[0x40937c44]
40937a44  adr r1,0x40937c4c
40937a48  ldr r2,[0x40937c48]
40937a4c  movw r3,#0x29e
40937a50  str r0,[sp,#0x0]
40937a54  mov r0,#0x0
40937a58  bl 0x4067ca30
40937a5c  cpy r0,r4
40937a60  ldmia sp!,{r3,r4,r5,pc}
