#ifndef __MY_LIB_H
#define __MY_LIB_H

#include <cstdint>

/**
 * @brief Prints out hello world to the console
 *
 */
void print_hello_world();

/**
 * @brief Computes n!
 *
 * @param number: n
 * @return n!
 */
std::uint32_t factorial(std::uint32_t number);

#endif /*__MY_LIB_H */