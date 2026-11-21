extern u8 D_8002E088[];

void func_8025B40C(void *arg0) {
    s32 var_a2;
    u32 i;
    u32 idx;
    u8 *base;
    var_a2 = 0xA;
    idx = (u16)(*(u16 *)((u8 *)arg0 + 0x14) - 0xB0);
    base = *(u8 **)(*(u8 **)(*(u8 **)((u8 *)arg0 + 8) + 0x64) + 0x14);
    for (i = 0; i < 0xA; i++) {
        if (i == idx) {
            var_a2 = 0;
        }
        base[D_8002E088[i] * 0x12 + 2] = var_a2 + i;
    }
}
