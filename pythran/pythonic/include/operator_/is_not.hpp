#ifndef PYTHONIC_INCLUDE_OPERATOR_ISNOT_HPP
#define PYTHONIC_INCLUDE_OPERATOR_ISNOT_HPP

#include "pythonic/include/utils/functor.hpp"

PYTHONIC_NS_BEGIN

namespace operator_
{

  template <class A, class B>
  auto is_not(A const &a, B const &b)
      -> decltype(builtins::id(a) != builtins::id(b));

  DEFINE_FUNCTOR(pythonic::operator_, is_not);
}
PYTHONIC_NS_END

#endif
