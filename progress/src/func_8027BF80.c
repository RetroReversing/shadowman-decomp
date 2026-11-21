/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

f32 func_802712B0(f32, f32);                        /* extern */
f32 func_80272260(s32 *, void *);               /* extern */
s32 func_802776D8(u8);                          /* extern */
extern u8 D_212078[];
extern void *D_8006A4FC;
extern void *D_8007AFF8;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x20, 0x24], gap at: 0x18. */
void func_8027BF80(void) {
    u8 *__base_D_212078;
    void **__base_D_8007AFF8;
    f32 temp_fs0;
    f32 temp_fs0f;

    __base_D_8007AFF8 = &D_8007AFF8;
    func_802776D8((*(u8 *)((char *)((*__base_D_8007AFF8)) + 0x3B)));
    __base_D_212078 = D_212078;
    temp_fs0 = (f32) (*(u16 *)((char *)((*__base_D_8007AFF8)) + 0x2C));
    temp_fs0f = (f32) (*(s8 *)((char *)((((*(u8 *)((char *)((*__base_D_8007AFF8)) + 0x40)) * 0x6C) + __base_D_212078)) + 0xD));
    if (temp_fs0f < func_802712B0(func_80272260(__base_D_212078, (*__base_D_8007AFF8)), temp_fs0)) {
        (*(f32 *)((char *)(D_8006A4FC) + 0x1C)) = (f32) (*(u16 *)((char *)((*__base_D_8007AFF8)) + 0x2C));
    }
}
