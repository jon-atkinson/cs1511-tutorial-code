// Jon Atkinson and COMP1511 H09C 23T3
// a small program to demonstrate detecting and fixing leaks
// to compile with leak checking enabled use the following command:
// dcc leak.c -o leak --leak-check

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *num_ptr = malloc(sizeof(int));
    *num_ptr = 7;
    printf("num_ptr pointing to %d\n", *num_ptr);

    free(num_ptr);
    printf("what happens when we access freed memory? %d (after being freed)\n", *num_ptr);

    return 0;
}