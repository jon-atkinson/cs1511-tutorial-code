// Author: Jonathan Atkinson (z5363013)
// created 17/09/2023
#include <stdio.h>

int main(void) {
    // (7 / 2)
    int number = (7 / 2);
    printf("(7 / 2) is: %d\n", number);

    // (3.0 / 2) + 1
    // note: we can put the expression right into the printf as an arg, it will
    // evaluate fine
    printf("(3.0 / 2) + 1 is: %f\n", (3.0 / 2) + 1);

    // 'a' + 5
    printf("'a' + 5 is: %c\n", 'a' + 5);

    // 'A' + 5
    printf("'A' + 5 is: %c\n", 'A' + 5);

    // 'F' - 'A' + 'a'
    // note: what is this expression doing?
    printf("'F' - 'A' + 'a' is: %c\n", 'F' - 'A' + 'a');
    // printf("'F' - 'A' is: %d\n", 'F' - 'A');

    return 0;
}
