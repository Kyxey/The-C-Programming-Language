#define EXERCISE "1-2. Experiment to find out what happens when printf's arguments string contains \\c, where c is some character not listed above."

#include <stdio.h>


int main()
{
    printf("✅\tExercise %s\n", EXERCISE);

    printf("Hello Kyxey!\c"); // Must throw compile error

    return 0;
}