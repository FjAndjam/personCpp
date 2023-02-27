#include "complex.h"
#include <iostream>

std::ostream &operator<<(std::ostream &os, const complex &x) {
  return os << "(" << x.real() << "," << x.imag() << ")";
}

int main() {
  complex cp1(1, 2);
  complex cp2(-1, 2);
  std::cout << cp1 << "," << cp2 << std::endl;
  std::cout << cp1 + cp2 << std::endl;
  std::cout << 100 + cp1 << std::endl;
  std::cout << cp2 + 23 << std::endl;

  return 0;
}