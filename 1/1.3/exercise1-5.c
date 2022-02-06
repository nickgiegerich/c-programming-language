#include <stdio.h>

#define LOWER 0   // lower limit of table
#define UPPER 300 // upper limit
#define STEP 20   // step size

/* print Fahrenheit-Celsius table */
int main()
{
    int fahr;

    // prints from 0 to 300 degrees
    // for (fahr = 0; fahr <= 300; fahr = fahr + 20)
    //     printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));

    // modified to print from 300 to 0 degress
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%2d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}