#include <quadmath.h>

#include "quadmath_const.h"
#include "quadmath_func.h"

namespace quadmath_const
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
}

namespace quadmath
{
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

    __float128 cbrt(__float128 x)
    {
        return ::cbrtq(x);
    }

    __float128 ceil(__float128 x)
    {
        return ::ceilq(x);
    }

    __float128 copysign(__float128 x, __float128 y)
    {
        return ::copysignq(x, y);
    }

    __float128 cosh(__float128 x)
    {
        return ::coshq(x);
    }

    __float128 cos(__float128 x)
    {
        return ::cosq(x);
    }

    __float128 erf(__float128 x)
    {
        return ::erfq(x);
    }

    __float128 erfc(__float128 x)
    {
        return ::erfcq(x);
    }

#if 0
    __float128 exp2(__float128 x)
    {
        return ::exp2q(x);
    }
#endif

    __float128 exp(__float128 x)
    {
        return ::expq(x);
    }

    __float128 expm1(__float128 x)
    {
        return ::expm1q(x);
    }

    __float128 fabs(__float128 x)
    {
        return ::fabsq(x);
    }

    __float128 fdim(__float128 x)
    {
        return ::floorq(x);
    }

    __float128 finite(__float128 x)
    {
        return ::finiteq(x);
    }

    __float128 floor(__float128 x)
    {
        return ::floorq(x);
    }

    __float128 fma(__float128 x, __float128 y, __float128 z)
    {
        return ::fmaq(x, y, z);
    }

    __float128 fmax(__float128 x, __float128 y)
    {
        return ::fmaxq(x, y);
    }

    __float128 fmin(__float128 x, __float128 y)
    {
        return ::fminq(x, y);
    }

    __float128 fmod(__float128 x, __float128 y)
    {
        return ::fmodq(x, y);
    }

    __float128 frexp(__float128 x, int *p)
    {
        return ::frexpq(x, p);
    }

    __float128 hypot(__float128 a, __float128 b)
    {
        return ::hypotq(a, b);
    }

    __float128 ilogb(__float128 x)
    {
        return ::ilogbq(x);
    }

    __float128 isinf(__float128 x)
    {
        return ::isinfq(x);
    }

    __float128 isnan(__float128 x)
    {
        return ::isnanq(x);
    }

#if 0
    __float128 issignaling(__float128 x)
    {
        return ::issignalingq(x);
    }
#endif

    __float128 j0(__float128 x)
    {
        return ::j0q(x);
    }

    __float128 j1(__float128 x)
    {
        return ::j1q(x);
    }

    __float128 jn(int n, __float128 x)
    {
        return ::jnq(n, x);
    }

    __float128 ldexp(__float128 x, int n)
    {
        return ::ldexpq(x, n);
    }

    __float128 lgamma(__float128 x)
    {
        return ::lgammaq(x);
    }

    long long int llrint(__float128 x)
    {
        return ::llrintq(x);
    }

    long long int llround(__float128 x)
    {
        return ::llroundq(x);
    }

    __float128 logb(__float128 x)
    {
        return ::logbq(x);
    }

    __float128 log(__float128 x)
    {
        return ::logq(x);
    }

    __float128 log10(__float128 x)
    {
        return ::log10q(x);
    }

    __float128 log2(__float128 x)
    {
        return ::log2q(x);
    }

    __float128 log1p(__float128 x)
    {
        return ::log1pq(x);
    }

    long int lrint(__float128 x)
    {
        return ::lrintq(x);
    }

    long int lround(__float128 x)
    {
        return ::lroundq(x);
    }

    __float128 modf(__float128 x, __float128 *p)
    {
        return ::modfq(x, p);
    }

    __float128 nan(const char *p)
    {
        return ::nanq(p);
    }

    __float128 nearbyint(__float128 x)
    {
        return ::nearbyintq(x);
    }

    __float128 nextafter(__float128 x, __float128 y)
    {
        return ::nextafterq(x, y);
    }

    __float128 pow(__float128 x, __float128 y)
    {
        return ::powq(x, y);
    }
}
