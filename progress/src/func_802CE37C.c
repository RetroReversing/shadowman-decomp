extern s32 D_8002D424;
extern u8 D_80075518[];
extern u8 D_8007558C[];
void func_8026B618(s32, s32);
void func_8026D244(void);
void func_802A6548(void *, s32);
void func_8023DF7C(void *, void *, s32, s32, s32, s32);

typedef struct { u8 pad[4]; u16 flags; u8 pad2[0x32]; } Ent;
typedef struct { u8 pad[4]; s16 idx; u8 pad2[0x2A]; Ent *ents; } Obj;

void func_802CE37C(void) {
    func_8026B618(1, 0);
    if (D_8002D424 & 0x200) {
        func_8026B618(1, 1);
        func_8026D244();
        func_802A6548(D_8007558C, 4);
        if (((Obj *)D_80075518)->ents[((Obj *)D_80075518)->idx].flags & 4) {
            func_8023DF7C(D_8007558C - 0x24, D_80075518, 0xC7, 0xA, 0, 1);
        } else {
            func_8023DF7C(D_8007558C - 0x24, D_80075518, 0xFF, 0xA, 0, 1);
        }
    }
}
