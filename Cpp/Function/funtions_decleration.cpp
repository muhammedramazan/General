/**
 * A function declaration introduces the function name and its type. A function
 * definition associates the function name/type with the function body.
 */

/**
 * Function declaration
 * Function declarations may appear in any scope. A function declaration at
 * class scope introduces a class member function (unless the friend specifier
 * is used), see member functions and friend functions for details.
 *
 */
/**
 * Using a  olatile-qualified object type as parameter type or return type is
 * deprecated. (since C++20)
 */

#include <cstdio>
#include <iostream>

int x = 1;
auto f() { return x; }         // return type is int
const auto& f_() { return x; }  // return type is const int&

template<typename ReturnType> 
ReturnType ReturnTypeDeducation()
{
  ReturnType a;
  return a;
}

int main() {
  const char arr[10]{2, 4, 6, 8};

  for (const char& c : arr) {
    printf("c=%c\n", c);
  }
  int a  = ReturnTypeDeducation<double>();
  a = ReturnTypeDeducation<int>();
}