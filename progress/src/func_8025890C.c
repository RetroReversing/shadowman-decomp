void func_8025FEE8(s32);
void func_8026070C(void);
void func_8026E26C(s32);

void func_8025890C(void *arg0) {
    void *temp_s0;
    void *temp_v1;

    temp_s0 = *(void **)(*(char **)((char *)arg0 + 8) + 0x6C);
    if (*(s32 *)temp_s0 == 3) {
        if (*(s16 *)((char *)arg0 + 0x14) == 0x160) {
            func_8025FEE8(0x1E);
        } else {
            func_8026070C();
        }
        func_8026E26C(*(s32 *)((char *)temp_s0 + 0xC) + 0x77);
        temp_v1 = *(void **)((char *)temp_s0 + 0x14);
        *(u16 *)((char *)temp_v1 + 0x7E) |= 0x400;
        *(s16 *)(*(char **)((char *)temp_s0 + 0x14) + 0x78) = 1;
        *(s32 *)temp_s0 = 4;
    }
}
