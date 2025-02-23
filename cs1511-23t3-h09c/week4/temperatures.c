// COMP1511 23T3 H09C tut problem

#include <stdio.h>

#define NUM_DAYS 8
#define LEN_ARRAY 100

int main(void) {
    int i = 0;

    double temps[LEN_ARRAY] = {};

    while (scanf("%lf", &temps[i]) == 1) {
        i++;
    }

    double largest_temp = temps[0];
    int j = 0;
    while (j < i) {
        // Create an if statement to check if the current character has a higher ascii value than "largest_character"
        if (temps[j] > largest_temp) {
            largest_temp = temps[j];
        }
        j++;
    }

    printf("%.3lf\n", largest_temp);

    return 0;
}