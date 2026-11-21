float sqrtf(float);
void func_80245D5C(float *a, float *b) {
    float h = *(float *)0x202968;
    float dx, dy, dz;
    b[0] = (a[1] + a[0]) * h;
    b[1] = (a[3] + a[2]) * h;
    b[2] = (a[5] + a[4]) * h;
    dx = a[1] - b[0];
    dy = a[3] - b[1];
    dz = a[5] - b[2];
    b[3] = sqrtf(dx * dx + dy * dy + dz * dz);
}
