extern u8 D_8007E680[];

void func_802DCFB4(s32 arg0, u8 *arg1) {
    struct { u8 b[6]; } sp;
    u8 *src;
    s32 i;
    u8 flag;

    src = D_8007E680;
    for (i = 0; i < arg0; i++) {
        src++;
    }
    sp = *(typeof(sp) *)src;
    flag = (sp.b[1] & 0xC0) >> 4;
    arg1[3] = flag;
    if (flag == 0) {
        *(s16 *)arg1 = (s16)(sp.b[3] | (sp.b[4] << 8));
        arg1[2] = sp.b[5];
    }
}
