// auth: Jon Atkinson (z5363013)
// date: 21/09/2023

#include <stdio.h>

int main(void) {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 != 0) {
        printf("%d NOT a leap year\n", year);
        return 0;
    }

    if (year % 100 != 0) {
        printf("%d is a leap year\n", year);
        return 0;
    }

    if (year % 400 == 0) {
        printf("%d is a leap year\n", year);
        return 0;
    }

    printf("%d is NOT a leap year\n", year);

    return 0;
}