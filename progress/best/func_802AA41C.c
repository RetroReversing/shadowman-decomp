s32 func_80109918(s32, s32, s16);
s32 func_80239A94(f32);
s32 func_802A5D00(s32, f32 *);
s32 func_802A5EC4(s32, f32 *, s32 *, s32, s32, s32);
extern s32 D_217A8C;
extern s32 D_8002D3C0;
extern s32 D_80036DF0;
inline static char *inline_fn(s32 *arg0)
{
  return (char *) arg0;
}

inline static char *inline_fn2(char *arg0, int arg1)
{
  return arg0 + arg1;
}

void func_802AA41C(void *arg0)
{
  union 
  {
    unsigned char bytes[80];
    struct 
    {
      f32 value;
    } view_sp18;
    struct 
    {
      unsigned char pad[16];
      f32 value;
    } view_sp28;
    struct 
    {
      unsigned char pad[20];
      f32 value;
    } view_sp2C;
    struct 
    {
      unsigned char pad[24];
      f32 value;
    } view_sp30;
    struct 
    {
      unsigned char pad[32];
      f32 value;
    } view_sp38;
    struct 
    {
      unsigned char pad[36];
      f32 value;
    } view_sp3C;
    struct 
    {
      unsigned char pad[40];
      f32 value;
    } view_sp40;
    struct 
    {
      unsigned char pad[44];
      f32 value;
    } view_sp44;
    struct 
    {
      unsigned char pad[48];
      f32 value;
    } view_sp48;
    struct 
    {
      unsigned char pad[52];
      f32 value;
    } view_sp4C;
    struct 
    {
      unsigned char pad[56];
      f32 value;
    } view_sp50;
    struct 
    {
      unsigned char pad[60];
      f32 value;
    } view_sp54;
    struct 
    {
      unsigned char pad[64];
      f32 value;
    } view_sp58;
  } m2c_initial_frame;
  f32 temp_fs0f;
  f32 temp_ft0;
  f32 temp_ft1;
  f32 temp_fv1;
  f32 var_fs0;
  u32 var_s1;
  func_802A5D00(inline_fn2(arg0, 0x6C), &m2c_initial_frame.view_sp38.value);
  var_s1 = 0;
  temp_fs0f = *((f32 *) 0x216468);
  var_fs0 = 0.0f;
  do
  {
    func_80239A94(var_fs0);
    temp_fv1 = (((*((f32 *) inline_fn2(inline_fn(&D_80036DF0), 0))) * (*((f32 *) inline_fn2(inline_fn(&D_8002D3C0), 0)))) + ((*((f32 *) inline_fn2(inline_fn(&D_80036DF0), 4))) * (*((f32 *) inline_fn2(inline_fn(&D_8002D3C0), 4))))) + ((*((f32 *) inline_fn2(inline_fn(&D_80036DF0), 8))) * (*((f32 *) inline_fn2(inline_fn(&D_8002D3C0), 8))));
    temp_ft0 = (((*((f32 *) inline_fn2(inline_fn(&D_80036DF0), 0))) * (*((f32 *) inline_fn2(inline_fn(&D_8002D3C0), 0xC)))) + ((*((f32 *) inline_fn2(inline_fn(&D_80036DF0), 4))) * (*((f32 *) inline_fn2(inline_fn(&D_8002D3C0), 0x10))))) + ((*((f32 *) inline_fn2(inline_fn(&D_80036DF0), 8))) * (*((f32 *) inline_fn2(inline_fn(&D_8002D3C0), 0x14))));
    m2c_initial_frame.view_sp18.value = temp_fv1;
    *((f32 *) inline_fn2(inline_fn(&m2c_initial_frame.view_sp18.value), 4)) = temp_ft0;
    do
    {
      temp_ft1 = (((*((f32 *) inline_fn2(inline_fn(&D_80036DF0), 0))) * (*((f32 *) inline_fn2(inline_fn(&D_8002D3C0), 0x18)))) + ((*((f32 *) inline_fn2(inline_fn(&D_80036DF0), 4))) * (*((f32 *) inline_fn2(inline_fn(&D_8002D3C0), 0x1C))))) + ((*((f32 *) inline_fn2(inline_fn(&D_80036DF0), 8))) * (*((f32 *) inline_fn2(inline_fn(&D_8002D3C0), 0x20))));
      *((f32 *) inline_fn2(inline_fn(&m2c_initial_frame.view_sp18.value), 8)) = temp_ft1; var_fs0 += temp_fs0f;
      {
        var_s1 += 1;
      }
    }
    while (0);
    m2c_initial_frame.view_sp28.value = ((temp_fv1 * m2c_initial_frame.view_sp38.value) + (temp_ft0 * m2c_initial_frame.view_sp3C.value)) + (temp_ft1 * m2c_initial_frame.view_sp40.value);
    m2c_initial_frame.view_sp2C.value = ((temp_fv1 * m2c_initial_frame.view_sp44.value) + (temp_ft0 * m2c_initial_frame.view_sp48.value)) + (temp_ft1 * m2c_initial_frame.view_sp4C.value);
    m2c_initial_frame.view_sp30.value = (temp_ft1 * m2c_initial_frame.view_sp58.value) + ((temp_ft0 * m2c_initial_frame.view_sp54.value) + (temp_fv1 * m2c_initial_frame.view_sp50.value));
    if (var_s1)
    {
      func_802A5EC4(inline_fn2(arg0, 0x54), &m2c_initial_frame.view_sp28.value, &D_217A8C, 2, 0, 0);
    }
    else
    {
      func_802A5EC4(inline_fn2(arg0, 0x54), &m2c_initial_frame.view_sp28.value, &D_217A8C, 2, 0, 0);
    }
  }
  while (var_s1 < 3U);
  *((s32 *) inline_fn2(inline_fn(arg0), 0x1C)) = func_80109918(inline_fn2(arg0, 0x54), 0x7F, *((s16 *) 0x216C26));
}

