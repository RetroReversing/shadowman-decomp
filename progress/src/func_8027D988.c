typedef struct { char pad[0x1C]; float f1C; } T;
typedef struct { char pad[0x2C]; unsigned short f2C; } S;
extern S *D_8007AFF8;
extern T *D_8006A4FC;
extern void func_80270090(unsigned char);
extern void func_80270E0C(float);
extern float func_802712B0(float, float);
int func_8027D988(int arg0) {
    float b = (float)D_8007AFF8->f2C;
    if (func_802712B0(D_8006A4FC->f1C, b) < *(float *)0x21475C) {
        func_80270090(arg0);
        return 1;
    }
    func_80270E0C(*(float *)0x214760);
    return 0;
}
