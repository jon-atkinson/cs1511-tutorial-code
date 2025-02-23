// part2_2d_while_loops.c
//
// Written by T15B
// on 11/06/2024
//
// This program is a simple demonstration of a 2D while loop 

#include <stdio.h>

#define MAX_ROW 5
#define MAX_COL 5

int main(void) {
    // outer loop
    int row = 0;
    while (row < MAX_ROW) {
        // inner loop prints one row
        int col = 0;
        while (col < MAX_COL) {
            printf("O");
            col++;
        }
        // make sure each row prints on the a line
        printf("\n");
        row++;
    }

    return 0;
}
