#define EXERCISE "1-15. Rewrite the temperature conversion program of Section 1.2 to use a function for conversion."

#include <stdio.h>
#include <stdint.h>

float toCelsius(float);

float toCelsius(float f)
{
    return (5.0 / 9.0) * (f - 32.0);
}

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
        celsius = toCelsius(fahr);
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