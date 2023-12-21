#include <iostream>
int main() {
  int start = 10, end = 0, current = start;
  while (current >= end) {
    std::cout << current-- << std::endl;
  }
  return 0;
}