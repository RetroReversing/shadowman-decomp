/* adapted from similar verified C in guMtxIdentF in PENNY RACERS (matched), with its names changed by decompdecomp */
/* identical to func_8011360C in V-RALLY-PAL (matched), with its names changed by decompdecomp */
void func_8011360C(s32 *arg0)
{
  s32 i;
  s32 j;
  s32 *p;
  s32 *diag;
  f32 one;

  i = 0;
  one = 1.0f;
  diag = arg0;
  do {
    j = 0;
    p = arg0;
    do {
      if (i == j) {
        *(f32 *)diag = one;
      } else {
        *p = 0;
      }
      j++;
      p++;
    } while (j < 4);
    diag += 5;
    i++;
    arg0 += 4;
  } while (i < 4);
}
