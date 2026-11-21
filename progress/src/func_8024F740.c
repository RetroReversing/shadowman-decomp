s32 func_80113AD0();
extern u8 D_8006A820[];

void func_8024F740(void) {
    u8 *p = D_8006A820;
    p[0x20] = ((func_80113AD0() & 0x3F) == 0x2A) ? 0x20 : 0xCD;
}
