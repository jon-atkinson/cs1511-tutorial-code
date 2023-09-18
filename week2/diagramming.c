// Author: Jonathan Atkinson, z5363013
// Created: 18/09/2023

#include <stdio.h>

void print_error_1();
void print_div_by_zero_error();

int main(void) {
    printf("please enter a and b: ");
    int a, b;
    scanf("%d %d", &a, &b);

    if (a < b) {
        print_error_1();
    }

    if (b == 0) {
        print_div_by_zero_error();
    }

    if (a > b) {
        printf("a/b is %d and (a*0.1)/(b*0.1) is %.5f\n", a/b, (a*0.1)/(b*0.1));
    }

    return 0;
}

void print_error_1() {
        printf("error: a was less than b\n");
}

void print_div_by_zero_error() {
        printf("b is zero, cannot divide by 0\n");
}