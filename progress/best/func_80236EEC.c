s32 func_80236B20();
s32 func_80236B64();
extern u16 D_80052776;
void func_80236EEC(void *arg0)
{
  u16 temp_a0;
  u16 temp_v0;
  temp_a0 = (*((u16 *) (((char *) arg0) + 0x42))) - D_80052776;
  *((u16 *) (((char *) arg0) + 0x42)) = temp_a0;
  if ((temp_a0 << 0x10) <= 0)
  {
    temp_v0 = (*((u16 *) (((char *) arg0) + 0x40))) + 1;
    *((u16 *) (((char *) arg0) + 0x40)) = temp_v0;
    *((u16 *) (((char *) arg0) + 0x42)) = (u16) (temp_a0 + (*((u16 *) (((char *) arg0) + 0x50))));
    if ((*((s32 *) ((*((s32 *) (((char *) arg0) + 0x44))) + ((s16) temp_v0)))) == 0)
    {
      *((u16 *) (((char *) arg0) + 0x40)) = 0U;
    }
    *((f32 *) (((char *) arg0) + 0x18)) = (f32) (((f32) ((unsigned char) ((*((s32 *) ((*((s32 *) (((char *) arg0) + 0x44))) + ((s16) (*((u16 *) (((char *) arg0) + 0x40))))))) - 0x30))) * (*((f32 *) 0x202400)));
  }
  if (func_80236B20(arg0) != 0)
  {
    func_80236B64(arg0);
  }
}

