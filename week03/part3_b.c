// B: Enter characters until the user presses 'q'. Then, display the count of characters entered.

#include <stdio.h>

int main(void) {
    int num = 0;
    int sum = 0;

    printf("Please enter a number: ");
    scanf("%d", &num);

    while (num >= 0) {
        sum += num;
        printf("Please enter a number: ");
        scanf("%d", &num);
    }

    printf("Sum: %d\n", sum);
    return 0;
}


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
