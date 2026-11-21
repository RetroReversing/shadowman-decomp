/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80248210(void *);                      /* extern */
s32 func_80266D74(s32, s32 *);          /* extern */
extern s32 D_24F7E0;
extern s32 D_8007338C;

void func_8024F84C(void *arg0) {
    if ((*(s16 *)((char *)(arg0) + 0x14)) == 0x1C5) {
        func_80266D74(2, &D_24F7E0);
        D_8007338C = 0x1A6;
    }
    func_80248210(arg0);
}
