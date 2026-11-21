void func_80229588(void);
void func_8022954C(void *arg0) {
    void (*fn)(void) = *(void (**)(void))(*(char **)((char *)arg0 + 0x28) + 0x24);
    if (fn != 0) {
        fn();
    } else {
        func_80229588();
    }
}
