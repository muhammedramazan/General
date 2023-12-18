#include <iostream>

/// @brief Statements are fragments of the C++ program that are executed in
/// sequence. The body of any function is a sequence of statements. For example
#define FlowControl ""

void main_statement_example() {
  int n = 1;                         // declaration statement
  n = n + 1;                         // expression statement
  std::cout << "n = " << n << '\n';  // expression statement
}
/*
C++ includes the following types of statements:     //
1) labeled statements;                              //
2) expression statements;                           //
3) compound statements;                             //
4) selection statements;                            //
5) iteration statements;                            //
6) jump statements;                                 //
7) declaration statements;                          //
8) try blocks;                                      //
9) atomic and synchronized blocks (TM TS).          //
*/

/**
 * @brief Conditionally executes another statement.
 *    Used where code needs to be executed based on a run-timeor
 *    compile-time(since C++17) condition, or whether the if statement is
 *    evaluated in a manifestly constant-evaluated context(since C++23).
 */
void main_if() {
  // simple if-statement with an else clause
  int i = 2;
  if (i > 2)
    std::cout << i << " is greater than 2\n";
  else
    std::cout << i << " is not greater than 2\n";

  // nested if-statement
  int j = 1;
  if (i > 1)
    if (j > 2)
      std::cout << i << " > 1 and " << j << " > 2\n";
    else  // this else is part of if (j > 2), not of if (i > 1)
      std::cout << i << " > 1 and " << j << " <= 2\n";

  // declarations can be used as conditions with dynamic_cast
  struct Base {
    virtual ~Base() {}
  };

  struct Derived : Base {
    void df() { std::cout << "df()\n"; }
  };

  Base* bp1 = new Base;
  Base* bp2 = new Derived;

  if (Derived* p = dynamic_cast<Derived*>(bp1))  // cast fails, returns nullptr
    p->df();                                     // not executed

  if (auto p = dynamic_cast<Derived*>(bp2))  // cast succeeds
    p->df();                                 // executed
}

void main_switch() {
  const int i = 2;
  switch (i) {
    case 1:
      std::cout << '1';
    case 2:  // execution starts at this case label
      std::cout << '2';
    case 3:
      std::cout << '3';
      [[fallthrough]];  // C++17 attribute to silent the warning on fallthrough
    case 5:
      std::cout << "45";
      break;  // execution of subsequent statements is terminated
    case 6:
      std::cout << '6';
  }
switch (i) {
    case 1:
      std::cout << '1';
    case 2:  // execution starts at this case label
      std::cout << '2';
    case 3:
      std::cout << '3';
    case 5:
      std::cout << "45";
      break;  // execution of subsequent statements is terminated
    case 6:
      std::cout << '6';
  }
  std::cout << '\n';

  switch (i) {
    case 4:
      std::cout << 'a';
    default:
      std::cout << 'd';  // there are no applicable constant expressions
                         // therefore default is executed
  }

  std::cout << '\n';

  switch (i) {
    case 4:
      std::cout << 'a';  // nothing is executed
  }

  // when enumerations are used in a switch statement, many compilers
  // issue warnings if one of the enumerators is not handled
  enum color { RED, GREEN, BLUE };
  switch (RED) {
    case RED:
      std::cout << "red\n";
      break;
    case GREEN:
      std::cout << "green\n";
      break;
    case BLUE:
      std::cout << "blue\n";
      break;
  }

  // the C++17 init-statement syntax can be helpful when there is
  // no implicit conversion to integral or enumeration type
  struct Device {
    enum State { SLEEP, READY, BAD };
    auto state() const { return m_state; }

    /*...*/

   private:
    State m_state{};
  };

  switch (auto dev = Device{}; dev.state()) {
    case Device::SLEEP:
      /*...*/
      break;
    case Device::READY:
      /*...*/
      break;
    case Device::BAD:
      /*...*/
      break;
  }

  // pathological examples

  // the statement doesn't have to be a compound statement
  switch (0)
    std::cout << "this does nothing\n";

  // labels don't require a compound statement either
  switch (int n = 1) {
    case 0:
    case 1:
      std::cout << n << '\n';
  }
}
int main() {
  //main_statement_example();
  //main_if();
  main_switch();
  return 1;
}