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
}

#endif
