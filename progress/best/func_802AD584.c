s32 func_80113AD0();
f32 func_8022EBE8(f32);
s32 func_8029B14C(void *, f32 *, f32, f32, s32);
s32 func_802A6588(void *, void *);
s32 func_802AD5C4();
s32 func_802BA1E4(s32, void *, void *);
void func_802AD584(void *arg0, s32 arg1, void *arg2_in)
{
  void *arg2;
  f32 sp18[3];
  f32 temp_fs0;
  void *temp_a1;
  if (arg2)
  {
    arg2 = arg2_in;
  }
  else
  {
    arg2 = arg2_in;
  }
  do
  {
    {
      long long phantom_wide = arg1;
    }
  }
  while (0);
  switch ((u32) arg1)
  {
    case 0:
      if (arg0 || temp_a1)
    {
      break;
    }
    else
    {
      break;
    }

    case 1:
      temp_a1 = *((void **) (((char *) arg2) + 8));
      temp_fs0 = *((f32 *) 0x216670);
      func_802BA1E4(*((s32 *) (((char *) temp_a1) + 0x6C)), temp_a1, arg0);
      sp18[0] = func_8022EBE8(temp_fs0);
      sp18[1] = func_8022EBE8(temp_fs0);
      sp18[2] = func_8022EBE8(temp_fs0);
      func_8029B14C(arg0 + 0x54, sp18, 0.95f, 15.0f, (func_80113AD0() % 2) + 3);
      if (1U < 0x20U)
    {
      if (arg2)
      {
        func_802AD5C4();
        return;
      }
      else
      {
        func_802AD5C4();
        return;
      }
    }
      return;

    case 2:
      func_802A6588(arg0, arg2);
      *((s32 *) (((char *) arg0) + 0x30)) = 0;
      break;

  }

}

