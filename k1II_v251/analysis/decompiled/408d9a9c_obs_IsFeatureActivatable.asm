408d9a9c  cmp r1,#0x14
408d9aa0  stmdb sp!,{r4,lr}
408d9aa4  bcs 0x408d9acc
408d9aa8  add r2,r1,r1, lsl #0x1
408d9aac  add r2,r0,r2, lsl #0x2
408d9ab0  ldr r2,[r2,#0x10]
408d9ab4  cmp r2,#0x0
408d9ab8  bne 0x408d9acc
408d9abc  bl 0x408d9998
408d9ac0  cmp r0,#0x0
408d9ac4  moveq r0,#0x1
408d9ac8  ldmiaeq sp!,{r4,pc}
408d9acc  mov r0,#0x0
408d9ad0  ldmia sp!,{r4,pc}
