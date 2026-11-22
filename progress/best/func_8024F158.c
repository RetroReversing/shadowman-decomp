f32 func_802403D4(s32 *, s32 *, s32, s32);
s32 func_8024F28C();
s32 func_8024F2A4();
unsigned long func_80266D74(s32, s32 *);
extern s32 D_24F0E4;
extern s32 D_8006A588;
extern f32 D_80074BC0;
typedef struct 
{
  unsigned char pad[36];
  int value;
} __repair_field_24;
void func_8024F158(void *arg0)
{
  u16 __repair_store_0;
  f32 __repair_store_1;
  s32 sp10[3];
  f32 temp_fs0;
  f32 temp_fv0;
  struct 
  {
    s32 f20;
    f32 f24;
    s32 f28;
  } __repair_frame;
  f32 temp_fv0f;
  s32 temp_s2;
  s32 temp_a3;
  s32 var_s1;
  s32 var_v0;
  void *temp_s0;
  temp_s0 = *((void **) (((char *) arg0) + 8));
  temp_fv0f = *((f32 *) (((char *) temp_s0) + 0x10));
  var_s1 = 0;
  if (temp_fv0f < 0.0f)
  {
    if ((*((s16 *) (((char *) arg0) + 0x14))) == 0x17B)
    {
      if ((*((f32 *) 0x2030E8)) <= temp_fv0f)
      {
        var_s1 = 1;
      }
    }
    temp_s2 = (s16) (*((u16 *) (((char *) temp_s0) + 0x7E)));
    __repair_store_0 = (u16) ((*((u16 *) (((char *) temp_s0) + 0x7E))) & 0xFFFE);
    __repair_store_1 = (f32) ((*((f32 *) (((char *) temp_s0) + 0x10))) - D_80074BC0);
    *((u16 *) (((char *) temp_s0) + 0x7E)) = __repair_store_0;
    do
    {
      *((f32 *) (((char *) temp_s0) + 0x10)) = __repair_store_1; sp10[0] = ((__repair_field_24 *) temp_s0)->value; sp10[1] = *((f32 *) (((char *) temp_s0) + 0x28)); sp10[2] = *((s32 *) (((char *) temp_s0) + 0x2C)); temp_fs0 = *((f32 *) 0x2030EC); sp10[1] += *((f32 *) (((char *) temp_s0) + 0x10)); sp10[2] = ((__repair_field_24 *) temp_s0)->value; __repair_frame.f20 = sp10[2]; __repair_frame.f24 = *((f32 *) (((char *) temp_s0) + 0x28)); __repair_frame.f28 = *((s32 *) (((char *) temp_s0) + 0x2C)); __repair_frame.f24 += temp_fs0; temp_fv0 = func_802403D4(&__repair_frame, sp10, 0x3F800000, sp10[2]);
      if (temp_fv0 != 0.0f)
      {
        var_v0 = var_s1 & 0xFF;
        if (D_8006A588 != 0)
        {
          if (temp_fs0 < temp_fv0)
          {
            func_8024F28C();
            return;
          }
          else
          {
            *((f32 *) (((char *) temp_s0) + 0x10)) = 0.0f;
            goto block_17;
          }
        }
        goto block_17;
      }
      if (D_8006A588 != 0)
      {
        func_8024F2A4();
        return;
      }
    }
    while (0);
    *((f32 *) (((char *) temp_s0) + 0x28)) = (f32) ((*((f32 *) (((char *) temp_s0) + 0x28))) + (*((f32 *) (((char *) temp_s0) - -0x10))));
    var_v0 = var_s1 & 0xFF;
    block_17:
    *((u16 *) (((char *) temp_s0) + 0x7E)) = (u16) temp_s2;

    if (var_v0 != 0)
    {
      func_80266D74(2, &D_24F0E4);
    }
  }
}

