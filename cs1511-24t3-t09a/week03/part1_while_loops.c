// part1_while_loops.c
//
// written by T15A
// on 13/06/2024
//
// This program is a simple demonstration of a count loop in c


#include <stdio.h>

int main(void) {
    int x = 0;
    while (x <= 10) {
        printf("%d\n", x);
        x++;
    }
    printf("End of loop!\n");

    return 0;
}
