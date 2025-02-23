// this program compares two integers 'a' and 'b' and prints out a msg depending
// on which is bigger
//
// written by Jonathan Atkinson (z5363013) on 08/06/2023

#include <stdio.h>

int main(void) {
  int a = 0;
  int b = 0;
  printf("Please enter the values for 'a' and 'b': ");
  scanf("%d %d", &a, &b);

  if (a < b) {
    printf("a needs to be greater than b\n");
  }
  if (a > b) {
    printf("a is greater than b\n");
  }
  else {
    printf("a and b are equal\n");
  }
  return 0;
}