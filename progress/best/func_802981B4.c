/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern float D_8007DB8C;
extern int D_80036B1C;
extern int D_80036B20;
extern int D_80036B24;
s32 func_80113AD0();
f32 func_8022EC3C();
void *func_80296BC0();
extern char D_80036D80[];
extern f32 D_8005E6E8;
extern char D_8007DB78[];

void func_802981B4(void *arg0) {
    float *__base_D_8007DB8C;
    f32 temp_fs0;
    f32 temp_fv0;
    long temp_ret;
    void *temp_v0;

    __base_D_8007DB8C = &D_8007DB8C;
    (*(f32 *)((char *)(arg0) + 0)) += ((*(f32 *)((char *)(arg0) + 0x18)) * (*__base_D_8007DB8C));
    (*(f32 *)((char *)(arg0) + 4)) += ((*(f32 *)((char *)(arg0) + 0x1C)) * (*__base_D_8007DB8C));
    (*(f32 *)((char *)(arg0) + 8)) += ((*(f32 *)((char *)(arg0) + 0x20)) * (*__base_D_8007DB8C));
    (*(f32 *)((char *)(arg0) + 0x24)) += (*(f32 *)((char *)(arg0) + 0x30));
    (*(f32 *)((char *)(arg0) + 0x30)) = (f32) ((*(f32 *)((char *)(arg0) + 0x30)) * *(f32 *)0x215984);
    (*(f32 *)((char *)(arg0) + 0x1C)) -= ((*__base_D_8007DB8C) * *(f32 *)0x215980);
    if ((*(f32 *)((char *)(arg0) + 4)) < D_8005E6E8) {
        temp_v0 = func_80296BC0(arg0, 0, D_80036D80);
        if (temp_v0 != NULL) {
            temp_ret = func_80113AD0();
            temp_fv0 = (f32) ((temp_ret % 40) + 0x46);
            (*(f32 *)((char *)(temp_v0) + 0x50)) = temp_fv0;
            (*(f32 *)((char *)(temp_v0) + 0x54)) = temp_fv0;
            (*(f32 *)((char *)(temp_v0) + 0xC)) = (f32) (func_8022EC3C(*(f32 *)0x215988, temp_ret / 40) + *(f32 *)0x21598C);
            temp_fs0 = *(f32 *)0x215990;
            (*(s32 *)((char *)(temp_v0) + 0x24)) = (s32) D_80036B1C;
            (*(s32 *)((char *)(temp_v0) + 0x28)) = D_80036B20;
            (*(s32 *)((char *)(temp_v0) + 0x2C)) = (s32) D_80036B24;
            (*(f32 *)((char *)(temp_v0) + 0x4C)) = (f32) (func_8022EC3C(temp_fs0) + temp_fs0);
        }
        (*(f32 *)((char *)(arg0) + 0x50)) = 0.0f;
        (*(f32 *)((char *)(arg0) + 0x54)) = 0.0f;
    }
}
