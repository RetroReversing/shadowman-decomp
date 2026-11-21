typedef struct { f32 x, y, z; } Vec3f;
extern void func_8026E4E8(Vec3f *v, s32 a);
extern s32 func_80245684(void *a);
extern void func_80245614(void *a);
extern void func_80108AAC(s32 a, s32 b, s32 c);
extern void func_80107D8C(s32 a, s32 b, s32 c, s32 d);
extern void func_80274A3C(s32 a);

s32 func_802452B8(char *self) {
    char *obj = *(char **)(self + 0xC);
    if (obj == 0) return 1;
    {
        Vec3f *src = *(Vec3f **)(obj + 0x6C);
        Vec3f tmp;
        switch (*(s32 *)(self + 8)) {
        case 0:
            break;
        case 1:
            tmp = *src;
            func_8026E4E8(&tmp, 0x7F);
            *(s32 *)(self + 8) = 2;
            break;
        case 2:
            if (func_80245684(self) != 0) {
                if (*(s32 *)((char *)src + 0x44) & 0x10010000) {
                    func_80108AAC(0x65, 0x3F, 0x7FFF);
                    func_80107D8C(10, 0x38, 1, 0x7F);
                    func_80274A3C(*(s32 *)(obj + 0x6C));
                }
                *(s32 *)(self + 8) = 4;
            }
            break;
        case 3:
            func_80245614(self);
            break;
        }
    }
    return 1;
}
