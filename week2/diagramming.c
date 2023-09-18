// Author: Jonathan Atkinson, z5363013
// Created: 18/09/2023

#include <stdio.h>

// procedure prototypes
void print_error_1(int a, int b);
void print_div_by_zero_error();

int main(void) {
    printf("please enter a and b: ");
    // not the reccomended format for declaring variables but here so that you can see it
    // being used
    int a, b;
    scanf("%d %d", &a, &b);

    if (a < b) {
        // note the use of a procedure here to print the error message, which is requested
        // by the specification
        print_error_1(a, b);
        return 1;
    }

    if (b == 0) {
        print_div_by_zero_error();
        return 1;
    }

    // note the .5 in the %.5f, this limits the %f to 5 decimal places
    if (a > b) {
        printf("a/b is %d and (a*0.1)/(b*0.1) is %.5f\n", a/b, (a*0.1)/(b*0.1));
    }

    return 0;
}

void print_error_1(int a, int b) {
    printf("error: %d is less than %d\n", a, b);
}

void print_div_by_zero_error() {
    printf("b is zero, cannot divide by 0\n");
}
