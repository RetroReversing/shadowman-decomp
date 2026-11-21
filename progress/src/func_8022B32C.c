extern s32 func_80116EB0(void *, void *, s32);
extern u8 D_8002D1B4[];
extern u8 D_8005901C[];
extern struct { u8 pad[0x2E]; s8 a; u8 pad2; s16 b; } D_80059738;
extern u16 D_80075534;

void func_8022B32C(void *arg0) {
    if (!(D_80075534 & 4)) {
        D_80059738.a = 1;
        D_80059738.b = (s32)*(f32 *)((u8 *)arg0 + 0xC);
        func_80116EB0(D_8005901C, D_8002D1B4, 1);
    }
}
