s32 func_80104E4C();
s32 func_80104EA4();
s32 func_802316D4();
s32 func_80232DD0();
s32 func_80232E84();
s32 func_8023301C();
s32 func_80233094();
s32 func_802330F0();
s32 func_8023317C();
s32 func_8023648C();
s32 func_802D074C();
s32 func_802D1180();
s32 func_802D175C();
extern s32 D_8005E9FC;
extern s32 D_8007BEF0;
extern volatile unsigned int D_8007BF20[];
extern volatile unsigned int D_8007BF30[];
void func_802D0614(s32 arg0, s32 arg1, void *arg2, void *arg3)
{
  s32 temp_a1;
  s32 __repair_temp_a1_1;
  s32 temp_s0;
  s32 temp_s0_2;
  s32 temp_s6;
  volatile unsigned int pad;
  s32 temp_v1;
  s32 *__base_D_8005E9FC;
  if (__base_D_8005E9FC)
  {
    __base_D_8005E9FC = &D_8005E9FC;
    temp_s0 = arg0 * 0x28;
    temp_a1 = *((s32 *) (((char *) (temp_s0 + D_8007BEF0)) + 0x10));
    temp_s6 = func_80104EA4(*__base_D_8005E9FC);
  }
  else
  {
    __base_D_8005E9FC = &D_8005E9FC;
    temp_s0 = arg0 * 0x28;
    temp_a1 = *((s32 *) (((char *) (temp_s0 + D_8007BEF0)) + 0x10));
    temp_s6 = func_80104EA4(*__base_D_8005E9FC);
  }
  if (temp_a1 != 0)
  {
    if (((unsigned long) __base_D_8005E9FC) & 0x100)
    {
      do
      {
        if (__base_D_8005E9FC)
        {
          func_80104E4C(*__base_D_8005E9FC, temp_a1);
        }
        else
        {
          func_80104E4C(*__base_D_8005E9FC, temp_a1);
        }
      }
      while (0);
    }
    else
    {
      func_80104E4C(*__base_D_8005E9FC, temp_a1);
    }
    temp_a1 = arg1 * 4;
    func_802D1180(*((s32 *) (((char *) arg3) + 0x10)), *((s16 *) (((char *) arg3) + 0x1C)), *(temp_a1 + D_8007BF20), *(temp_a1 + D_8007BF30));
  }
  func_80104E4C(*__base_D_8005E9FC, *((s32 *) (((char *) (temp_s0 + D_8007BEF0)) + 4)), 0);
  func_8023648C(*__base_D_8005E9FC);
  func_8023317C(*((s32 *) (((char *) arg2) + 0x1C)), *((u16 *) (((char *) arg2) + 0x34)));
  func_80104E4C(*__base_D_8005E9FC, *((s32 *) (temp_s0 + D_8007BEF0)), 0);
  if ((*((u8 *) (((char *) (temp_s0 + D_8007BEF0)) + 0x1D))) == 1)
  {
    func_802D175C(*((s32 *) (((char *) arg2) + 0x20)), *((u16 *) (((char *) arg2) + 0x36)));
    func_802D074C();
    return;
  }
  func_8023301C(*((s32 *) (((char *) arg2) + 0x20)), *((u16 *) (((char *) arg2) + 0x36)));
  ;
  func_80104E4C((char) (*__base_D_8005E9FC), *((s32 *) (((char *) ((arg0 * 0x28) + D_8007BEF0)) + 8)), 0);
  func_80232DD0(*((s32 *) (((char *) arg2) + 0x18)), *((u16 *) (((char *) arg2) + 0x32)));
  func_80104E4C(*__base_D_8005E9FC, *((s32 *) (((char *) ((arg0 * 0x28) + D_8007BEF0)) + 0xC)), 0);
  func_80232E84(*((s32 *) (((char *) arg2) + 0x14)), *((u16 *) (((char *) arg2) + 0x30)));
  func_80104E4C(*__base_D_8005E9FC, *((s32 *) (((char *) ((arg0 * 0x28) + D_8007BEF0)) + 0x14)), 0);
  func_80233094(*((s32 *) (((char *) arg2) + 0x24)), *((u16 *) (((char *) arg2) + 0x38)));
  func_80104E4C(*__base_D_8005E9FC, *((s32 *) (((char *) ((arg0 * 0x28) + D_8007BEF0)) + 0x18)), 0);
  func_802330F0(*((s32 *) (((char *) arg2) + 0x28)), *((u16 *) (((char *) arg2) + 0x3A)));
  func_802316D4(arg2);
  *((s8 *) (((char *) ((arg0 * 0x28) + D_8007BEF0)) + 0x1C)) = arg1;
  *((s8 *) (((char *) arg2) + 0x3E)) = 1;
  func_80104E4C(*__base_D_8005E9FC, temp_s6, 0);
}

