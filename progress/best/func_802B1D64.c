void *func_80103878();
s32 func_802A7CD4();
void func_802B1D64(void *arg0)
{
  void *temp_v0;
  func_802A7CD4();
  *((u8 *) (((char *) arg0) + 0x49)) = 0xB4;
  do
  {
    if (arg0)
    {
      *((u8 *) (((char *) arg0) + 0x4A)) = 0xFF;
      *((s8 *) (((char *) arg0) + 0x48)) = 0;
      *((s32 *) (((char *) arg0) + 0x60)) = 0;
      *((u8 *) (((char *) arg0) + 0x50)) |= 1;
      *((f32 *) (((char *) arg0) + 0x38)) = (f32) (*((f32 *) 0x2169A4));
      temp_v0 = func_80103878(0x9C, 2, 0);
    }
    else
    {
      *((u8 *) (((char *) arg0) + 0x4A)) = 0xFF;
      *((s8 *) (((char *) arg0) + 0x48)) = 0;
      *((s32 *) (((char *) arg0) + 0x60)) = 0;
      *((u8 *) (((char *) arg0) + 0x50)) |= 1;
      *((f32 *) (((char *) arg0) + 0x38)) = (f32) (*((f32 *) 0x2169A4));
      temp_v0 = func_80103878(0x9C, 2, 0);
    }
  }
  while (0);
  *((void **) (((char *) arg0) + 0xC)) = temp_v0;
  if (temp_v0 != NULL)
  {
    *((s32 *) (((char *) temp_v0) + 0)) = 0;
    *((s32 *) (((char *) temp_v0) + 4)) = 0;
  }
}

