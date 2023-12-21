#include <iostream>
int main() {
  int input_1 = 0, input_2 = 0;
  std::cout << "Enter Two Integer" << std::endl;
  std::cin >> input_1 >> input_2;
  int increment = 1, min = 0, max = 0;
  if (input_1 < input_2) min = input_1, max = input_2;
  else max = input_1, min = input_2;
  while (min <= max) {
    std::cout << min++ << std::endl;
  }
  return 0;
}