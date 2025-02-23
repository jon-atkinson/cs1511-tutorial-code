// B: Enter characters until the user presses 'q'. Then, display the count of characters entered.
// Written by T15B
// on 11/06/2024


#include <stdio.h>

int main(void) {

    int count = 0;
    char character = 0;

    printf("Please enter a character: ");
    scanf("%c", &character);

    while (character != 'q') {
        count++;
        printf("Please enter a character: ");
        scanf(" %c", &character);
    }

    printf("Count: %d\n", count);

    return 0;
}