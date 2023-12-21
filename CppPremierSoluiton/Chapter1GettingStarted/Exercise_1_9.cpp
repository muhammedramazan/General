#include <iostream>
int main() {
  int start = 50, end = 100, current = start;
  int sum = 0;
  while (current <= end) {
    sum += current++;
  }
  std::cout << sum << std::endl;
  return 0;
}