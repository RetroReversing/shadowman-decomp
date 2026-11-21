typedef struct { u8 pad0[0x54]; u8 cnt; u8 pad1[0x3C]; u16 flag; u16 idx; } S;
extern S *D_8007AFF8;
extern u8 D_80031EB0[];
void func_8026F6BC(s32);

void func_8027D8F4(void) {
    u8 *p = D_80031EB0;
    if ((s32)(--D_8007AFF8->cnt << 24) <= 0) {
        D_8007AFF8->cnt = p[D_8007AFF8->idx];
        if ((s8)D_8007AFF8->cnt != -1) {
            s32 a;
            D_8007AFF8->idx++;
            if (D_8007AFF8->flag == 0) {
                D_8007AFF8->flag = 1;
                a = 0x24;
            } else {
                D_8007AFF8->flag = 0;
                a = 0x27;
            }
            func_8026F6BC(a);
        }
    }
}
