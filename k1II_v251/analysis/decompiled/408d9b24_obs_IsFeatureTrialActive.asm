408d9b24  cmp r1,#0x14
408d9b28  bcs 0x408d9b44
408d9b2c  add r1,r1,r1, lsl #0x1
408d9b30  add r0,r0,r1, lsl #0x2
408d9b34  ldrb r0,[r0,#0x18]
408d9b38  cmp r0,#0x0
408d9b3c  movne r0,#0x1
408d9b40  bxne lr
408d9b44  mov r0,#0x0
408d9b48  bx lr
