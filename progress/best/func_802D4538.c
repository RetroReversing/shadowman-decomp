s32 func_80230A3C(s16);
extern s32 D_8002C2A0;
extern volatile short D_80045C54;
void *func_802D4538(void *arg0)
{
  s32 *__base_D_8002C2A0;
  __base_D_8002C2A0 = &D_8002C2A0;
  func_80230A3C(*((s16 *) (((char *) __base_D_8002C2A0) + 0x1A2)));
  *((s16 *) (((char *) __base_D_8002C2A0) + 0x1A2)) = (s16) (*(((*((s32 *) (((char *) arg0) + 4))) * 2) + (&D_80045C54)));
  return arg0 + 0xC;
}

