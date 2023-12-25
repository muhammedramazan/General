#include <iostream>
int main(int argc, char const *argv[]) {
  for (size_t i = 0, j = 0; i < 4; i++) {
    std::cout << "post " << i << " " << j++ << std::endl;
  }
  for (size_t i = 0, j = 0; i < 4; ++i) {
    std::cout << "pre " << i << " " << ++j << std::endl;
  }
  return 0;
}
