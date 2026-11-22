extern int D_80036B1C;
extern int D_80036B20;
extern int D_80036B24;
void *func_80103878();
void *func_80296BC0();
void *func_802A17C4();
extern char D_80036CE0[];
extern u32 D_8007BAE0;
typedef struct 
{
  s32 w[3];
} __repair_words3;
void *func_802A16D4(void *arg0, s32 arg1, f32 arg2)
{
  s32 temp_a3;
  u32 *__base_D_8007BAE0;
  void *ret;
  f32 temp_fv0;
  void *temp_v0;
  void *temp_v0_2;
  __base_D_8007BAE0 = &D_8007BAE0;
  if (((u32) (*__base_D_8007BAE0)) >= 8U)
  {
    ret = func_802A17C4();
  }
  else
  {
    temp_v0 = func_80296BC0(arg0, D_80036CE0);
    if (temp_v0 != NULL)
    {
      temp_fv0 = *((f32 *) 0x215F88);
      *((f32 *) (((char *) temp_v0) + 0x50)) = temp_fv0;
      *((f32 *) (((char *) temp_v0) + 0x54)) = temp_fv0;
      *__base_D_8007BAE0 += 1;
      *((s8 *) (((char *) temp_v0) + 0x73)) = 0;
      *((s32 *) (((char *) temp_v0) + 0x24)) = (s32) D_80036B1C;
      *((s32 *) (((char *) temp_v0) + 0x28)) = (s32) D_80036B20;
      *((s32 *) (((char *) temp_v0) + 0x2C)) = (s32) D_80036B24;
      *((s32 *) (((char *) temp_v0) - (-0x1C))) = 0;
      *((s32 *) (((char *) temp_v0) + 0x6C)) = 0;
 do { *((s32 *) (((char *) temp_v0) + 0x58)) = 0; *((f32 *) (((char *) temp_v0) + 0x4C)) = (f32) (*((f32 *) 0x215F8C)); *((__repair_words3 *) (((char *) temp_v0) + 0xC)) = *((__repair_words3 *) (((s8 *) arg0) + 0x0)); *((f32 *) (((char *) temp_v0) + 0x54)) = arg2; *((f32 *) (((char *) temp_v0) + 0x50)) = arg2; temp_v0_2 = func_80103878(0x9C, 2, 0, *((s32 *) (((char *) temp_v0) + 0x10))); *((void **) (((char *) temp_v0) + 0x44)) = temp_v0_2; if (temp_v0_2 != NULL) { *((s32 *) (((char *) temp_v0_2) + 4)) = 0; *((s32 *) (((char *) temp_v0_2) + 0)) = 0; *((s32 *) (((char *) temp_v0_2) + 0x98)) = 0; } } while (0);
    }
    ret = temp_v0;
  }
  if (temp_v0)
  {
    return ret;
  }
  else
  {
    return ret;
  }
}
