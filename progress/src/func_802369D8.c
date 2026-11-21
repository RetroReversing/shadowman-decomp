typedef struct { f32 x, y, z; } V3;
extern f32 sqrtf(f32);
f32 func_802369D8(V3 *a, V3 *b) {
    f32 dx = a->x - b->x;
    f32 dy = a->y - b->y;
    f32 dz = a->z - b->z;
    return sqrtf(dx * dx + dy * dy + dz * dz);
}
