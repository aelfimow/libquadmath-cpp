#ifdef QUADMATH_CONST_H
#error Already included
#else
#define QUADMATH_CONST_H

#include <quadmath.h>

namespace quadmath
{
    static constexpr __float128 max = FLT128_MAX;
    static constexpr __float128 min = FLT128_MIN;
    static constexpr __float128 epsilon = FLT128_EPSILON;

    static constexpr __float128 denorm_min = FLT128_DENORM_MIN;
    static constexpr __float128 mant_dig = FLT128_MANT_DIG;
    static constexpr __float128 min_exp = FLT128_MIN_EXP;
    static constexpr __float128 max_exp = FLT128_MAX_EXP;
    static constexpr __float128 dig = FLT128_DIG;
    static constexpr __float128 min_10_exp = FLT128_MIN_10_EXP;
    static constexpr __float128 max_10_exp = FLT128_MAX_10_EXP;

    static constexpr __float128 e = M_Eq;
    static constexpr __float128 ld2 = M_LOG2Eq;
    static constexpr __float128 log2 = M_LOG10Eq;
    static constexpr __float128 ln2 = M_LN2q;
    static constexpr __float128 ln10 = M_LN10q;
    static constexpr __float128 pi = M_PIq;
    static constexpr __float128 pi_2 = M_PI_2q;
    static constexpr __float128 pi_4 = M_PI_4q;
    static constexpr __float128 one_over_pi = M_1_PIq;
    static constexpr __float128 two_over_pi = M_2_PIq;
    static constexpr __float128 two_over_sqrt_pi = M_2_SQRTPIq;
    static constexpr __float128 sqrt_2 = M_SQRT2q;
    static constexpr __float128 one_over_sqrt_2 = M_SQRT1_2q;
}

#endif
