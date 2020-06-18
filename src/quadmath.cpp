#include <quadmath.h>

#include "quadmath_const.h"
#include "quadmath_func.h"

namespace quadmath
{

const __float128 max = FLT128_MAX;
const __float128 min = FLT128_MIN;
const __float128 epsilon = FLT128_EPSILON;

const __float128 denorm_min = FLT128_DENORM_MIN;
const __float128 mant_dig = FLT128_MANT_DIG;
const __float128 min_exp = FLT128_MIN_EXP;
const __float128 max_exp = FLT128_MAX_EXP;
const __float128 dig = FLT128_DIG;
const __float128 min_10_exp = FLT128_MIN_10_EXP;
const __float128 max_10_exp = FLT128_MAX_10_EXP;

const __float128 e = M_Eq;
const __float128 ld2 = M_LOG2Eq;
const __float128 log2 = M_LOG10Eq;
const __float128 ln2 = M_LN2q;
const __float128 ln10 = M_LN10q;
const __float128 pi = M_PIq;
const __float128 pi_2 = M_PI_2q;
const __float128 pi_4 = M_PI_4q;
const __float128 one_over_pi = M_1_PIq;
const __float128 two_over_pi = M_2_PIq;
const __float128 two_over_sqrt_pi = M_2_SQRTPIq;
const __float128 sqrt_2 = M_SQRT2q;
const __float128 one_over_sqrt_2 = M_SQRT1_2q;

__float128 acos(__float128 x)
{
    return ::acosq(x);
}

__float128 acosh(__float128 x)
{
    return ::acoshq(x);
}

__float128 asin(__float128 x)
{
    return ::asinq(x);
}

__float128 asinh(__float128 x)
{
    return ::asinhq(x);
}

__float128 atan(__float128 x)
{
    return ::atanq(x);
}

__float128 atanh(__float128 x)
{
    return ::atanhq(x);
}

__float128 atan2(__float128 y, __float128 x)
{
    return ::atan2q(y, x);
}

}
