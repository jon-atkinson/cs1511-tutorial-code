// A: Enter a series of integers until you reach a negative number. Then, stop and calculate the sum.
// Written by T15B
// on 11/06/2024

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