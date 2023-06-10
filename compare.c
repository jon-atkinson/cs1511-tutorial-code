// this program reads in two integers, checks for some error conditions and if none
// found, prints out integer and double formatted division operations results
//
// written by Jonathan Atkinson (z5363013) on 08/06/2023

#include <stdio.h>

int main(void) {

  // Scan in two integers (a and b). 
  int a = 0;
  int b = 0;
  printf("Please enter the values for 'a' and 'b': ");
  scanf("%d %d", &a, &b);

  // If the first integer is less than the second, print out a short error message
  if (a < b) {
    printf("a needs to be greater than b\n");
  }

  // If the second integer is 0, print out a different short error message.
  if (b == 0) {
    printf("the second number cannot be 0\n");
  }

  // If the first integer is larger than the second, prints a / b and (a * 1.0) / (b * 1.0).
  if (a > b) {
    printf("a / b is %d, (a * 1.0 / b * 1.0) is %.5f\n", a / b, (a * 1.0 / b * 1.0));
  }

  return 0;
}