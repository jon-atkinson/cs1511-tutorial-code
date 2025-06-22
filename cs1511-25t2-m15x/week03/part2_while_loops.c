// part2_2d_while_loops.c
//
// Written by M15X,
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
      printf("# ");
      col++;
    }

    printf("\n");
    row++;
  }

  return 0;
}
