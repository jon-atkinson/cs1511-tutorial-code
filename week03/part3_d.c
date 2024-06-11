// Scan for integers keeping a cumulative sum, until the sum of entered integers 
// reaches or exceeds the target sum provided by the user. Print the final sum.
// Written by T15B
// on 11/06/2024

#include <stdio.h>

int main(void) {
    int num = 0;
    int sum = 0;
    int target = 0;

    printf("Please enter a target sum: ");
    scanf("%d", &target);

    printf("Please enter a number: ");
    scanf("%d", &num);
    sum += num;

    while (sum < target) {
        printf("Please enter a number: ");
        scanf("%d", &num);
        sum += num;
    }

    printf("Sum: %d\n", sum);
    return 0;
}
