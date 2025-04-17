#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *array = malloc(8 * sizeof(int));

  array[0] = 0b0000000011111111;
  array[1] = 0b0000111100001111;
  array[2] = 0b0011001100110011;
  array[3] = 0b0101010101010101;

  int first_int = array[0];
  double first_double = array[0];
  long first_long = array[0];

  printf("as int: %d\n", first_int);
  printf("as double: %lf\n", first_double);
  printf("as long: %ld\n", first_long);

  return 0;
}
