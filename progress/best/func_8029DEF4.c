/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern int D_80036B1C;
extern int D_80036B20;
extern int D_80036B24;
s32 func_80260850();
void *func_80296BC0();
s32 func_80296CE0();
s32 func_8029DA00();
void *func_8029E000();
extern char D_80036C10[];

void *func_8029DEF4(s32 arg0, f32 arg1, s32 arg2) {
    void *var_a0;
    void *var_s0;

    var_s0 = func_80296BC0(arg0, 0, D_80036C10);
    var_a0 = var_s0;
    if (var_s0 == NULL) {
        func_80296CE0(1);
        var_s0 = func_80296BC0(arg0, NULL, D_80036C10);
        var_a0 = var_s0;
        if (var_s0 == NULL) {
            return func_8029E000(var_a0);
        }
    }
    (*(s32 *)((char *)(var_s0) + 0x4C)) = arg1;
    (*(s32 *)((char *)(var_s0) + 0x58)) = 0;
    (*(s32 *)((char *)(var_s0) + 0x5C)) = 0;
    do { func_80260850(var_a0, arg2); } while (0);
    (*(s32 *)((char *)(var_s0) + 0x58)) = 0;
    (*(u8 *)((char *)(var_s0) + 0x73)) = 0;
    (*(f32 *)((char *)(var_s0) + 0x50)) = (f64) *(f32 *)0x215D28;
    (*(s32 *)((char *)(var_s0) + 0x24)) = (s32) D_80036B1C;
    (*(s32 *)((char *)(var_s0) + 0x28)) = (s32) D_80036B20;
    (*(s32 *)((char *)(var_s0) + 0x2C)) = (s32) D_80036B24;
    (*(u8 *)((char *)(var_s0) + 0x69)) = 0xA;
    (*(u8 *)((char *)(var_s0) + 0x68)) = 0xC8;
    (*(s32 *)((char *)(var_s0) + 0xC)) = 0;
    (*(u8 *)((char *)(var_s0) + 0x6A)) = 0xFF;
    (*(f32 *)((char *)(var_s0) + 0x60)) = (f32) *(f32 *)0x215D30;
    (*(u8 *)((char *)(var_s0) + 0x72)) |= 4;
    func_8029DA00(var_s0, (*(s32 *)((char *)(var_s0) + 0x4C)));
    return var_s0;
}
