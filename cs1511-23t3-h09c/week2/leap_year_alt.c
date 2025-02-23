// auth: Jon Atkinson (z5363013)
// date: 21/09/2023

#include <stdio.h>

int main(void) {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // ignore this bit, just to make the output a little fancier
    char *tense = NULL;
    if (year < 2023) {
        tense = "was";
    } else {
        tense = "is";
    }


    if (year % 400 == 0) {
        printf("%d %s a leap year\n", year, tense);
        return 0;
    }

    if (year % 100 == 0) {
        printf("%d %s NOT a leap year\n", year, tense);
        return 0;
    }

    if (year % 4 == 0) {
        printf("%d %s a leap year\n", year, tense);
        return 0;
    }

    printf("%d %s NOT a leap year\n", year, tense);
    return 0;
}