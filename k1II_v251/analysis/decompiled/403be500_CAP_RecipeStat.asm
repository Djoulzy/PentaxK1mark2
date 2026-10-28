403be500  stmdb sp!,{r4,r5,r6,r7,r8,lr}
403be504  sub sp,sp,#0x180
403be508  adr r0,0x403be678
403be50c  bl 0x4067cd44
403be510  ldr r1,[0x403be69c]
403be514  add r0,sp,#0x168
403be518  mov r2,#0x14
403be51c  bl 0x406833b0
403be520  ldr r1,[0x403be6a0]
403be524  add r0,sp,#0x98
403be528  mov r2,#0x70
403be52c  bl 0x406833b0
403be530  ldr r1,[0x403be6a4]
403be534  add r0,sp,#0x108
403be538  mov r2,#0x60
403be53c  bl 0x406833b0
403be540  ldr r1,[0x403be6a8]
403be544  add r0,sp,#0x28
403be548  mov r2,#0x70
403be54c  bl 0x406833b0
403be550  bl 0x403726c8
403be554  ldr r4,[r0,#0x8]
403be558  cpy r0,r4
403be55c  bl 0x402fccf8
403be560  cpy r5,r0
403be564  mov r0,r0, lsl #0x2
403be568  add r0,r0,#0x4
403be56c  bl 0x406832d8
403be570  movs r6,r0
403be574  beq 0x403be720
403be578  add r2,r5,#0x1
403be57c  cpy r1,r0
403be580  cpy r0,r4
403be584  bl 0x402fcd80
403be588  add r7,sp,#0x168
403be58c  mov r4,#0x0
403be590  add r8,sp,#0x98
403be594  b 0x403be718
403be6ac  ldr r2,[r6,r4,lsl #0x2]
403be6b0  ldrb r3,[r2,#0x48]
403be6b4  ldrd r0,r1,[r2,#0x4c]
403be6b8  add r1,r0,r1, lsl #0x1
403be6bc  ldrh r0,[r1,#0x0]
403be6c0  add r1,r1,#0x100
403be6c4  cmp r0,#0x1
403be6c8  ldrh r1,[r1,#0x0]
403be6cc  cmpne r0,#0x2
403be6d0  addeq r12,sp,#0x108
403be6d4  ldreq lr,[r8,r0,lsl #0x2]
403be6d8  ldreq r12,[r12,r1,lsl #0x2]
403be6dc  beq 0x403be73c
403be6e0  cmp r0,#0x5
403be6e4  addeq r12,sp,#0x28
403be6e8  ldreq lr,[sp,#0xac]
403be6ec  ldreq r12,[r12,r1,lsl #0x2]
403be6f0  beq 0x403be73c
403be6f4  ldr lr,[r7,r3,lsl #0x2]
403be6f8  ldr r12,[r8,r0,lsl #0x2]
403be6fc  str r1,[sp,#0xc]
403be700  cpy r1,r4
403be704  stmib sp,{r0,r12}
403be708  adr r0,0x403be9d4
403be70c  str lr,[sp,#0x0]
403be710  bl 0x4067cd44
403be714  add r4,r4,#0x1
403be718  cmp r4,r5
403be71c  blt 0x403be6ac
403be720  cpy r0,r6
403be724  bl 0x40683358
403be728  adr r0,0x403bea10
403be72c  bl 0x4067cd44
403be730  add sp,sp,#0x180
403be734  mov r0,#0x0
403be738  ldmia sp!,{r4,r5,r6,r7,r8,pc}
403be73c  stmib sp,{r0,lr}
403be740  str r1,[sp,#0xc]
403be744  cpy r1,r4
403be748  str r12,[sp,#0x10]
403be74c  ldr r0,[r7,r3,lsl #0x2]
403be750  str r0,[sp,#0x0]
403be754  adr r0,0x403bea34
403be758  bl 0x4067cd44
403be75c  b 0x403be714
