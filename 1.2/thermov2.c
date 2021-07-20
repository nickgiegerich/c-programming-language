#include <stdio.h>

/* print Fahrenheit-Celisius table
    for fahr = 0, 20, ...., 30 */

int main() { 
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;  // lower limit of temp table
    upper = 300; // upper limit
    step = 20; // step size

    printf("Fahrenheit | Celsius\n");
    printf("--------------------\n");
    fahr = lower;
    while (fahr <= upper) {
        celsius = 5.0/9.0 * (fahr-32.0);
        printf("F: %3.0f | C: %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}