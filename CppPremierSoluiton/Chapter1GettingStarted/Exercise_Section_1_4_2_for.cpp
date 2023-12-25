#include <iostream>
int main() {
  // Exercise 1.12: What does the following for loop do? What is the ﬁnal value
  // of sum?
  int sum = 0;
  for (int i = -100; i <= 100; ++i) sum += i;
  std::cout << "sum :: " << sum << std::endl;
  // Answer : 0
  return 1;
}