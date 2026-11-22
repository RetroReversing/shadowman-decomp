extern s32 D_80061A20;
extern u32 D_80069720;
typedef struct 
{
  unsigned char pad[4];
  int value;
} __repair_field_4;
void func_80237708(void)
{
  u32 *__base_D_80069720;
  s32 *var_a1;
  s32 temp_v1;
  u32 var_a2;
  void *temp_a0;
 do { var_a1 = &D_80061A20; var_a2 = 0; __base_D_80069720 = &D_80069720; } while (0);
  if ((*(&D_80069720)) != 0)
  {
    do
    {
      var_a2 += 1;
      *((s8 *) (((char *) (*((void **) (((char *) var_a1) + 0)))) + 3)) = 0;
      temp_a0 = *((void **) (((char *) var_a1) + 0));
      temp_v1 = ((__repair_field_4 *) var_a1)->value;
      var_a1 += 2;
      ((__repair_field_4 *) temp_a0)->value = temp_v1;
    }
    while (var_a2 < ((u32) (*__base_D_80069720)));
  }
}
