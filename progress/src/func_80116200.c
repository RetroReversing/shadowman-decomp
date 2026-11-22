/* adapted from similar verified C in osViSetMode in PENNY RACERS (matched), with its names changed by decompdecomp */
/* identical to func_80116200 in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80116200 in V-RALLY (matched), with its names changed by decompdecomp */
/* identical to func_8008F260 in V-RALLY (matched), with its names changed by decompdecomp */

s32 func_80118330();
s32 func_80118350();
extern void *D_80027784;
void func_80116200(void *arg0)
{
  void *new_var3;
  void **new_var2;
  char *new_var;
  s32 temp_v0;
  void *temp_a1;
  temp_v0 = func_80118330();
  new_var = (char *) D_80027784;
  *((void **) (((char *) D_80027784) + 8)) = arg0;
  ;
  new_var2 = (void **) (((char *) D_80027784) + 8);
  *((s16 *) (new_var + 0)) = 1;
  new_var3 = *new_var2;
  *((s32 *) (new_var + 0xC)) = (s32) (*((s32 *) (((char *) (*new_var2)) + 4)));
  func_80118350(temp_v0, new_var3);
}
