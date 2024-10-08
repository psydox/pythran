#ifndef PYTHONIC_NUMPY_FFT_IFFT_HPP
#define PYTHONIC_NUMPY_FFT_IFFT_HPP

#include "pythonic/builtins/None.hpp"
#include "pythonic/include/numpy/fft/ifft.hpp"
#include "pythonic/include/utils/array_helper.hpp"
#include "pythonic/numpy/fft/c2c.hpp"
#include "pythonic/types/ndarray.hpp"
#include "pythonic/utils/functor.hpp"

PYTHONIC_NS_BEGIN

namespace numpy
{
  namespace fft
  {

    template <class T, class pS>
    types::ndarray<
        typename std::enable_if<types::is_complex<T>::value, T>::type,
        types::array_tuple<long, std::tuple_size<pS>::value>>
    ifft(types::ndarray<T, pS> const &in_array, types::none_type n, long axis,
         types::str const &norm)
    {
      return c2c(in_array, -1, axis, norm, false);
    }

    template <class T, class pS>
    types::ndarray<
        typename std::enable_if<types::is_complex<T>::value, T>::type,
        types::array_tuple<long, std::tuple_size<pS>::value>>
    ifft(types::ndarray<T, pS> const &in_array, types::none_type n, long axis,
         types::none_type norm)
    {
      return c2c(in_array, -1, axis, "", false);
    }

    template <class T, class pS>
    types::ndarray<
        typename std::enable_if<types::is_complex<T>::value, T>::type,
        types::array_tuple<long, std::tuple_size<pS>::value>>
    ifft(types::ndarray<T, pS> const &in_array, long n, long axis,
         types::none_type norm)
    {
      return c2c(in_array, n, axis, "", false);
    }

    template <class T, class pS>
    types::ndarray<
        typename std::enable_if<types::is_complex<T>::value, T>::type,
        types::array_tuple<long, std::tuple_size<pS>::value>>
    ifft(types::ndarray<T, pS> const &in_array, long n, long axis,
         types::str const &norm)
    {
      return c2c(in_array, n, axis, norm, false);
    }

    template <class T, class pS>
    types::ndarray<typename std::enable_if<std::is_floating_point<T>::value,
                                           std::complex<T>>::type,
                   types::array_tuple<long, std::tuple_size<pS>::value>>
    ifft(types::ndarray<T, pS> const &in_array, types::none_type n, long axis,
         types::str const &norm)
    {
      return r2c(in_array, -1, axis, norm, false);
    }

    template <class T, class pS>
    types::ndarray<typename std::enable_if<std::is_floating_point<T>::value,
                                           std::complex<T>>::type,
                   types::array_tuple<long, std::tuple_size<pS>::value>>
    ifft(types::ndarray<T, pS> const &in_array, types::none_type n, long axis,
         types::none_type norm)
    {
      return r2c(in_array, -1, axis, "", false, true);
    }

    template <class T, class pS>
    types::ndarray<typename std::enable_if<std::is_floating_point<T>::value,
                                           std::complex<T>>::type,
                   types::array_tuple<long, std::tuple_size<pS>::value>>
    ifft(types::ndarray<T, pS> const &in_array, long n, long axis,
         types::none_type norm)
    {
      return r2c(in_array, n, axis, "", false, true);
    }

    template <class T, class pS>
    types::ndarray<typename std::enable_if<std::is_floating_point<T>::value,
                                           std::complex<T>>::type,
                   types::array_tuple<long, std::tuple_size<pS>::value>>
    ifft(types::ndarray<T, pS> const &in_array, long n, long axis,
         types::str const &norm)
    {
      return r2c(in_array, n, axis, norm, false, true);
    }

    template <class T, class pS>
    types::ndarray<typename std::enable_if<std::is_integral<T>::value,
                                           std::complex<double>>::type,
                   types::array_tuple<long, std::tuple_size<pS>::value>>
    ifft(types::ndarray<T, pS> const &in_array, types::none_type n, long axis,
         types::str const &norm)
    {
      auto tmp_array = _copy_to_double(in_array);
      return r2c(tmp_array, -1, axis, norm, false, true);
    }

    template <class T, class pS>
    types::ndarray<typename std::enable_if<std::is_integral<T>::value,
                                           std::complex<double>>::type,
                   types::array_tuple<long, std::tuple_size<pS>::value>>
    ifft(types::ndarray<T, pS> const &in_array, types::none_type n, long axis,
         types::none_type norm)
    {
      auto tmp_array = _copy_to_double(in_array);
      return r2c(tmp_array, -1, axis, "", false, true);
    }

    template <class T, class pS>
    types::ndarray<typename std::enable_if<std::is_integral<T>::value,
                                           std::complex<double>>::type,
                   types::array_tuple<long, std::tuple_size<pS>::value>>
    ifft(types::ndarray<T, pS> const &in_array, long n, long axis,
         types::none_type norm)
    {
      auto tmp_array = _copy_to_double(in_array);
      return r2c(tmp_array, n, axis, "", false, true);
    }

    template <class T, class pS>
    types::ndarray<typename std::enable_if<std::is_integral<T>::value,
                                           std::complex<double>>::type,
                   types::array_tuple<long, std::tuple_size<pS>::value>>
    ifft(types::ndarray<T, pS> const &in_array, long n, long axis,
         types::str const &norm)
    {
      auto tmp_array = _copy_to_double(in_array);
      return r2c(tmp_array, n, axis, norm, false, true);
    }

    NUMPY_EXPR_TO_NDARRAY0_IMPL(ifft);
  } // namespace fft
} // namespace numpy
PYTHONIC_NS_END

#endif
