#ifndef PYTHONIC_INCLUDE_NUMPY_FLIPUD_HPP
#define PYTHONIC_INCLUDE_NUMPY_FLIPUD_HPP

#include "pythonic/include/utils/functor.hpp"
#include "pythonic/include/types/ndarray.hpp"

PYTHONIC_NS_BEGIN

namespace numpy
{
  template <class E>
  auto flipud(E &&expr) -> decltype(std::forward<E>(
      expr)[types::slice{__builtin__::None, __builtin__::None, -1}]);

  DECLARE_FUNCTOR(pythonic::numpy, flipud);
}
PYTHONIC_NS_END

#endif
