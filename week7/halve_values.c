// Jon Atkinson COMP1511 H09C 23T3
// Small program to demonstrate how we might use pointers to solve problems with
// changing many values in a function
#include <stdio.h>

void halve_values(int *num_1, int *num_2, int *num_3);

int main(void) {
    // num_1, num_2, num_3 are created in main
    int num_1 = 4;
    int num_2 = 10;
    int num_3 = 16;

    printf("Values before halved:\n");
    printf("Num 1: %d\n", num_1);
    printf("Num 2: %d\n", num_2);
    printf("Num 3: %d\n", num_3);

    // note: Don't have to create intermediate pointers, can pass in the values
    //       directly here
    halve_values(&num_1, &num_2, &num_3);

    printf("Values after halved:\n");
    printf("Num 1: %d\n", num_1);
    printf("Num 2: %d\n", num_2);
    printf("Num 3: %d\n", num_3);

    return 0;
}

// takes: three int pointers num_1, num_2, num_3
// returns: nothing
// halves the values at the addresses pointed to by num_1, num_2, num_3
void halve_values(int *num_1, int *num_2, int *num_3) {
                   // ^
                   // | note here the * is a part of the type (showing they're pointers)

//  |        | note in these 3 lines the * is dereferencing the addresses
//  v        v 
    *num_1 = *num_1 / 2;
    *num_2 = *num_2 / 2;
    *num_3 = *num_3 / 2;
}