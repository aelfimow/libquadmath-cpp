#ifdef QUADMATH_FUNC_H
#error Already included
#else
#define QUADMATH_FUNC_H

namespace quadmath
{
    extern __float128 acos(__float128 x);
    extern __float128 acosh(__float128 x);
    extern __float128 asin(__float128 x);
    extern __float128 asinh(__float128 x);
    extern __float128 atan(__float128 x);
    extern __float128 atanh(__float128 x);
    extern __float128 atan2(__float128 y, __float128 x);
    extern __float128 cbrt(__float128 x);
    extern __float128 ceil(__float128 x);
    extern __float128 copysign(__float128 x, __float128 y);
    extern __float128 cosh(__float128 x);
    extern __float128 cos(__float128 x);
    extern __float128 erf(__float128 x);
    extern __float128 erfc(__float128 x);
    extern __float128 exp2(__float128 x);
    extern __float128 exp(__float128 x);
    extern __float128 expm1(__float128 x);
    extern __float128 fabs(__float128 x);
    extern __float128 fdim(__float128 x);
    extern __float128 finite(__float128 x);
    extern __float128 floor(__float128 x);
    extern __float128 fma(__float128 x, __float128 y, __float128 z);
    extern __float128 fmax(__float128 x, __float128 y);
    extern __float128 fmin(__float128 x, __float128 y);
    extern __float128 fmod(__float128 x, __float128 y);
    extern __float128 frexp(__float128 x, int *p);
    extern __float128 hypot(__float128 a, __float128 b);
    extern __float128 ilogb(__float128 x);
    extern __float128 isinf(__float128 x);
    extern __float128 isnan(__float128 x);
    extern __float128 issignaling(__float128 x);
    extern __float128 j0(__float128 x);
    extern __float128 j1(__float128 x);
    extern __float128 jn(int n, __float128 x);
    extern __float128 ldexp(__float128 x, int n);
    extern __float128 lgamma(__float128 x);
    extern long long int llrint(__float128 x);
    extern long long int llround(__float128 x);
    extern __float128 logb(__float128 x);
    extern __float128 log(__float128 x);
    extern __float128 log10(__float128 x);
    extern __float128 log2(__float128 x);
    extern __float128 log1p(__float128 x);
    extern long int lrint(__float128 x);
    extern long int lround(__float128 x);
    extern __float128 modf(__float128 x, __float128 *p);
    extern __float128 nan(const char *p);
    extern __float128 nearbyint(__float128 x);
    extern __float128 nextafter(__float128 x, __float128 y);
    extern __float128 pow(__float128 x, __float128 y);
    extern __float128 remainder(__float128 x, __float128 y);
    extern __float128 remquo(__float128 x, __float128 y, int *p);
    extern __float128 rint(__float128 x);
    extern __float128 round(__float128 x);
    extern __float128 scalbln(__float128 x, long int y);
    extern __float128 scalbn(__float128 x, int y);
    extern int signbit(__float128 x);
    extern void sincos(__float128 x, __float128 *s, __float128 *c);
    extern __float128 sinh(__float128 x);
    extern __float128 sin(__float128 x);
    extern __float128 sqrt(__float128 x);
    extern __float128 tan(__float128 x);
    extern __float128 tanh(__float128 x);
    extern __float128 tgamma(__float128 x);
    extern __float128 trunc(__float128 x);
    extern __float128 y0(__float128 x);
    extern __float128 y1(__float128 x);
    extern __float128 yn(int n, __float128 x);

    extern __float128 cabs(__complex128 c);
    extern __float128 carg(__complex128 c);
    extern __float128 cimag(__complex128 c);
    extern __float128 creal(__complex128 c);
}

#endif
