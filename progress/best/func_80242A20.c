s32 func_80109C88(s32 *);
s32 func_80236594(s32, s16, s32 *);
volatile unsigned long long func_80242B20();
extern s32 D_245E4C;
extern s32 D_2462B0;
extern s32 D_8002D480;
extern s32 D_8002D484;
extern s32 D_8006A9D8;
extern s32 D_800707A8;
inline static char *inline_fn(s32 *arg0)
{
  return (char *) arg0;
}

s32 func_80242A20(s32 arg0, s16 arg1, s16 arg2)
{
  s32 *var_v1;
  s32 *var_s1;
  short pad;
  s32 var_a0;
  s32 var_s2;
  s32 var_s0;
  if ((((arg1 == (-1)) || (arg2 == (-1))) || (func_80236594(arg0, arg1, &D_2462B0) == 0)) || (func_80236594(arg0, arg2, &D_245E4C) == 0))
  {
    if (var_v1)
    {
      return func_80242B20();
    }
    else
    {
      return func_80242B20();
    }
  }
 do { var_s2 = 0; do { if (D_8002D480 > 0) { var_s1 = &D_800707A8; __repair_rows: { var_a0 = 0; var_s0 = 0; if (D_8002D484 > 0) { var_v1 = &D_8006A9D8; do { if ((*((s32 *) (inline_fn(var_v1) - (-0x10)))) == var_s1) { var_s0 += 1; } var_a0 += 1; var_v1 += 20; } while (var_a0 < D_8002D484); } if (var_s0 == 0) { if (arg0) { func_80109C88(var_s1); } else { func_80109C88(var_s1); } } *((s32 *) (((char *) var_s1) + 8)) = var_s0; var_s1 += 23; var_s2 += 1; } if (D_8002D480 > var_s2) { goto __repair_rows; } } return 1; } while (0); } while (0);
}
