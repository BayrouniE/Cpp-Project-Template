#include "my_lib.hpp"

#include <cstdint>
#include <iostream>

void print_hello_world() { std::cout << "Hello World!\n"; }

std::uint32_t factorial(std::uint32_t number) {
  return number <= 1 ? 1 : factorial(number - 1) * number;
}