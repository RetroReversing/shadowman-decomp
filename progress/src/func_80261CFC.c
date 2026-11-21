typedef struct { u8 pad[0x18]; s32 k; } S;
extern s32 D_80074BB0;
s32 func_8026E2F4(s32);
s32 func_80261DB8(S *, s32);

s32 func_80261CFC(S *a0) {
    if (D_80074BB0 == 7) {
        switch (a0->k) {
        case 1:
            if (!func_8026E2F4(0x17)) return func_80261DB8(a0, 0x27);
            break;
        case 2:
            if (!func_8026E2F4(0x18)) return func_80261DB8(a0, 0x27);
            break;
        case 3:
            if (!func_8026E2F4(0x19)) return func_80261DB8(a0, 0x27);
            break;
        case 4:
        case 5:
        default:
            return 0;
        }
    }
    return func_80261DB8(a0, 0x28);
}
