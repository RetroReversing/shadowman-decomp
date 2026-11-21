/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80113AD0();
s32 func_802A7CD4();

typedef struct { s32 w[3]; } __repair_words3;
void func_802B5BD4(void *arg0) {
    func_802A7CD4();
    (*(u8 *)((char *)(arg0) + 0x49)) = 0xB4;
    (*(u8 *)((char *)(arg0) + 0x4A)) = 0xFF;
    (*(s8 *)((char *)(arg0) + 0x48)) = 0;
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) *(f32 *)0x216AF8;
    (*(s8 *)((char *)(arg0) + 0x51)) = 0;
    (*(u8 *)((char *)(arg0) + 0x50)) |= 1;
    (*(f32 *)((char *)(arg0) + 0x8C)) = (f32) (func_80113AD0() % 360);
    (*(__repair_words3 *)((char *)(arg0) + 0x60)) = *(__repair_words3 *) ((s8 *) arg0 + 0x54);
    (*(f32 *)((char *)(arg0) + 0x78)) = (f32) *(f32 *)0x216AFC;
    (*(s32 *)((char *)(arg0) + 0x7C)) = 0;
}
