typedef struct { char pad[0x44]; u32 flags; char pad2[0x38]; f32 f80; } S8007;
extern S8007 *D_8007AFF8;
extern u16 func_80276148(void);
extern f32 func_80272260(void);
extern void func_802776D8(s32);

s32 func_8026EFD4(void) {
    f32 f;
    if (func_80276148() < 5) return 0;
    f = func_80272260();
    if (f < *(f32 *)0x213EB0 || *(f32 *)0x213EB4 < f) {
        if (D_8007AFF8->f80 < *(f32 *)0x213EB8) {
            D_8007AFF8->flags |= 0x40;
            func_802776D8(5);
            return 1;
        }
    }
    return 0;
}
