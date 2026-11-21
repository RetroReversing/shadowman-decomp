extern char D_8007DC30[];
s32 func_8022B588(void *);

s32 func_802D9EC4(s32 arg0) {
    switch (arg0) {
    case 1:
        if (func_8022B588(D_8007DC30) != 0) {
            return 7;
        }
        return 3;
    case 2:
        if (func_8022B588(D_8007DC30) != 0) {
            return 7;
        }
        return 5;
    case 3:
        return 2;
    case 4:
        return 6;
    case 5:
        return 4;
    case 11:
        break;
    }
    return 0;
}
