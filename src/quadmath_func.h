#ifdef QUADMATH_FUNC_H
#error Already included
#else
#define QUADMATH_FUNC_H

namespace quadmath
{
    extern __float128 acos(__float128 value);
    extern __float128 acosh(__float128 value);
    extern __float128 asin(__float128 value);
    extern __float128 asinh(__float128 value);
    extern __float128 atan(__float128 value);
    extern __float128 atanh(__float128 value);
    extern __float128 atan2(__float128 value);
}

#endif
