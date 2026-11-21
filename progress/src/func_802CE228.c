typedef struct { u16 a; u16 flags; } E;
typedef struct { char p0[4]; s16 idx; char p1[0x2A]; E *tbl; } S;
extern s32 D_8002D424;
extern S D_80075518;
extern char D_80075568[];
extern u8 D_8007DBC1;
s32 func_8023DF7C(void *, void *, s32, s32, s32, s32);

void func_802CE228(void) {
    if (D_8007DBC1 == 0) {
        if (*(u16 *)((char *)D_80075518.tbl + D_80075518.idx * 0x38 + 4) & 4) {
            if (D_8002D424 & 0x200) {
                func_8023DF7C(D_80075568, &D_80075518, 0xE5, 0xA, 0x14, 1);
            }
        } else if (D_8002D424 & 0x200) {
            func_8023DF7C(D_80075568, &D_80075518, 0xE3, 0xA, 0, 1);
        }
    }
}
