#define EXERCISE "1-12. Write a program that prints its input one word per line."

#include <stdio.h>

int main()
{
    printf("✅\tExercise %s\n", EXERCISE);

    int c;

    while ((c = getchar()) != EOF)
        if (c == ' ' || c == '\n' || c == '\t')
            putchar('\n');
        else
            putchar(c);

    printf("Bye.\n");

    return 0;
}