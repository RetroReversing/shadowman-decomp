typedef struct { int x, y, z; } V3;
extern char *D_8006A4FC;
extern char *D_8007AFF8;
void func_80273868(void) {
    *(V3 *)(D_8007AFF8 + 0xFC) = *(V3 *)(D_8006A4FC + 0x24);
}
