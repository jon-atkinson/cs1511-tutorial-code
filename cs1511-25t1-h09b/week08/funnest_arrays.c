#include <stdio.h>
#include <stdlib.h>

int main(void) {
  void *array = malloc(4 * sizeof(double));

  array[0] = 0b11111111111111111111111111111111;
  array[1] = 0b00001111000011110000111100001111;
  array[2] = 0b00110011001100110011001100110011;
  array[3] = 0b01010101010101010101010101010101;

  int first_int = array[0];
  double first_double = array[0];
  long first_long = array[0];

  printf("as int: %d\n", first_int);
  printf("as double: %lf\n", first_double);
  printf("as long: %ld\n", first_long);

  return 0;
}
