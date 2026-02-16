#define EXERCISE "1-3. Modify the temperature conversion program to print a heading above the table."

#include <stdio.h>
#include <stdint.h>


/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version */
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
    printf("║ Fahrenheit\t║ Celsius\t║\n");
    printf("╠═══════════════╬═══════════════╣\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("║ %3.0f\t\t║ %6.1f\t║\n", fahr, celsius);

        fahr += step;

        if (fahr <= upper) {
            printf("╟───────────────╫───────────────╢\n");
        }
        else {
            printf("╚═══════════════╩═══════════════╝\n");
        }

    }

    return 0;
}