typedef struct {s32 w0; s32 w4; s32 w8; u8 pad[0x59]; u8 b65;} Result;
extern s32 D_800128E0[];
extern u8 D_8006F9F0[],D_80016330[],D_8006E7A0[],D_80016450[];
s32 func_8003F980(s32,s32,s32,void*,s32);
s32 func_8003F5B0(s32,s32,s32,void*);
s32 __osContAddressCrc(s32,void*);
s32 osMotorInit(s32 arg0,Result *r,s32 arg2) {
    u8 bytes[0x20];
    s32 i, v;
    u8 *obj, *src;

    r->w0 = 0;
    r->w4 = arg0;
    r->w8 = arg2;
    r->b65 = 0x80;
    for (i = 0x1f; i >= 0; i--) {
        bytes[i] = 0xfe;
    }
    v = func_8003F980(arg0, arg2, 0x400, bytes, 0);
    if (v == 2) {
        v = func_8003F980(arg0, arg2, 0x400, bytes, 0);
    }
    if (v == 0) {
        v = func_8003F5B0(arg0, arg2, 0x400, bytes);
        if (v == 2) {
            v = 4;
        }
        if (v == 0) {
            if (bytes[0x1f] != 0xfe) {
                for (i = 0x1f; i >= 0; i--) {
                    bytes[i] = 0x80;
                }
                v = func_8003F980(arg0, arg2, 0x400, bytes, 0);
                if (v == 2) {
                    v = func_8003F980(arg0, arg2, 0x400, bytes, 0);
                }
                if (v == 0) {
                    v = func_8003F5B0(arg0, arg2, 0x400, bytes);
                    if (v == 2) {
                        v = 4;
                    }
                    if (v == 0) {
                        if (bytes[0x1f] != 0x80) {
                            return 11;
                        }
                        v = 0;
                        if (D_800128E0[arg2] == 0) {
                            for (i = 0; i < 32; i++) {
                                D_80016330[i] = 1;
                                D_80016450[i] = 0;
                            }
                            obj = D_8006F9F0 + arg2 * 64;
                            for (i = 0; i < 15; i++) {
                                ((s32 *)obj)[i] = 0;
                            }
                            *(s32 *)(obj + 0x3c) = 1;
                            obj[0x28] = 0xfe;
                            obj[1] = 0x23;
                            obj[2] = 1;
                            obj[0] = 0xff;
                            obj[3] = 3;
                            obj[0x26] = 0xff;
                            *(u16 *)(obj + 4) = 0xc000 | (__osContAddressCrc(0x600, obj) & 255);
                            for (i = 0; i < 32; i++) {
                                obj[0x3e + i] = D_80016330[i];
                            }
                            src = D_8006E7A0 + arg2 * 64;
                            for (i = 0; i < 15; i++) {
                                ((s32 *)src)[i] = 0;
                            }
                            *(s32 *)(src + 0x3c) = 1;
                            src[0x28] = 0xfe;
                            src[1] = 0x23;
                            src[2] = 1;
                            src[0] = 0xff;
                            src[3] = 3;
                            src[0x26] = 0xff;
                            *(u16 *)(src + 4) = 0xc000 | (__osContAddressCrc(0x600, src) & 255);
                            for (i = 0; i < 32; i++) {
                                src[0x3e + i] = D_80016450[i];
                            }
                            D_800128E0[arg2] = 1;
                        }
                        return v;
                    }
                    return v;
                }
                return v;
            }
            return 11;
        }
        return v;
    }
    return v;
}
