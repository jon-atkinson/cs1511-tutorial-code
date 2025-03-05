// part1_while_loops.c
//
// Written by T09B,
//
// This program is a simple demonstration of a count loop in c

#include <stdio.h>

int main(void) {
  int count = 1;

  while (count <= 10) {
    printf("%d\n", count);

    count++;
  }
  printf("End of loop\n");

  return 0;
}
