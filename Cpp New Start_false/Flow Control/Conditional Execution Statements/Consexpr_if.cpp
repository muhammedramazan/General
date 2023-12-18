#include <iostream>

// The return statements in a discarded statement do not participate in function
// return type deduction:

template <typename T>
auto get_value(T t) {
  if constexpr (std::is_pointer_v<T>)
    return *t;  // deduces return type to int for T = int*
  else
    return t;  // deduces return type to int for T = int
}

// The discarded statement can odr-use a variable that is not defined:
extern int x;  // no definition of x required

int f() {
  if constexpr (true)
    return 0;
  else if (x)
    return x;
  else
    return -x;
}

// Outside a template, a discarded statement is fully checked. if constexpr is
// not a substitute for the #if preprocessing directive:

void ff() {
  if constexpr (false) {
    int i = 0;
    // -> int *p = i; // Error even though in discarded statement
  }
}

// If a constexpr if statement appears inside a templated entity, and if
// condition is not value-dependent after instantiation, the discarded statement
// is not instantiated when the enclosing template is instantiated.

template <typename T, typename... Rest>
void g(T&& p, Rest&&... rs) {
  std::cout << "p : " << p << " ";
  // ... handle p
  if constexpr (sizeof...(rs) > 0)
    g(rs...);  // never instantiated with an empty argument list.
}

// Note: an example where the condition remains value-dependent after
// instantiation is a nested template, e.g.

template <class T>
void gg() {
  auto lm = [=](auto p) {
    if constexpr (sizeof(T) == 1 && sizeof p == 1) {
      // this condition remains value-dependent after instantiation of g<T>,
      // which affects implicit lambda captures
      // this compound statement may be discarded only after
      // instantiation of the lambda body
    }
  };
}

// Note: the discarded statement cannot be ill-formed for every possible
// specialization:

template <typename T>
void fff() {
  if constexpr (std::is_arithmetic_v<T>)
    std::cout << "is arithmetic\n";
  else {
    using invalid_array = int[12];  // ill-formed: invalid for every T
    // using invalid_array = int[-1]; // ill-formed: invalid for every T
    static_assert(true, "Must be arithmetic");  // ill-formed before CWG2518
    // static_assert(false, "Must be arithmetic"); // ill-formed before CWG2518
  }
}

// The common workaround before the implementation of CWG2518 for such a
// catch-all statement is a type-dependent expression that is always false:

template <typename>
inline constexpr bool dependent_false_v = false;

template <typename T>
void ffff() {
  if constexpr (std::is_arithmetic_v<T>)
    std::cout << "is arithmetic\n";
  else {
    // workaround before CWG2518
    std::cout << "is not arithmetic\n";

    static_assert(dependent_false_v<T>, "Must be arithmetic");
  }
}

class B{};
int main() {
  int v_1 = 12;
  int p_v_1;
  std::cout << "1 : " << get_value(v_1) << "\n";
  std::cout << "2 : " << get_value(&v_1) << "\n";

  std::cout << "f() : " << f() << "\n";

  g(1, 2, 3, 4, 5, 6, 7, 8, 9, 0);

  gg<char>();
  std::cout << "\n";
  fff<int>();
  ffff<int>();
  return 1;
}