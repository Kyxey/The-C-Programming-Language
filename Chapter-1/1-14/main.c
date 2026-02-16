#define EXERCISE "1-14. Write a program to print a histogram of the frequencies of different characters in its input."

#include <stdio.h>
#include <stdint.h>
#include "libs.h"

int main()
{
    printf("✅\tExercise %s\n", EXERCISE);

    int c;
    uint8_t lengths[LENGTH_SIZE];
    uint8_t temp_size;
    int16_t counter = LENGTH_SIZE - 1;
    uint16_t max = 0;
    uint8_t nonzero_count = 0;

    // zero-fill the lengths array
    while (counter >= 0) {
        lengths[counter] = 0;

        --counter;
    }

    // read the input chars and save them in the array
    while ((c = getchar()) != EOF) {
        lengths[c - 31] += 1;
    }

    // print the horizontal histogram
    counter = 1;
    while (counter < LENGTH_SIZE) {
        uint8_t const current_length_count = lengths[counter];

        if (current_length_count > 0) {
            int16_t line_counter = 1;
            printf("Length of \"%c\":\t", counter + 31);

            // print the bar
            while (line_counter <= current_length_count) {
                printf("◼︎");

                ++line_counter;
            }

            // print the count
            printf("\tx%d\n", current_length_count);
        }

        ++counter;
    }

    printf("\n");

    // print the vertical histogram
    counter = 0;
    max = get_max(lengths); // number of rows
    nonzero_count = get_nonzero_count(lengths); // number of columns
    while (counter < (max + 2)) {
        int16_t column_counter = 0;
        // the second last line
        if (counter == max) {
            printf("\t");

            // chart's floor
            while (column_counter < nonzero_count) {
                printf("‾‾‾‾‾‾‾‾");
                ++column_counter;
            }
        }
        // the last line
        else if (counter > max) {
            printf("   \t  ");
            // numbers
            while (column_counter < LENGTH_SIZE) {
                uint8_t const current_length_count = lengths[column_counter];

                if (current_length_count > 0) {
                    printf("\"%c\"\t  ", column_counter + 31);
                }
                ++column_counter;
            }
        }
        // other lines
        else {
            // line number 
            printf("x%d\t⎸ ", max - counter);

            // bars
            while (column_counter < LENGTH_SIZE) {
                uint8_t const current_length_count = lengths[column_counter];

                if (current_length_count > 0) {
                    if (current_length_count >= max - counter) {
                        printf("❚\t  ");
                    }
                    else {
                        printf(" \t  ");
                    }
                }
                ++column_counter;
            }
        }

        printf("\n");


        ++counter;
    }

    return 0;
}