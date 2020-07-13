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
    __float128 acos(__float128 const &x) noexcept
    {
        return ::acosq(x);
    }

    __float128 acosh(__float128 const &x) noexcept
    {
        return ::acoshq(x);
    }

    __float128 asin(__float128 const &x) noexcept
    {
        return ::asinq(x);
    }

    __float128 asinh(__float128 const &x) noexcept
    {
        return ::asinhq(x);
    }

    __float128 atan(__float128 const &x) noexcept
    {
        return ::atanq(x);
    }

    __float128 atanh(__float128 const &x) noexcept
    {
        return ::atanhq(x);
    }

    __float128 atan2(__float128 const &y, __float128 const &x) noexcept
    {
        return ::atan2q(y, x);
    }

    __float128 cbrt(__float128 const &x) noexcept
    {
        return ::cbrtq(x);
    }

    __float128 ceil(__float128 const &x) noexcept
    {
        return ::ceilq(x);
    }

    __float128 copysign(__float128 const &x, __float128 const &y) noexcept
    {
        return ::copysignq(x, y);
    }

    __float128 cosh(__float128 const &x) noexcept
    {
        return ::coshq(x);
    }

    __float128 cos(__float128 const &x) noexcept
    {
        return ::cosq(x);
    }

    __float128 erf(__float128 const &x) noexcept
    {
        return ::erfq(x);
    }

    __float128 erfc(__float128 const &x) noexcept
    {
        return ::erfcq(x);
    }

#if 0
    __float128 exp2(__float128 const &x) noexcept
    {
        return ::exp2q(x);
    }
#endif

    __float128 exp(__float128 const &x) noexcept
    {
        return ::expq(x);
    }

    __float128 expm1(__float128 const &x) noexcept
    {
        return ::expm1q(x);
    }

    __float128 fabs(__float128 const &x) noexcept
    {
        return ::fabsq(x);
    }

    __float128 fdim(__float128 const &x) noexcept
    {
        return ::floorq(x);
    }

    __float128 finite(__float128 const &x) noexcept
    {
        return ::finiteq(x);
    }

    __float128 floor(__float128 const &x) noexcept
    {
        return ::floorq(x);
    }

    __float128 fma(__float128 const &x, __float128 const &y, __float128 const &z) noexcept
    {
        return ::fmaq(x, y, z);
    }

    __float128 fmax(__float128 const &x, __float128 const &y) noexcept
    {
        return ::fmaxq(x, y);
    }

    __float128 fmin(__float128 const &x, __float128 const &y) noexcept
    {
        return ::fminq(x, y);
    }

    __float128 fmod(__float128 const &x, __float128 const &y) noexcept
    {
        return ::fmodq(x, y);
    }

    __float128 frexp(__float128 const &x, int *p) noexcept
    {
        return ::frexpq(x, p);
    }

    __float128 hypot(__float128 const &a, __float128 const &b) noexcept
    {
        return ::hypotq(a, b);
    }

    __float128 ilogb(__float128 const &x) noexcept
    {
        return ::ilogbq(x);
    }

    __float128 isinf(__float128 const &x) noexcept
    {
        return ::isinfq(x);
    }

    __float128 isnan(__float128 const &x) noexcept
    {
        return ::isnanq(x);
    }

#if 0
    __float128 issignaling(__float128 const &x) noexcept
    {
        return ::issignalingq(x);
    }
