extern s32 D_80027700[];
extern u8 D_8004EF60[];
extern u8 D_8007E680[];
extern u8 D_8004EE30;
extern u8 D_8004F060[];
void func_80116D80(s32, s32, s32);
u8 func_80115528(void *);
void func_80115764(void);
void func_801157D0(void);
void func_80115800(s32, void *);

typedef struct { u8 b[0x28]; } Blk;

u32 func_801144F0(s32 *a)
{
  Blk sp10;
  u8 *p = D_8007E680;
  s32 i;
  u32 r;

  if (D_80027700[a[2]] == 0)
    return 5;
  func_80115764();
  D_8004EE30 = 3;
  func_80115800(1, D_8004EF60 + (a[2] << 6));
  func_80116D80(a[1], 0, 1);
  func_80115800(0, p);
  func_80116D80(a[1], 0, 1);
  if (a[2] != 0)
  {
    for (i = 0; i < a[2]; i++)
      p++;
  }
  sp10 = *(Blk *)p;
  r = (sp10.b[2] & 0xC0) >> 4;
  if (r == 0 && func_80115528(D_8004F060) != sp10.b[0x26])
    r = 4;
  func_801157D0();
  return r;
}
