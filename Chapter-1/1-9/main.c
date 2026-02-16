#define EXERCISE "1-9. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank."

#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("✅\tExercise %s\n", EXERCISE);

    char c;
    bool blanks_seen = false;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
        {
            blanks_seen = true;
        }

        if (!blanks_seen) {
            putchar(c);
        }
    }

    printf("Bye.\n");

    return 0;
}