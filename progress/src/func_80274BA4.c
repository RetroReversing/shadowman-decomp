typedef struct { char pad[0x3B]; u8 f3B; char pad2[0x14]; s8 idx; } S;
extern S *D_8007AFF8;
extern void func_80271F88(s16, s16);
extern u8 func_80272100(u8);

s32 func_80274BA4(s32 arg0, s16 *arg1, u8 arg2) {
    if (D_8007AFF8->idx == 0) {
        func_80271F88(arg1[0], arg1[1]);
    }
    if (func_80272100(D_8007AFF8->f3B) == 1) {
        if (++D_8007AFF8->idx == arg2) {
            D_8007AFF8->idx = 0;
            return 1;
        }
        func_80271F88(arg1[D_8007AFF8->idx * 2], arg1[D_8007AFF8->idx * 2 + 1]);
    }
    return 0;
}
