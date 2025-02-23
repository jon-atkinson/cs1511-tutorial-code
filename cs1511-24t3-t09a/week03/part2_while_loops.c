// part2_2d_while_loops.c
//
// written by W15B
// on 13/06/2024
//
// This program is a simple demonstration of a 2D while loop 

#include <stdio.h>

#define MAX_ROW 5
#define MAX_COL 5

int main(void) {
    int row = 0;
    while (row < MAX_ROW) {
        int col = 0;
        while (col < MAX_COL) {
            printf("%d ", col);

            col++;
        }

        row++;
    }

    return 0;
}

