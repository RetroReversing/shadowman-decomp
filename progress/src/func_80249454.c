int func_80108B30();
int func_80113AD0();
void func_80108AAC(int, int, int);
void func_80249454(void *arg0) {
    if (*(short *)(*(char **)((char *)arg0 + 8) + 0x7A) == 0 && func_80108B30() == 0) {
        if (func_80113AD0() & 0x100) {
            func_80108AAC(0x21, 0x3F, 0x7FFF);
        } else {
            func_80108AAC(0x20, 0x3F, 0x7FFF);
        }
    }
}
