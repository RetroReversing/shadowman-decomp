typedef struct { char pad[0x20C]; f32 f; } Inner;
typedef struct { char pad[0x44]; Inner *p; } S518;
typedef struct { char pad[8]; s16 v; char pad2[0x2A]; } Ent;
extern Ent D_209890[];
extern s32 D_8002D420;
extern s32 D_80074BB0;
extern S518 D_80075518;
extern char D_80075568[];
#define D_218820 (*(f32 *)0x218820)
void func_8023DF7C(void *, void *, s32, s32, s32, s32);
int func_80268AF8(int);
void func_80268E6C(s32, s32);
void func_8026B618(s32, s32);

void func_802CDCFC(void) {
    func_80268E6C(4, -0x2710);
    func_8026B618(1, 0);
    if (D_209890[D_80074BB0].v == 0) {
        if ((D_8002D420 & 0xA00) == 0x200) {
            D_80075518.p->f = D_218820;
            func_8023DF7C(D_80075568, &D_80075518, 0xCB, 10, 0, 1);
        }
    } else if (D_8002D420 & 0x200) {
        if (func_80268AF8(3) != 0) {
            func_8023DF7C(D_80075568, &D_80075518, 0xD1, 10, 0, 1);
            return;
        }
        D_80075518.p->f = D_218820;
        func_8023DF7C(D_80075568, &D_80075518, 0xD2, 10, 0, 1);
    }
}
