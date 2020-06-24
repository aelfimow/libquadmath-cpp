#ifdef QUADMATH_CONST_H
#error Already included
#else
#define QUADMATH_CONST_H

namespace quadmath_const
{
    extern const __float128 max;
    extern const __float128 min;
    extern const __float128 epsilon;

    extern const __float128 denorm_min;
    extern const __float128 mant_dig;
    extern const __float128 min_exp;
    extern const __float128 max_exp;
    extern const __float128 dig;
    extern const __float128 min_10_exp;
    extern const __float128 max_10_exp;

    extern const __float128 e;
    extern const __float128 ld2;
    extern const __float128 log2;
    extern const __float128 ln2;
    extern const __float128 ln10;
    extern const __float128 pi;
    extern const __float128 pi_2;
    extern const __float128 pi_4;
    extern const __float128 one_over_pi;
    extern const __float128 two_over_pi;
    extern const __float128 two_over_sqrt_pi;
    extern const __float128 sqrt_2;
    extern const __float128 one_over_sqrt_2;
}

#endif
