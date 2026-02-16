#include <stdint.h>
#include "libs.h"

uint16_t get_max(uint8_t arr[LENGTH_SIZE]) {
    uint16_t max = 0;
    int16_t counter = 0;

    while (counter < LENGTH_SIZE) {
        uint16_t const current_value = arr[counter];

        if (current_value > max) {
            max = current_value;
        }

        ++counter;
    }

    return max;
}

uint8_t get_nonzero_count(uint8_t arr[LENGTH_SIZE]) {
    uint8_t nonzero_count = 0;
    int16_t counter = 0;

    while (counter < LENGTH_SIZE) {
        uint16_t const current_value = arr[counter];

        if (current_value > 0) {
            ++nonzero_count;
        }

        ++counter;
    }

    return nonzero_count;
}