/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023B094();
s32 func_8023DF7C();
s32 func_8026E2F4();
s32 func_8027363C();
extern char D_2142E8[];
extern char D_2142F4[];
extern char D_800312D0[];
extern void *D_8006A4FC;
extern void *D_8007AFF8;
extern void *D_8007B0B0;
extern void *D_8007B0B4;

typedef struct { s32 w[2]; } __repair_words2;
typedef struct { unsigned char pad[4]; int value; } __repair_field_4;
typedef struct { unsigned char pad_0[144]; short field_90; unsigned char pad_92[8]; unsigned short field_9A; unsigned char pad_9C[10]; short field_A6; unsigned char pad_A8[100]; void * field_10C; } __repair_record_D_8007B0B0;
typedef struct { unsigned char pad_0[16]; short field_10; unsigned char pad_12[10]; unsigned short field_1C; } __repair_record_temp_a1;
void func_80277A34(void) {
    s32 sp18[3];
    register u32 sp28;
    s32 sp2C;
    s32 sp30;
    u16 temp_s1;
    void *temp_a1;
    

    if (func_8026E2F4(0x8A) == 0) {
        temp_s1 = (((__repair_record_D_8007B0B0*)D_8007B0B0)->field_9A);
        if (temp_s1 == 2) {
            (*(s32 **)((char *)((((__repair_record_D_8007B0B0*)D_8007B0B0)->field_10C)) + 0x34)) = D_800312D0;
            (*(s16 *)((char *)((((__repair_record_D_8007B0B0*)D_8007B0B0)->field_10C)) + 4)) = -1;
            (*(s16 *)((char *)((((__repair_record_D_8007B0B0*)D_8007B0B0)->field_10C)) + 2)) = -1;
            (*(s16 *)((char *)((((__repair_record_D_8007B0B0*)D_8007B0B0)->field_10C)) + 0)) = -1;
            func_8023DF7C(D_8007B0B4, (((__repair_record_D_8007B0B0*)D_8007B0B0)->field_10C), 1, 0xA, 0xA, (s32) temp_s1);
            temp_a1 = (((__repair_record_D_8007B0B0*)D_8007B0B0)->field_10C);
            (((__repair_record_D_8007B0B0*)D_8007B0B0)->field_90) = 1;
            (((__repair_record_temp_a1*)temp_a1)->field_1C) &= 0xFFFD;
            sp18[0] = (*(s32 *)((char *)(D_2142E8) + 0));
            sp18[1] = ((__repair_field_4 *)D_2142E8)->value;
            sp18[2] = (*(s32 *)((char *)(D_2142E8) + 8));
            sp28 = (*(s32 *)((char *)(D_2142F4) + 0));
            sp2C = ((__repair_field_4 *)D_2142F4)->value;
            sp30 = (*(s32 *)((char *)(D_2142F4) + 8));
            (*(s32 *)((char *)(D_8007B0B4) + 0x24)) = (s32) (*(s32 *)((char *)(D_2142E8) + 0));
            (*(__repair_words2 *)((char *)(D_8007B0B4) + 0x28)) = *(__repair_words2 *) ((s8 *) D_2142E8 + 0x4);
            (*(s32 *)((char *)(D_8007B0B4) + 0)) = (s32) (*(s32 *)((char *)(D_2142E8) + 0));
            ((__repair_field_4 *)D_8007B0B4)->value = (s32) ((__repair_field_4 *)D_2142E8)->value;
            (*(s32 *)((char *)(D_8007B0B4) + 8)) = (s32) (*(s32 *)((char *)(D_2142E8) + 8));
            (*(s32 *)((char *)(D_8007B0B4) + 0x18)) = (s32) (*(s32 *)((char *)(D_2142F4) + 0));
            (*(s32 *)((char *)(D_8007B0B4) + 0x1C)) = (s32) ((__repair_field_4 *)D_2142F4)->value;
            (*(s32 *)((char *)(D_8007B0B4) + 0x20)) = (s32) (*(s32 *)((char *)(D_2142F4) + 8));
            (*(s16 *)((char *)((*(void **)((char *)(D_8007B0B4) + 0x64))) + 0xC)) = 0;
            func_8023B094(D_8007B0B4, D_8007B0B4);
            D_8006A4FC = D_8007B0B4;
            (*(s16 *)((char *)((*(void **)((char *)(D_8007B0B4) + 0x64))) + 0xE)) = 0;
            temp_a1 = (*(void **)((char *)(D_8007B0B4) + 0x64));
            D_8007AFF8 = D_8007B0B0;
            (((__repair_record_temp_a1*)temp_a1)->field_10) = 0;
            func_8023B094(D_8007B0B4, temp_a1);
            (((__repair_record_D_8007B0B0*)D_8007B0B0)->field_A6) = 0x8C;
            (((__repair_record_D_8007B0B0*)D_8007B0B0)->field_9A) = temp_s1;
            if ((*(s8 *)((char *)(D_8007B0B4) + 0x71)) != 8) {
                func_8027363C((*(s32 *)((char *)(D_8007B0B4) + 0x88)), 8);
            }
        }
    }
}
