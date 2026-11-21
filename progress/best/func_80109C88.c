/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void *func_801043F8();
s32 func_80239398();
s32 func_80261408();
extern char D_1006F0[];
extern char D_109AD4[];

typedef struct { s32 w[6]; } __repair_words6;
void func_80109C88(void *arg0) {
    void *temp_v0;

    temp_v0 = func_801043F8(0x24, 2, 0);
    (*(s8 *)((char *)(temp_v0) + 0)) = 0;
    (*(s16 *)((char *)(temp_v0) + 2)) = (s16) (s8) *((*(s32 *)((char *)(arg0) + 0x58)) + D_1006F0);
    (*(u8 *)((char *)(temp_v0) + 4)) = (u8) (*(u8 *)((char *)(arg0) + 0x57));
    (*(u8 *)((char *)(temp_v0) + 5)) = (u8) (*(u8 *)((char *)(arg0) + 0x53));
    (*(s16 *)((char *)(temp_v0) + 6)) = 0x7F;
    (*(s16 *)((char *)(temp_v0) + 8)) = 0x32;
    (*(__repair_words6 *)((char *)(temp_v0) + 0xC)) = *(__repair_words6 *) ((s8 *) arg0 + 0x10);
    (*(s8 *)((char *)(temp_v0) + 1)) = 0;
    if ((*(s32 *)((char *)(arg0) + 0x44)) != 0) {
        (*(s8 *)((char *)(temp_v0) + 0)) = 1;
    }
    func_80239398(*(s32 *)(((*(s32 *)((char *)(arg0) + 0xC)) * 4) + func_80261408()), temp_v0, 0, D_109AD4, 0x100);
}
