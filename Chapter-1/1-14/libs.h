#ifndef INTERNAL_LIBS_H
#define INTERNAL_LIBS_H

#include <stdint.h>

#define LENGTH_SIZE 95 // ASCII characters from 32 (Space) to 126 (~), 95 characters total

uint16_t get_max(uint8_t arr[LENGTH_SIZE]);
uint8_t get_nonzero_count(uint8_t arr[LENGTH_SIZE]);

#endif