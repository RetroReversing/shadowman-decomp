typedef struct Inner {
    s32 state;
    s32 pad4[3];
    s32 f10;
    u8 f14;
    u8 pad15[3];
    u32 f18;
} Inner;
typedef struct Mid {
    u8 pad0[0x68];
    s32 f68;
    Inner *f6C;
} Mid;
typedef struct Obj {
    u8 pad0[8];
    Mid *mid;
    u8 padC[8];
    s16 f14;
} Obj;
void func_8026E82C(void *, s32);
void func_8026E9C4(void *, s32);
void func_80109318(s32, void *, s32);

void func_80255E40(Obj *arg0) {
    Mid *m = arg0->mid;
    Inner *a = m->f6C;

    if (a->f14 == 0 && (a->f18 & 8) && (a->state == 1 || a->state == 4)) {
        if (a->state != 4) {
            a->f10 = 0;
        }
        a->state = 0xD;
        if (m->f68 == 0) {
            func_8026E82C((u8 *)a + 4, 2);
        } else {
            func_8026E9C4(m, 2);
        }
        switch (arg0->f14) {
        case 0xF7:
            func_80109318(0x18A, (u8 *)m + 0x24, 0);
            break;
        case 0x175:
            func_80109318(0x15E, (u8 *)m + 0x24, 0);
            break;
        }
    }
}
