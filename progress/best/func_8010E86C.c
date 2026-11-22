s32 func_8011BA20();
extern char D_8004EC20[];
extern char D_8004EC80[];
extern char D_8004ECB4[];
extern char D_8004ED08[];
extern char D_8004ED0C[];
void func_8010E86C(void)
{
  char *__base_D_8004EC20;
  char *var_a0;
  s32 var_v1;
  char *__base_D_8004EC80;
 do { __base_D_8004EC80 = D_8004EC80; var_v1 = 6; __base_D_8004EC20 = D_8004EC20; } while (0);
  var_a0 = __base_D_8004EC20 + 0xC;
  do
  {
    var_a0 -= 2;
    var_v1 -= 1;
    *((s16 *) var_a0) = -1;
    *(var_v1 + __base_D_8004EC80) = 0;
  }
  while (var_v1 != 0);
  func_8011BA20(D_8004ECB4, 0, 4);
  func_8011BA20(D_8004ED0C, 0, 4);
  func_8011BA20(D_8004ED08, 0, 4);
}
