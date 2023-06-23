#include <stdio.h>

#define NUM_DAYS 7

int main(void) {

    // Declare and initialise array
    int temps[NUM_DAYS] = {0};

    // Read in values
    // NB: For loops are taught this term (22T3)
    for (int i = 0; i < NUM_DAYS; i++) {
        scanf("%d", &temps[i]);
    }

    // Find max values
    int max_temp = temps[0];
    for (int i = 0; i < NUM_DAYS; i++) {
        if (temps[i] > max_temp) {
            max_temp = temps[i];
        }
    }

    // Print max temp
    printf("Max temp is: %d\n", max_temp);

    return 0;
}