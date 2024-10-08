#ifndef PYTHONIC_INCLUDE_NUMPY_NEXTAFTER_HPP
#define PYTHONIC_INCLUDE_NUMPY_NEXTAFTER_HPP

#include "pythonic/include/types/ndarray.hpp"
#include "pythonic/include/types/numpy_broadcast.hpp"
#include "pythonic/include/utils/functor.hpp"
#include "pythonic/include/utils/numpy_traits.hpp"

PYTHONIC_NS_BEGIN

namespace numpy
{
#define NUMPY_NARY_FUNC_NAME nextafter
#define NUMPY_NARY_FUNC_SYM std::nextafter
#include "pythonic/include/types/numpy_nary_expr.hpp"
} // namespace numpy
PYTHONIC_NS_END

#endif
