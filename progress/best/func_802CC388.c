typedef struct 
{
  s32 x;
  s32 y;
  s32 z;
} V3i;
extern V3i D_2186F8;
extern f32 D_218704;
extern s32 D_8005E6E8;
extern s32 D_80072C18;
extern f32 D_800754F0;
extern char D_80075518[];
extern f32 D_80075590;
u32 func_80113AD0(void);
void func_8011BA20(s32, void *, s32, s32);
void func_8023E724(void *, s32, void *, void *);
void func_802978E4(void *, void *, s32);
void func_802CC388(u32 arg0)
{
  V3i a;
  struct 
  {
    f32 x;
    f32 y;
    f32 z;
  } b;
  if ((func_80113AD0() % arg0) == 0)
  {
    a = D_2186F8;
    func_8011BA20(arg0, &b, 0, 0xC);
    func_8023E724(D_80075518, D_80072C18, &b, &b);
    if (((D_800754F0 + (D_80075590 - b.y)) - D_218704) > 0.0f)
    {
      if (D_218704)
      {
        func_802978E4(&b, &a, D_8005E6E8);
      }
      else
      {
        func_802978E4(&b, &a, D_8005E6E8);
      }
    }
  }
}

