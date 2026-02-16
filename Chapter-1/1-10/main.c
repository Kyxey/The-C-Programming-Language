#define EXERCISE "1-10. Write a program to copy its input to its output, replacing each tab by \\t, each backspace by \\b, and each backslash by \\\\. This makes tabs and backspaces visible in an unambiguous way."

/*
 * Exercise
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("✅\tExercise %s\n", EXERCISE);

    char c;

    while ((c = getchar()) != EOF) {
        switch (c) {
        case '\t':
        {
            putchar('\\');
            putchar('t');
            break;
        }
        case '\b':
        {
            putchar('\\');
            putchar('b');
            break;
        }
        case '\\':
        {
            putchar('\\');
            putchar('\\');
            break;
        }
        default:
        { putchar(c); }
        }
    }

    printf("Bye.\n");

    return 0;
}