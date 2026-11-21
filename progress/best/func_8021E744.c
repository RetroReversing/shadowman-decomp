/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern unsigned short D_80058E0A;
extern int D_80058E08;
extern char D_80056A00[];
extern void *D_80058E04;
extern s32 D_80058E0C;

void func_8021E744(void *arg0) {
    void *var_v0;
    void *temp_a0;
    char *__base_D_80056A00;

    var_v0 = D_80058E04;
    if (var_v0 != NULL) {
loop_1:
        if (var_v0 != arg0) {
            var_v0 = (*(void **)((char *)(var_v0) + 8));
            if (var_v0 != NULL) {
                goto loop_1;
            }
        }
        if (var_v0 == NULL) {
            /* Duplicate return node #4. Try simplifying control flow for better match */
            temp_a0 = D_80058E04;
            D_80058E04 = arg0;
            (*(void **)((char *)(arg0) + 8)) = temp_a0;
            (*(s32 *)((char *)(arg0) + 0)) &= 0xFF80FFFF;
            (*(u16 *)((char *)(arg0) + 2)) = (u16) D_80058E0A;
            D_80058E0C += 7;
            __base_D_80056A00 = D_80056A00;
            (*(s32 *)((char *)(((D_80058E08 * 0x18) + __base_D_80056A00)) + 0x14)) = 0;
            return;
        }
        (*(void **)((char *)(((D_80058E08 * 0x18) + __base_D_80056A00)) + 0x14)) = (void *) (((*(u16 *)((char *)(arg0) + 2)) * 0x18) + __base_D_80056A00);
        (*(u16 *)((char *)(arg0) + 2)) = (u16) D_80058E0A;
        return;
    }
    temp_a0 = D_80058E04;
    D_80058E04 = arg0;
    (*(void **)((char *)(arg0) + 8)) = temp_a0;
    (*(u16 *)((char *)(arg0) + 2)) = (u16) D_80058E0A;
    (*(s32 *)((char *)(arg0) + 0)) &= 0xFF80FFFF;
    D_80058E0C += 7;
    (*(s32 *)((char *)(((D_80058E08 * 0x18) + __base_D_80056A00)) + 0x14)) = 0;
}
