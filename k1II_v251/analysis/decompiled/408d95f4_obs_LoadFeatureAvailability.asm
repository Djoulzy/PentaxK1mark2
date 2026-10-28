408d95f4  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
408d95f8  sub sp,sp,#0x44
408d95fc  cpy r8,r3
408d9600  add r0,sp,#0x4
408d9604  cpy r5,r2
408d9608  cpy r6,r1
408d960c  mov r1,#0x40
408d9610  blx 0x40683cc4
408d9614  ldr r0,[0x408d9808]
408d9618  add r9,sp,#0x4
408d961c  adr r2,0x408d980c
408d9620  mov r3,#0xde
408d9624  adr r1,0x408d981c
408d9628  str r0,[sp,#0x0]
408d962c  mov r0,#0x1
408d9630  bl 0x4067ca30
408d9634  ldr r10,[0x408d983c]
408d9638  mov r4,#0x0
408d963c  add r7,r9,r4, lsl #0x2
408d9640  ldrb r0,[r10,r4]
408d9644  bl 0x408d94e0
408d9648  cpy r11,r0
408d964c  bl 0x40259718
408d9650  cmp r0,#0x0
408d9654  cpyne r0,r11
408d9658  blne 0x40259764
408d965c  add r4,r4,#0x1
408d9660  str r0,[r7,#0x0]
408d9664  cmp r4,#0x10
408d9668  ldrge r9,[0x408d9840]
408d966c  addge r7,sp,#0x4
408d9670  movge r4,#0x0
408d9674  blt 0x408d963c
408d9678  add r0,r9,r4, lsl #0x1
408d967c  ldrb r0,[r0,r5]
408d9680  cmp r0,#0x0
408d9684  bne 0x408d96b4
408d9688  and r0,r4,#0xff
408d968c  mov r1,r0, lsr #0x5
408d9690  ldr r10,[r7,r1,lsl #0x2]
408d9694  bl 0x408d9d7c
408d9698  tst r0,r10
408d969c  bne 0x408d96b4
408d96a0  add r0,r4,r4, lsl #0x1
408d96a4  add r0,r8,r0, lsl #0x2
408d96a8  ldrb r0,[r0,#0x8]
408d96ac  cmp r0,#0x0
408d96b0  beq 0x408d96b8
408d96b4  mov r0,#0x1
408d96b8  strb r0,[r6,r4]
408d96bc  add r4,r4,#0x1
408d96c0  cmp r4,#0x14
408d96c4  blt 0x408d9678
408d96c8  add sp,sp,#0x44
408d96cc  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
