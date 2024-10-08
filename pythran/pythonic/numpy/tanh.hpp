#ifndef PYTHONIC_NUMPY_TANH_HPP
#define PYTHONIC_NUMPY_TANH_HPP

#include "pythonic/include/numpy/tanh.hpp"

#include "pythonic/types/ndarray.hpp"
#include "pythonic/utils/functor.hpp"
#include "pythonic/utils/numpy_traits.hpp"

PYTHONIC_NS_BEGIN

namespace numpy
{
#define NUMPY_NARY_FUNC_NAME tanh
#define NUMPY_NARY_FUNC_SYM xsimd::tanh
#include "pythonic/types/numpy_nary_expr.hpp"
} // namespace numpy
PYTHONIC_NS_END

#endif