#endif

    __float128 j0(__float128 const &x) noexcept
    {
        return ::j0q(x);
    }

    __float128 j1(__float128 const &x) noexcept
    {
        return ::j1q(x);
    }

    __float128 jn(int n, __float128 x) noexcept
    {
        return ::jnq(n, x);
    }

    __float128 ldexp(__float128 const &x, int n) noexcept
    {
        return ::ldexpq(x, n);
    }

    __float128 lgamma(__float128 const &x) noexcept
    {
        return ::lgammaq(x);
    }

    long long int llrint(__float128 const &x) noexcept
    {
        return ::llrintq(x);
    }

    long long int llround(__float128 const &x) noexcept
    {
        return ::llroundq(x);
    }

    __float128 logb(__float128 const &x) noexcept
    {
        return ::logbq(x);
    }

    __float128 log(__float128 const &x) noexcept
    {
        return ::logq(x);
    }

    __float128 log10(__float128 const &x) noexcept
    {
        return ::log10q(x);
    }

    __float128 log2(__float128 const &x) noexcept
    {
        return ::log2q(x);
    }

    __float128 log1p(__float128 const &x) noexcept
    {
        return ::log1pq(x);
    }

    long int lrint(__float128 const &x) noexcept
    {
        return ::lrintq(x);
    }

    long int lround(__float128 const &x) noexcept
    {
        return ::lroundq(x);
    }

    __float128 modf(__float128 const &x, __float128 &p) noexcept
    {
        return ::modfq(x, &p);
    }

    __float128 nan(const char *p) noexcept
    {
        return ::nanq(p);
    }

    __float128 nearbyint(__float128 const &x) noexcept
    {
        return ::nearbyintq(x);
    }

    __float128 nextafter(__float128 const &x, __float128 const &y) noexcept
    {
        return ::nextafterq(x, y);
    }

    __float128 pow(__float128 const &x, __float128 const &y) noexcept
    {
        return ::powq(x, y);
    }

    __float128 remainder(__float128 const &x, __float128 const &y) noexcept
    {
        return ::remainderq(x, y);
    }

    __float128 remquo(__float128 const &x, __float128 const &y, int *p) noexcept
    {
        return ::remquoq(x, y, p);
    }

    __float128 rint(__float128 const &x) noexcept
    {
        return ::rintq(x);
    }

    __float128 round(__float128 const &x) noexcept
    {
        return ::roundq(x);
    }

    __float128 scalbln(__float128 const &x, long int y) noexcept
    {
        return ::scalblnq(x, y);
    }

    __float128 scalbn(__float128 const &x, int y) noexcept
    {
        return ::scalbnq(x, y);
    }

    int signbit(__float128 const &x) noexcept
    {
        return ::signbitq(x);
    }

    void sincos(__float128 const &x, __float128 &s, __float128 &c) noexcept
    {
        ::sincosq(x, &s, &c);
    }

    __float128 sinh(__float128 const &x) noexcept
    {
        return ::sinhq(x);
    }

    __float128 sin(__float128 const &x) noexcept
    {
        return ::sinq(x);
    }

    __float128 sqrt(__float128 const &x) noexcept
    {
        return ::sqrtq(x);
    }

    __float128 tan(__float128 const &x) noexcept
    {
        return ::tanq(x);
    }

    __float128 tanh(__float128 const &x) noexcept
    {
        return ::tanhq(x);
    }

    __float128 tgamma(__float128 const &x) noexcept
    {
        return ::tgammaq(x);
    }

    __float128 trunc(__float128 const &x) noexcept
    {
        return ::truncq(x);
    }

    __float128 y0(__float128 const &x) noexcept
    {
        return ::y0q(x);
    }

    __float128 y1(__float128 const &x) noexcept
    {
        return ::y1q(x);
    }

    __float128 yn(int n, __float128 x) noexcept
    {
        return ::ynq(n, x);
    }

    __float128 cabs(__complex128 const &c) noexcept
    {
        return ::cabsq(c);
    }

    __float128 carg(__complex128 const &c) noexcept
    {
        return ::cargq(c);
    }

    __float128 cimag(__complex128 const &c) noexcept
    {
        return ::cimagq(c);
    }

    __float128 creal(__complex128 const &c) noexcept
    {
        return ::crealq(c);
    }

    __complex128 cacos(__complex128 const &c) noexcept
    {
        return ::cacosq(c);
    }

    __complex128 cacosh(__complex128 const &c) noexcept
    {
        return ::cacoshq(c);
    }

    __complex128 casin(__complex128 const &c) noexcept
    {
        return ::casinq(c);
    }

    __complex128 casinh(__complex128 const &c) noexcept
    {
        return ::casinhq(c);
    }

    __complex128 catan(__complex128 const &c) noexcept
    {
        return ::catanq(c);
    }

    __complex128 catanh(__complex128 const &c) noexcept
    {
        return ::catanhq(c);
    }

    __complex128 ccos(__complex128 const &c) noexcept
    {
        return ::ccosq(c);
    }

    __complex128 ccosh(__complex128 const &c) noexcept
    {
        return ::ccoshq(c);
    }

    __complex128 cexp(__complex128 const &c) noexcept
    {
        return ::cexpq(c);
    }

    __complex128 cexpi(__float128 const &imag) noexcept
    {
        return ::cexpiq(imag);
    }

    __complex128 clog(__complex128 const &c) noexcept
    {
        return ::clogq(c);
    }

    __complex128 clog10(__complex128 const &c) noexcept
    {
        return ::clog10q(c);
    }

    __complex128 conj(__complex128 const &c) noexcept
    {
        return ::conjq(c);
    }

    __complex128 cpow(__complex128 const &x, __complex128 const &y) noexcept
    {
        return ::cpowq(x, y);
    }

    __complex128 cproj(__complex128 const &x) noexcept
    {
        return ::cprojq(x);
    }

    __complex128 csin(__complex128 const &x) noexcept
    {
        return ::csinq(x);
    }

    __complex128 csinh(__complex128 const &x) noexcept
    {
        return ::csinhq(x);
    }

    __complex128 csqrt(__complex128 const &x) noexcept
    {
        return ::csqrtq(x);
    }

    __complex128 ctan(__complex128 const &x) noexcept
    {
        return ::ctanq(x);
    }

    __complex128 ctanh(__complex128 const &x) noexcept
    {
        return ::ctanhq(x);
    }
}
