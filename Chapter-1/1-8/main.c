#define EXERCISE "1-8. Write a program to count blanks, tabs, and newlines."

#include <stdio.h>
#include <stdint.h>

/* count lines in input */
int main()
{
    printf("✅\tExercise %s\n", EXERCISE);

    char c;
    uint16_t new_lines = 0U, blanks = 0U, tabs = 0U, other_chars = 0U;

    while ((c = getchar()) != EOF) {
        switch (c)
        {
        case '\n':
        {
            ++new_lines;
            break;
        }
        case ' ':
        {
            ++blanks;
            break;
        }
        case '\t':
        {
            ++tabs;
            break;
        }
        default:
        {
            ++other_chars;
            break;
        }
        }
    }
    printf("New lines: %d\nTabs: %d\nBlanks: %d\nOther Characters: %d\n", new_lines, tabs, blanks, other_chars);

    return 0;
}