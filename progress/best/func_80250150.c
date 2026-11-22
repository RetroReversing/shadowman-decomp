s32 func_80109918(s32, s32, s32);
s32 func_80230EC0(s32 *, s32);
s32 func_80236A18(s32 *, s32 *, void *);
s32 func_80239A3C(f32);
s32 func_8023A0DC(s32, f32, f32, f32 *, s32 *);
s32 func_80250348();
s32 func_80263D48(s32 *);
extern s32 D_8002D390;
extern s32 D_8002DC88;
extern s32 D_8002DCA0;
extern s32 D_8002DCA4;
extern s32 D_8002DCB8;
extern s32 D_8004AEA0;
extern s32 D_80073370;
extern s32 D_80073380;
extern s32 D_80075568;
inline static char *inline_fn(s32 *arg0)
{
  return (char *) arg0;
}

void func_80250150(void *arg0)
{
  f32 __repair_fzero = 0.0f;
  s32 *__base_D_8002DC88;
  union 
  {
    unsigned char bytes[16];
    struct 
    {
      f32 value;
    } view_sp18;
    struct 
    {
      unsigned char pad[4];
      f32 value;
    } view_sp1C;
    struct 
    {
      unsigned char pad[8];
      f32 value;
    } view_sp20;
  } m2c_initial_frame;
  s32 *temp_s3;
  f32 temp_fa1;
  f32 temp_fs0f;
  s32 temp_v0;
  void *temp_s4;
  temp_s4 = *((void **) (inline_fn(arg0) + 8));
  __base_D_8002DC88 = &D_8002DC88;
  temp_s3 = __base_D_8002DC88 + 4;
  if ((*((s16 *) (inline_fn(arg0) + 0x16))) == 0)
  {
    temp_v0 = func_80230EC0(&D_8004AEA0, 0x135);
    D_8002DCA0 = temp_v0;
    D_8002DCB8 = temp_v0;
    *((s16 *) (inline_fn(arg0) + 0x16)) = (s16) (((u16) (*((s16 *) (inline_fn(arg0) + 0x16)))) + 1);
    func_80109918(temp_s4 + 0x24, 0x7F, 0x145);
    func_80250348();
    return;
  }
  func_80263D48(temp_s3);
  func_80263D48(&D_8002DCA4);
  *((f32 *) (inline_fn(temp_s4) + 0x24)) = (f32) (*((f32 *) (inline_fn(__base_D_8002DC88) + 4)));
  temp_fs0f = *((f32 *) 0x2031B0);
  *((f32 *) (inline_fn(temp_s4) + 0x28)) = (f32) (((*((f32 *) (inline_fn(temp_s3) + 4))) - (*((f32 *) 0x2031AC))) + temp_fs0f);
  *((f32 *) (inline_fn(temp_s4) + 0x2C)) = (f32) (*((f32 *) (inline_fn(temp_s3) + 8)));
  func_80236A18(temp_s3, &D_8002DCA4, temp_s4 + 0x18);
  *((f32 *) (inline_fn(&D_80075568) + 0x18)) = (f32) (*((f32 *) (inline_fn(temp_s4) + 0x18)));
  *((f32 *) (inline_fn(&D_80075568) + 0x1C)) = (f32) (*((f32 *) (inline_fn(temp_s4) + 0x1C)));
  *((f32 *) (inline_fn(&D_80075568) + 0x20)) = (f32) (*((f32 *) (inline_fn(temp_s4) + 0x20)));
  func_80239A3C(*((f32 *) (inline_fn(temp_s4) + 0x1C)));
  func_8023A0DC(0, *((f32 *) 0x2031B4), 170.0f, &m2c_initial_frame.view_sp18.value, &D_8002D390);
  temp_fa1 = *((f32 *) 0x2031B8);
  *((f32 *) (inline_fn(&D_80075568) + 0x24)) = (f32) ((*((f32 *) (inline_fn(__base_D_8002DC88) + 4))) + m2c_initial_frame.view_sp18.value);
  *((f32 *) (((char *) (&D_80075568)) + 0x2C)) = (f32) ((*((f32 *) (((char *) temp_s3) + 8))) + m2c_initial_frame.view_sp20.value);
  *((f32 *) (((char *) (&D_80075568)) + 0x28)) = (f32) (((*((f32 *) (((char *) (__base_D_8002DC88 + 4)) + 4))) + m2c_initial_frame.view_sp1C.value) + temp_fs0f);
  func_8023A0DC(0, temp_fa1, temp_fa1, &m2c_initial_frame.view_sp18.value, &D_8002D390);
  *((f32 *) (((char *) (&D_80073370)) + 0)) = (f32) ((*((f32 *) (((char *) __base_D_8002DC88) + 4))) + m2c_initial_frame.view_sp18.value);
  *((f32 *) (((char *) (&D_80073370)) + 8)) = (f32) ((*((f32 *) (((char *) (__base_D_8002DC88 + 4)) + 8))) + m2c_initial_frame.view_sp20.value);
  *((f32 *) (((char *) (&D_80073370)) + 4)) = (f32) (((*((f32 *) (((char *) (__base_D_8002DC88 + 4)) + 4))) + m2c_initial_frame.view_sp1C.value) + temp_fs0f);
  *((f32 *) (((char *) temp_s4) + 0x1C)) = (f32) ((*((f32 *) (((char *) temp_s4) + 0x1C))) + (*((f32 *) 0x2031BC)));
  *((f32 *) (((char *) (&D_80073380)) + 0)) = (f32) (*((f32 *) (((char *) temp_s4) + 0x18)));
  *((f32 *) (((char *) (&D_80073380)) + 4)) = (f32) (*((f32 *) (((char *) temp_s4) + 0x1C)));
  *((f32 *) (((char *) (&D_80075568)) + 0xC)) = __repair_fzero;
  *((f32 *) (((char *) (&D_80075568)) + 0x10)) = __repair_fzero;
  *((f32 *) (((char *) (&D_80075568)) + 0x14)) = __repair_fzero;
  *((f32 *) (((char *) (&D_80073380)) + 8)) = (f32) (*((f32 *) (((char *) temp_s4) + 0x20)));
}

