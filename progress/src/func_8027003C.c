extern char *D_8006A4FC;
extern int D_8007AFB0;
extern int D_8007AFF8;
extern char *D_8007B0AC;

void func_8027003C(char *arg0) {
    D_8007B0AC = D_8006A4FC;
    D_8006A4FC = arg0;
    D_8007AFB0 = D_8007AFF8;
    D_8007AFF8 = ((int *)arg0)[27];
}
