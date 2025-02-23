// printing.c
//
// Written by COMP1511, T09A 09/2024
//
// A simple program for testing some floating point and integer division
// evaluation semantics

#include <stdio.h>

int main(void) {
    printf("3.0 / 2 = %lf\n", 3.0 / 2);
    printf("3 / 2.0 = %lf\n", 3 / 2.0);
    printf("(1.0 * (3/2)) = %lf\n", (1.0 * (3/2)));
    printf("(1.0 * 3) / 2 = %lf\n", (1.0 * 3) / 2);

    return 0;
}