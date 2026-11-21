typedef struct { char pad[8]; s16 v; char pad2[0x34-0xA]; } E;
typedef struct { char pad[0x44]; char *p44; } S;
typedef struct { char pad[0x14C]; f32 f; } T;
extern E D_209890[];
extern s32 D_8002D420;
extern s32 D_80074BB0;
extern char D_80075518[];
extern char D_80075568[];
#define D_218824 (*(f32 *)0x218824)
void func_80268E6C(s32, s32);
s32 func_80268AF8(s32);
void func_8026B618(s32, s32);
void func_8023DF7C(char *, char *, s32, s32, s32, s32);

void func_802CDDF0(void) {
    func_80268E6C(4, -0x2710);
    func_8026B618(0, 0);
    if (D_209890[D_80074BB0].v == 0) {
        if ((D_8002D420 & 0x900) == 0x100) {
            ((T *)((S *)D_80075518)->p44)->f = D_218824;
            func_8023DF7C(D_80075568, D_80075518, 0xD7, 0xA, 0, 0);
        }
    } else if (D_8002D420 & 0x100) {
        if (func_80268AF8(3) != 0) {
            func_8023DF7C(D_80075568, D_80075518, 0xDD, 0xA, 0, 0);
            return;
        }
        ((T *)((S *)D_80075518)->p44)->f = D_218824;
        func_8023DF7C(D_80075568, D_80075518, 0xDE, 0xA, 0, 0);
    }
}
