// auth: Jon Atkinson (z5363013)
// date: 21/09/2023

#include <stdio.h>

int main(void) {
    // scan in two integers a and b
    printf("Please enter a and b: ");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d, %d\n", a, b);

    // if the first integer is less than the second, print out a short error message using a
    // procedure 
    if (a < b) {
        printf("%d is less than %d, a should not be less than b\n", a, b);
        return 1;
    }

    // if the second integer is 0, print out a different short error message 
    if (b == 0) {
        printf("b cannot be 0, since we cannot divide by 0\n");
        return 1;
    }

    // if the first integer is larger than the second, print a / b and (a * 0.1) / (b * 0.1)
    printf("a/b is %d and (a*0.1)/(b*0.1) is %f\n", a/b, (a*0.1)/(b*0.1));

    return 0;
}