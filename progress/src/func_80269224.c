typedef struct {
    f32 x, y;
    s32 pad[2];
    s32 *p10;
    s32 pad2[0x14];
    f32 f68;
} S75AA8;
extern S75AA8 D_80075AA8;
extern void func_8026A5E8(f32, f32, s16, s16, s32, s32, u8);

void func_80269224(void) {
/* Inferred frame reservation; original purpose unknown. */
char __repair_stack_padding[8];
    func_8026A5E8(D_80075AA8.x, D_80075AA8.y, 0x40, 0x40, *D_80075AA8.p10 + 0x200, *D_80075AA8.p10, ((u8 *)&D_80075AA8)[0x6B]);
}
