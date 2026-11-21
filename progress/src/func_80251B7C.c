typedef struct { s32 a, b, c; } V3;
void func_80251B7C(void *arg0) {
    char *a1 = *(char **)((char *)arg0 + 8);
    char *a0 = *(char **)(a1 + 0x6C);
    if (*(s32 *)a0 == 2) {
        *(s32 *)(a0 + 4) = (s32) *(f32 *)(a1 + 0x28);
        *(s32 *)(a0 + 8) = (s32) *(f32 *)(a1 + 0x2C);
        *(s32 *)a0 = 3;
        *(s32 *)(a0 + 0x18) = 0;
        *(V3 *)(a0 + 0xC) = *(V3 *)(a1 + 0x24);
    }
}
