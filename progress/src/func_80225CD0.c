extern void func_80113B00(void *, f32, f32, s32);
extern s32 D_800591A0;
extern s16 D_80059200[];

void func_80225CD0(void) {
    s16 *__base_D_80059200;
    s32 i;
    s16 *p;
    f32 f;
    s16 v = -1;
    i = 0xFF;
    __base_D_80059200 = D_80059200;
    p = __base_D_80059200 + 0xFF;
    do {
        *p = v;
        i--;
        p--;
    } while (i >= 0);
    f = *(f32 *)0x2001B0;
    func_80113B00(&D_800591A0, f, f, 0xBE800000);
}
