#define EXERCISE "1-5. Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0."

#include <stdio.h>
#include <stdint.h>


/* print Fahrenheit-Celsius table
    for fahr = 300, 280, ..., 0; floating-point version */
int main()
{
    printf("✅\tExercise %s\n", EXERCISE);
    uint16_t lower, upper, step;

    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */


    // table header
    printf("╔═══════════════╦═══════════════╗\n");
    printf("║ Fahrenheit\t║ Celsius\t║\n");
    printf("╠═══════════════╬═══════════════╣\n");

    for (float fahr = upper; fahr >= lower; fahr -= step)
    {
        const float celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("║ %3.0f\t\t║ %6.1f\t║\n", fahr, celsius);

        if (fahr - step >= lower) {
            printf("╟───────────────╫───────────────╢\n");
        }
        else {
            printf("╚═══════════════╩═══════════════╝\n");
        }
    }

    return 0;
}