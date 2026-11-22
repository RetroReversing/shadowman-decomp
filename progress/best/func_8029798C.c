s32 func_8021E990(f32, f32, u8, s32, f32, f32, f32, f32, s32, s32, s32, s32, s32);
s32 func_80296738(s32);
s32 func_80297748(void *, s32);
s32 func_80297AF4(void *);
extern s32 D_8002C1B0;
extern s32 D_80036B28;
extern s32 D_8007DB78;
typedef struct 
{
  f32 v;
} Field_f32;
typedef struct 
{
  s32 v;
} Field_s32;
void func_8029798C(void *arg0)
{
  f32 __repair_fzero = 0.0f;
  s32 *__base_D_8007DB78;
  f32 __repair_cmp_l;
  f32 __repair_cmp_r;
  f32 temp_fv0f;
  register f32 temp_fv1;
  register s32 temp_v0;
  __base_D_8007DB78 = &D_8007DB78;
  ((Field_f32 *) (((char *) arg0) + 0))->v = (f32) (((Field_f32 *) (((char *) arg0) + 0))->v + (((Field_f32 *) (((char *) arg0) + 0x18))->v * ((Field_f32 *) (((char *) __base_D_8007DB78) + 0x14))->v));
  ((Field_f32 *) (((char *) arg0) + 4))->v = (f32) (((Field_f32 *) (((char *) arg0) + 4))->v + (((Field_f32 *) (((char *) arg0) + 0x1C))->v * ((Field_f32 *) (((char *) __base_D_8007DB78) + 0x14))->v));
  ((Field_f32 *) (((char *) arg0) + 0x4C))->v = (f32) (((Field_f32 *) (((char *) arg0) + 0x4C))->v + (((Field_f32 *) (((char *) __base_D_8007DB78) + 0x14))->v * (*((f32 *) 0x215924))));
  ((Field_f32 *) (((char *) arg0) + 8))->v = (f32) (((Field_f32 *) (((char *) arg0) + 8))->v + (((Field_f32 *) (((char *) __base_D_8007DB78) + 0x14))->v * ((Field_f32 *) (((char *) arg0) + 0x20))->v));
  temp_fv1 = *((f32 *) 0x21592C);
  ((Field_f32 *) (((char *) arg0) + 0x1C))->v = (f32) (((Field_f32 *) (((char *) arg0) + 0x1C))->v + (((Field_f32 *) (((char *) __base_D_8007DB78) + 0x14))->v * (*((f32 *) 0x215928))));
  if (temp_fv1 < ((Field_f32 *) (((char *) arg0) + 0x4C))->v)
  {
    ((Field_f32 *) (((char *) arg0) + 0x4C))->v = temp_fv1;
  }
  func_80297748(arg0, ((Field_s32 *) (((char *) arg0) + 0x5C))->v);
  __repair_cmp_r = ((Field_f32 *) (((char *) arg0) + 4))->v;
  __repair_cmp_l = ((Field_f32 *) (((char *) arg0) + 0x34))->v;
  if (__repair_cmp_l < __repair_cmp_r)
  {
    ((Field_f32 *) (((char *) arg0) + 0x50))->v = 0.0f;
    func_80297AF4(arg0);
    ((Field_f32 *) (((char *) arg0) + 0x54))->v = 0.0f;
  }
  temp_v0 = func_80296738(0x1B);
  D_8002C1B0 = temp_v0;
  if (temp_v0 != 0)
  {
    if (arg0)
    {
      temp_fv0f = *((f32 *) 0x215930);
      func_8021E990(((Field_f32 *) (((char *) arg0) + 0))->v, ((Field_f32 *) (((char *) arg0) + 4))->v, *((u8 *) (((char *) (&D_80036B28)) + 0)), temp_v0, ((Field_f32 *) (((char *) arg0) + 8))->v, temp_fv0f, temp_fv0f, ((Field_f32 *) (((char *) arg0) + 0x4C))->v, (s32) (*((u8 *) (((char *) (&D_80036B28)) + 0))), (s32) (*((u8 *) (((char *) (&D_80036B28)) + 1))), (s32) (*((u8 *) (((char *) (&D_80036B28)) + 2))), 0xFF, temp_v0);
    }
    else
    {
      temp_fv0f = *((f32 *) 0x215930);
      func_8021E990(((Field_f32 *) (((char *) arg0) + 0))->v, ((Field_f32 *) (((char *) arg0) + 4))->v, *((u8 *) (((char *) (&D_80036B28)) + 0)), temp_v0, ((Field_f32 *) (((char *) arg0) + 8))->v, temp_fv0f, temp_fv0f, ((Field_f32 *) (((char *) arg0) + 0x4C))->v, (s32) (*((u8 *) (((char *) (&D_80036B28)) + 0))), (s32) (*((u8 *) (((char *) (&D_80036B28)) + 1))), (s32) (*((u8 *) (((char *) (&D_80036B28)) + 2))), 0xFF, temp_v0);
    }
  }
}

