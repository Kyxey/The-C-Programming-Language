#define EXERCISE "1-4. Write a program to print the corresponding Celsius to Fahrenheit table."

#include <stdio.h>
#include <stdint.h>


/* print Celsius-Fahrenheit table
    for cel = 0, 20, ..., 300; floating-point version */
int main()
{
    printf("✅\tExercise %s\n", EXERCISE);

    float fahr, celsius;
    uint16_t lower, upper, step;

    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */


    // table header
    printf("╔═══════════════╦═══════════════╗\n");
    printf("║ Celsius\t║ Fahrenheit\t║\n");
    printf("╠═══════════════╬═══════════════╣\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = ((9.0 * celsius) / 5.0) + 32.0;
        printf("║ %3.0f\t\t║ %6.1f\t║\n", celsius, fahr);

        celsius += step;

        if (celsius <= upper) {
            printf("╟───────────────╫───────────────╢\n");
        }
        else {
            printf("╚═══════════════╩═══════════════╝\n");
        }

    }

    return 0;
}