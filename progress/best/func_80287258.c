u16 func_801043F8(s32, s32, s32);
void *func_8010B5CC(s32, s32);
s32 func_80234B70(s32 *, s32 *);
s32 func_8026F6BC(s32);
s32 func_8027003C();
s32 func_8027006C();
s32 func_80270090(s32);
s32 func_8027206C(s32, s32);
extern s32 D_28702C;
extern s32 D_80034758;
extern s32 D_80034B4C;
extern s32 D_80034B84;
extern s32 D_80034BB0;
extern volatile unsigned char D_80045930;
extern s16 D_8004EC2A;
extern s8 D_8004EC85;
extern void *D_8007AFF8;
extern s32 D_8007B018;
extern void *D_8007B1E0;
extern s32 D_8007B1E4;
inline static char *inline_fn(void *arg0)
{
  return (char *) arg0;
}

void func_80287258(s32 arg0)
{
  u16 temp_v0;
  volatile unsigned short temp_v0_2;
  void *temp_v0_3;
  func_8027003C();
  *((s32 *) (inline_fn(&D_80045930) + 0x6C)) = arg0;
  *((s32 *) (((char *) (&D_80045930)) + 0x70)) = (s32) (*((s32 *) (inline_fn(D_8007AFF8) + 0x10C)));
  func_8027206C(5, 0);
  *((s32 *) (inline_fn(D_8007AFF8) + 0x44)) = (s32) ((*((s32 *) (((char *) D_8007AFF8) + 0x44))) | 0x0200208A);
  temp_v0 = func_801043F8(0x174, 2, 0);
  *((u16 *) (inline_fn(D_8007AFF8) + 0x94)) = temp_v0;
  ;
  *((s16 *) (((char *) D_8007AFF8) + 0x92)) = (s16) (temp_v0 >> 0x10);
  temp_v0_3 = func_8010B5CC(temp_v0 & 0xFFFF, temp_v0_2 & 0xFFFF);
  D_8007B1E0 = temp_v0_3;
  *((s8 *) (inline_fn(temp_v0_3) + 0)) = 5;
  func_80270090(2);
  D_8004EC2A = -1;
  D_8004EC85 = 0;
  *((s8 *) (inline_fn(D_8007AFF8) + 0x3C)) = 4;
  *((s16 *) (((char *) D_8007AFF8) + 0x96)) = 0;
  func_8026F6BC(0x38);
  func_8026F6BC(0x1E);
  *((u16 *) (inline_fn(D_8007AFF8) + 0x9E)) = (u16) (*((u16 *) (inline_fn(D_8007AFF8) + 0x5A)));
  *((s16 *) (((char *) temp_v0_3) + 0x28)) = -3;
  *((void **) (((char *) temp_v0_3) + 0x104)) = (void *) (temp_v0_3 + 0x74);
  *((s8 *) (inline_fn(temp_v0_3) + 0x56)) = 0x38;
  *((s32 **) (inline_fn(temp_v0_3) + 0x68)) = &D_80034758;
  *((s8 *) (((char *) temp_v0_3) + 0x57)) = 0x1E;
  *((s8 *) (inline_fn(temp_v0_3) + 0x65)) = 5;
  *((s32 *) (inline_fn(temp_v0_3) + 0x78)) = (s32) (*((s32 *) (inline_fn(temp_v0_3) + 0x7C)));
  *((s32 **) (inline_fn(temp_v0_3) + 0x70)) = &D_80034B4C;
  *((s32 *) (((char *) temp_v0_3) + 0x130)) = -1;
  *((s32 *) (((char *) temp_v0_3) + 0x134)) = 0;
  *((s32 *) (inline_fn(temp_v0_3) + 0x3C)) = 0;
  *((s32 *) (inline_fn(temp_v0_3) + 0x6C)) = (s32) (*(((*((s16 *) 0x212D88)) * 4) + (&D_8007B018)));
  func_80234B70(&D_80034B84, &D_8007B018);
  *((s32 **) (inline_fn(temp_v0_3) + 0x120)) = &D_80034BB0;
  *((s32 **) (inline_fn(temp_v0_3) + 0x124)) = &D_28702C;
  *((s8 *) (inline_fn(temp_v0_3) + 0x4A)) = 8;
  *((s8 *) (((char *) temp_v0_3) + 0x4C)) = 0xC;
  *((s8 *) (((char *) temp_v0_3) + 0x4B)) = 0x1E;
  D_8007B1E4 = 0;
  func_8027006C();
}

