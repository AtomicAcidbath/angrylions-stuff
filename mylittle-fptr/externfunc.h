
#ifndef __EXTERNFUNC_H__
#define __EXTERNFUNC_H__

extern STRICTINLINE UINT32 dz_compress(UINT32 value);
extern STRICTINLINE INT32 CLIP(INT32 value,INT32 min,INT32 max);
extern INLINE UINT32 z_decompress(UINT32 zcurpixel);

#endif